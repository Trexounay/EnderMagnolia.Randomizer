#pragma once
#define WIN32_LEAN_AND_MEAN
#include <cstdio>
#include <Windows.h>

HINSTANCE m_hinst_dll = nullptr;
extern "C" UINT_PTR mProcs[17]{ 0 };

LPCSTR import_names[] = {
    "GetFileVersionInfoA",
    "GetFileVersionInfoByHandle",
    "GetFileVersionInfoExA",
    "GetFileVersionInfoExW",
    "GetFileVersionInfoSizeA",
    "GetFileVersionInfoSizeExA",
    "GetFileVersionInfoSizeExW",
    "GetFileVersionInfoSizeW",
    "GetFileVersionInfoW",
    "VerFindFileA",
    "VerFindFileW",
    "VerInstallFileA",
    "VerInstallFileW",
    "VerLanguageNameA",
    "VerLanguageNameW",
    "VerQueryValueA",
    "VerQueryValueW"
};

void setupWrappers()
{
    CHAR sys_dir[MAX_PATH];
    GetSystemDirectoryA(sys_dir, MAX_PATH);
    char buffer[MAX_PATH];
    sprintf_s(buffer, "%s\\version.dll", sys_dir);
    m_hinst_dll = LoadLibraryA(buffer);
    for (int i = 0; i < 17; i++) {
        mProcs[i] = reinterpret_cast<UINT_PTR>(GetProcAddress(m_hinst_dll, import_names[i]));
    }
}


// Implementation macros
#define FORWARD_FUNC(index, rettype, name, args, callargs) \
rettype WINAPI name##_wrapper args { \
    using Fn = rettype (WINAPI*) args; \
    return ((Fn)mProcs[index]) callargs; \
}

// Define the functions using the macro (same as earlier)
FORWARD_FUNC(0, BOOL, GetFileVersionInfoA, (LPCSTR a, DWORD b, DWORD c, LPVOID d), (a, b, c, d))
FORWARD_FUNC(1, BOOL, GetFileVersionInfoByHandle, (HANDLE a, LPVOID b), (a, b))
FORWARD_FUNC(2, BOOL, GetFileVersionInfoExA, (DWORD a, LPCSTR b, DWORD c, DWORD d, LPVOID e), (a, b, c, d, e))
FORWARD_FUNC(3, BOOL, GetFileVersionInfoExW, (DWORD a, LPCWSTR b, DWORD c, DWORD d, LPVOID e), (a, b, c, d, e))
FORWARD_FUNC(4, DWORD, GetFileVersionInfoSizeA, (LPCSTR a, LPDWORD b), (a, b))
FORWARD_FUNC(5, DWORD, GetFileVersionInfoSizeExA, (DWORD a, LPCSTR b, LPDWORD c), (a, b, c))
FORWARD_FUNC(6, DWORD, GetFileVersionInfoSizeExW, (DWORD a, LPCWSTR b, LPDWORD c), (a, b, c))
FORWARD_FUNC(7, DWORD, GetFileVersionInfoSizeW, (LPCWSTR a, LPDWORD b), (a, b))
FORWARD_FUNC(8, BOOL, GetFileVersionInfoW, (LPCWSTR a, DWORD b, DWORD c, LPVOID d), (a, b, c, d))
FORWARD_FUNC(9, DWORD, VerFindFileA, (DWORD a, LPCSTR b, LPCSTR c, LPCSTR d, LPSTR e, PUINT f, LPSTR g, PUINT h), (a, b, c, d, e, f, g, h))
FORWARD_FUNC(10, DWORD, VerFindFileW, (DWORD a, LPCWSTR b, LPCWSTR c, LPCWSTR d, LPWSTR e, PUINT f, LPWSTR g, PUINT h), (a, b, c, d, e, f, g, h))
FORWARD_FUNC(11, DWORD, VerInstallFileA, (DWORD a, LPCSTR b, LPCSTR c, LPCSTR d, LPCSTR e, LPCSTR f, LPSTR g, PUINT h), (a, b, c, d, e, f, g, h))
FORWARD_FUNC(12, DWORD, VerInstallFileW, (DWORD a, LPCWSTR b, LPCWSTR c, LPCWSTR d, LPCWSTR e, LPCWSTR f, LPWSTR g, PUINT h), (a, b, c, d, e, f, g, h))
FORWARD_FUNC(13, DWORD, VerLanguageNameA, (DWORD a, LPSTR b, DWORD c), (a, b, c))
FORWARD_FUNC(14, DWORD, VerLanguageNameW, (DWORD a, LPWSTR b, DWORD c), (a, b, c))
FORWARD_FUNC(15, BOOL, VerQueryValueA, (LPCVOID a, LPCSTR b, LPVOID* c, PUINT d), (a, b, c, d))
FORWARD_FUNC(16, BOOL, VerQueryValueW, (LPCVOID a, LPCWSTR b, LPVOID* c, PUINT d), (a, b, c, d))
