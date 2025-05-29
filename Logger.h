#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <windows.h>


enum class LogLevel {
	Info,
	Warning,
	Error,
	Debug
};

class Logger {
public:
	static void Init();

	template<typename T, typename... Args>
	static typename std::enable_if<
		!std::is_same<std::remove_cv_t<std::remove_pointer_t<T>>, char>::value, void>::type
		Log(T* obj, Args&&... args)
	{
		Log(LogLevel::Info, obj, std::forward<Args>(args)...);
	}

	template<typename T, typename... Args>
	static typename std::enable_if<
		!std::is_same<std::remove_cv_t<std::remove_pointer_t<T>>, char>::value, void>::type
		Log(LogLevel level, T* obj, Args&&... args)
	{
		Print(level, "[" + GetName(obj) + "]", std::forward<Args>(args)...);
	}

	template<typename... Args>
	static void Log(Args&&... args)
	{
		Log(LogLevel::Info, "[Global]", std::forward<Args>(args)...);
	}

	template<typename... Args>
	static void Log(LogLevel level, Args&&... args)
	{
		Print(level, "[Global]", std::forward<Args>(args)...);
	}

	template<typename... Args>
	static void Print(LogLevel level, Args&&... args)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
		WORD oldColor = consoleInfo.wAttributes;

		WORD color = oldColor;
		switch (level)
		{
		case LogLevel::Info:    color = FOREGROUND_GREEN; break;
		case LogLevel::Warning: color = FOREGROUND_RED | FOREGROUND_GREEN; break;
		case LogLevel::Error:   color = FOREGROUND_RED | FOREGROUND_INTENSITY; break;
		case LogLevel::Debug:   color = FOREGROUND_GREEN | FOREGROUND_INTENSITY; break;
		}

		SetConsoleTextAttribute(hConsole, color);

		std::ostringstream stream;
		((stream << std::forward<Args>(args) << ' '), ...);
		std::cout << stream.str() << std::endl;

		// Restaure l’ancienne couleur
		SetConsoleTextAttribute(hConsole, oldColor);
	}

private:
	template<typename T>
	static std::string GetName(T* obj)
	{
		if (obj == nullptr) return "Null";
		auto rawName = typeid(*obj).name();

		if (strncmp(rawName, "class ", 6) == 0) {
			return std::string(rawName + 6);
		}
		return rawName;
	}
};
