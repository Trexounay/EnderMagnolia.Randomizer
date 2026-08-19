#pragma once

namespace ItemPrices
{
	struct Entry
	{
		const char* item;
		int price;
	};

	inline constexpr Entry Overrides[] =
	{
	{ "DT_ItemAptitudes.fast_travel",                        1000 },
	{ "DT_ItemAptitudes.hook",                                  0 },
	{ "DT_ItemAptitudes.SP",                                 1000 },
	{ "DT_ItemAptitudes.dash_charge",                         0 },
	{ "DT_ItemAptitudes.dash_charge_underwater",              0 },
	{ "DT_ItemAptitudes.dive",                                0 },
	{ "DT_ItemAptitudes.dodge",                               0 },
	{ "DT_ItemAptitudes.double_jump",                         0 },
	{ "DT_ItemAptitudes.heal",                               1000 },
	{ "DT_ItemAptitudes.high_jump",                           0 },
	{ "DT_ItemAptitudes.pile_attack",                         0 },
	{ "DT_ItemAptitudes.wall_charge",                         0 },
	{ "DT_ItemAptitudes.wall_grab",                           0 },

	{ "DT_ItemAssists.assist_001",                            0 },
	//{ "DT_ItemAssists.assist_002",                           2000 },     // vanilla: 2000
	//{ "DT_ItemAssists.assist_003",                           2000 },     // vanilla: 2000
	//{ "DT_ItemAssists.assist_004",                           2000 },     // vanilla: 2000
	//{ "DT_ItemAssists.assist_005",                           2000 },     // vanilla: 2000
	{ "DT_ItemAssists.assist_006",                           2000 },
	//{ "DT_ItemAssists.assist_007",                           5000 },     // vanilla: 5000
	//{ "DT_ItemAssists.assist_008",                           5000 },     // vanilla: 5000
	{ "DT_ItemAssists.assist_009",                           5000 },
	{ "DT_ItemAssists.assist_010",                           5000 },
	//{ "DT_ItemAssists.assist_011",                           5000 },     // vanilla: 5000
	{ "DT_ItemAssists.assist_012",                            0 },       // vanilla: 5000

	{ "DT_ItemCostumes.p0000",                                  500 },
	{ "DT_ItemCostumes.p0010",                                  500 },
	{ "DT_ItemCostumes.p0011",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0020",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0021",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0030",                                  500 },
	{ "DT_ItemCostumes.p0031",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0040",                                  500 },
	{ "DT_ItemCostumes.p0041",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0042",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0050",                                  500 },
	{ "DT_ItemCostumes.p0051",                                  500 },   // vanilla: 6000 
	{ "DT_ItemCostumes.p0060",                                  500 },   // vanilla: 12000 

	{ "DT_ItemCurrencies.Default",                              0 },
	{ "DT_ItemCurrencies.grade",                                0 },
	{ "DT_ItemCurrencies.rare",                                 0 },

	//{ "DT_ItemEquipments.armor_001",                          200 },     // vanilla: 200
	//{ "DT_ItemEquipments.armor_002",                           80 },     // vanilla: 80
	//{ "DT_ItemEquipments.armor_003",                          350 },     // vanilla: 350
	//{ "DT_ItemEquipments.armor_004",                          450 },     // vanilla: 450
	//{ "DT_ItemEquipments.armor_005",                          600 },     // vanilla: 600
	//{ "DT_ItemEquipments.armor_006",                          900 },     // vanilla: 900
	{ "DT_ItemEquipments.armor_007",                          900 },
	{ "DT_ItemEquipments.armor_008",                         1500 },
	//{ "DT_ItemEquipments.armor_009",                         1500 },     // vanilla: 1500
	//{ "DT_ItemEquipments.armor_010",                         1050 },     // vanilla: 1050
	//{ "DT_ItemEquipments.armor_011",                         2100 },     // vanilla: 2100
	//{ "DT_ItemEquipments.armor_012",                         2650 },     // vanilla: 2650
	//{ "DT_ItemEquipments.armor_013",                         3800 },     // vanilla: 3800
	{ "DT_ItemEquipments.armor_014",                         3800 },
	{ "DT_ItemEquipments.armor_015",                         4150 },
	//{ "DT_ItemEquipments.armor_016",                         4150 },     // vanilla: 4150
	//{ "DT_ItemEquipments.armor_017",                         6300 },     // vanilla: 6300
	//{ "DT_ItemEquipments.armor_018",                         6700 },     // vanilla: 6700
	//{ "DT_ItemEquipments.armor_019",                         7500 },     // vanilla: 7500
	{ "DT_ItemEquipments.armor_020",                         7500 },
	{ "DT_ItemEquipments.armor_021",                         7500 },
	//{ "DT_ItemEquipments.shield_001",                         350 },     // vanilla: 350
	//{ "DT_ItemEquipments.shield_002",                         350 },     // vanilla: 350
	//{ "DT_ItemEquipments.shield_003",                        1300 },     // vanilla: 1300
	//{ "DT_ItemEquipments.shield_004",                        1300 },     // vanilla: 1300
	//{ "DT_ItemEquipments.shield_005",                        3100 },     // vanilla: 3100
	//{ "DT_ItemEquipments.shield_006",                        3100 },     // vanilla: 3100
	//{ "DT_ItemEquipments.shield_007",                        4600 },     // vanilla: 4600
	{ "DT_ItemEquipments.shield_008",                        4600 },
	{ "DT_ItemEquipments.shield_009",                        4600 },

	{ "DT_ItemQuests.quest_amulet",                           0 },
	{ "DT_ItemQuests.quest_artifact",                         0 },
	{ "DT_ItemQuests.quest_bird",                             0 },
	{ "DT_ItemQuests.quest_board",                            0 },
	{ "DT_ItemQuests.quest_eye",                              0 },
	{ "DT_ItemQuests.quest_lithograph",                       0 },
	{ "DT_ItemQuests.quest_perfume",                          0 },
	{ "DT_ItemQuests.quest_stone",                            0 },

	{ "DT_ItemKeys.key_higher_a",                             0 },
	{ "DT_ItemKeys.key_higher_b",                             0 },
	{ "DT_ItemKeys.key_lower",                                0 },
	{ "DT_ItemKeys.key_owner",                                0 },
	{ "DT_ItemKeys.key_ruins_tuto",                           0 },

	{ "DT_ItemMaterials.parts_lv2_b",                         250 },
	//{ "DT_ItemMaterials.parts_lv2_c",                         250 },     // vanilla: 250
	{ "DT_ItemMaterials.parts_lv3_a",                         500 },
	{ "DT_ItemMaterials.parts_lv3_b",                         500 },
	//{ "DT_ItemMaterials.parts_lv3_c",                         500 },     // vanilla: 500
	{ "DT_ItemMaterials.parts_lv4_a",                        1000 },
	{ "DT_ItemMaterials.parts_lv4_b",                        1000 },
	//{ "DT_ItemMaterials.parts_lv4_c",                        1000 },     // vanilla: 1000
	{ "DT_ItemMaterials.parts_lv5_a",                        2250 },
	{ "DT_ItemMaterials.parts_lv5_b",                        2250 },
	//{ "DT_ItemMaterials.parts_lv5_c",                        2250 },     // vanilla: 2250
	{ "DT_ItemMaterials.parts_lv6_a",                        5500 },
	{ "DT_ItemMaterials.parts_lv6_b",                        5500 },
	//{ "DT_ItemMaterials.parts_lv6_c",                        5500 },     // vanilla: 5500
	{ "DT_ItemMaterials.parts_s5000_a",                      5500 },
	{ "DT_ItemMaterials.parts_s5000_b",                      5500 },
	{ "DT_ItemMaterials.parts_s5000_c",                      5500 },

	{ "DT_ItemPassives.damage_cut_debuff_down_1",               1000 },
	{ "DT_ItemPassives.damage_cut_debuffed_1",                  1000 },
	{ "DT_ItemPassives.damage_cut_maxhp_1",                     1000 },
	{ "DT_ItemPassives.damage_cut_minhp_1",                     1000 },
	{ "DT_ItemPassives.damage_cut_physic_1",                    1000 },
	{ "DT_ItemPassives.damage_cut_sp_gauge_1",                  1000 },
	{ "DT_ItemPassives.damage_up_airborne_1",                   1000 },
	{ "DT_ItemPassives.damage_up_debuffed_1",                   1000 },
	{ "DT_ItemPassives.damage_up_grounded_1",                   1000 },
	{ "DT_ItemPassives.damage_up_maxhp_1",                      1000 },
	{ "DT_ItemPassives.damage_up_minhp_1",                      1000 },
	{ "DT_ItemPassives.damage_up_skillcategory_auto_1",         1000 },
	{ "DT_ItemPassives.damage_up_skillcategory_combo_1",        1000 },
	{ "DT_ItemPassives.damage_up_skillcategory_defence_1",      1000 },
	{ "DT_ItemPassives.damage_up_skillcategory_repeat_1",       1000 },
	{ "DT_ItemPassives.damage_up_skillcategory_special_1",      1000 },
	{ "DT_ItemPassives.damage_up_sp_gauge_1",                   1000 },
	{ "DT_ItemPassives.damage_up_swimming_1",                   1000 },
	{ "DT_ItemPassives.damage_up_targetdebuffed_1",             1000 },
	{ "DT_ItemPassives.damage_up_targetstunned_1",              1000 },
	{ "DT_ItemPassives.debuff_cut_burn_1",                      1000 },
	{ "DT_ItemPassives.debuff_damage_up_a_1",                   1000 },
	{ "DT_ItemPassives.debuff_damage_up_b_1",                   1000 },
	//{ "DT_ItemPassives.dodge_long",                             3300 },  // vanilla: 3300
	{ "DT_ItemPassives.ending_flag",                            1000 },
	{ "DT_ItemPassives.experience_up_1",                        1000 },
	//{ "DT_ItemPassives.exploration_charge_short",               4350 },  // vanilla: 4350
	{ "DT_ItemPassives.gold_up_1",                              1000 },
	//{ "DT_ItemPassives.heal_short",                             2100 },  // vanilla: 2100
	//{ "DT_ItemPassives.higher_mobility",                        1050 },  // vanilla: 1050
	{ "DT_ItemPassives.junk_up_1",                              1000 },
	{ "DT_ItemPassives.onattack_instantkill_1",                 1000 },
	{ "DT_ItemPassives.onattack_restorehp_1",                   1000 },
	{ "DT_ItemPassives.onattack_restorehp_damage_1",            1000 },
	{ "DT_ItemPassives.onkill_drops_1",                         1000 },
	{ "DT_ItemPassives.onkill_reduce_cooldowns_1",              1000 },
	{ "DT_ItemPassives.onkill_restorehp_1",                     1000 },
	{ "DT_ItemPassives.onkill_restoresp_1",                     1000 },
	{ "DT_ItemPassives.reduce_gravity",                         0 },
	{ "DT_ItemPassives.reduce_skill_cooldown_1",                1000 },
	{ "DT_ItemPassives.restore_sp_up_a_1",                      1000 },
	{ "DT_ItemPassives.restore_sp_up_b_1",                      1000 },
	{ "DT_ItemPassives.stamina_damage_up_a_1",                  1000 },
	{ "DT_ItemPassives.stamina_damage_up_b_1",                  1000 },

	{ "DT_ItemSkills.s5000_sword",                              0 },
	{ "DT_ItemSkills.s5001_scythe",                             0 },
	{ "DT_ItemSkills.s5002_axe",                                0 },
	{ "DT_ItemSkills.s5010_blaster",                            0 },
	{ "DT_ItemSkills.s5011_lazer",                              0 },
	{ "DT_ItemSkills.s5012_granade",                            0 },
	{ "DT_ItemSkills.s5030_punch",                              500 },
	{ "DT_ItemSkills.s5031_bomb",                               500 },
	{ "DT_ItemSkills.s5032_roket",                              500 },
	{ "DT_ItemSkills.s5040_reflect",                            500 },
	{ "DT_ItemSkills.s5041_gravit",                             500 },
	{ "DT_ItemSkills.s5042_ignit",                              500 },
	{ "DT_ItemSkills.s5050_moon",                               0 },
	{ "DT_ItemSkills.s5051_snow",                               0 },
	{ "DT_ItemSkills.s5052_flower",                             0 },
	{ "DT_ItemSkills.s5060_chain",                              500 },
	{ "DT_ItemSkills.s5061_horn",                               500 },
	{ "DT_ItemSkills.s5062_voice",                              500 },
	{ "DT_ItemSkills.s5070_fire",                               500 },
	{ "DT_ItemSkills.s5071_thunder",                            500 },
	{ "DT_ItemSkills.s5072_ice",                                500 },
	{ "DT_ItemSkills.s5080_wing",                               500 },
	{ "DT_ItemSkills.s5081_trail",                              500 },
	{ "DT_ItemSkills.s5082_gast",                               500 },
	{ "DT_ItemSkills.s5090_homing",                             500 },
	{ "DT_ItemSkills.s5091_stun",                               500 },
	{ "DT_ItemSkills.s5092_fall",                               500 },
	{ "DT_ItemSkills.s5110_gatling",                            500 },
	{ "DT_ItemSkills.s5111_saw",                                500 },
	{ "DT_ItemSkills.s5112_drill",                              500 },

	{ "DT_ItemSpirits.s5000_reaper",                            0 },
	{ "DT_ItemSpirits.s5010_lancer",                            0 },
	{ "DT_ItemSpirits.s5030_rogue",                             0 },
	{ "DT_ItemSpirits.s5040_maiden",                            0 },
	{ "DT_ItemSpirits.s5050_ronin",                             0 },
	{ "DT_ItemSpirits.s5060_beast",                             0 },
	{ "DT_ItemSpirits.s5070_witch",                             0 },
	{ "DT_ItemSpirits.s5080_hawk",                              0 },
	{ "DT_ItemSpirits.s5090_owl",                               0 },
	{ "DT_ItemSpirits.s5110_gunman",                            0 },

	//{ "DT_ItemStats.attack_up_s",                           30000 },     // vanilla: 30000
	//{ "DT_ItemStats.defense_up_s",                          20000 },     // vanilla: 20000
	//{ "DT_ItemStats.hp_up_l",                                5000 },     // vanilla: 5000
	//{ "DT_ItemStats.hp_up_s",                                 500 },     // vanilla: 500
	//{ "DT_ItemStats.passive_slot_l",                         5000 },     // vanilla: 5000
	//{ "DT_ItemStats.passive_slot_s",                            0 },     // vanilla: Curve
	{ "DT_ItemStats.shop_line_up",                            0 },

	{ "DT_ItemTips.tip_administrationrecord_01",                0 },
	{ "DT_ItemTips.tip_bloodstaineddiary_01",                   0 },
	{ "DT_ItemTips.tip_caladriusrecord_01",                     0 },
	{ "DT_ItemTips.tip_cassiabook_01",                          0 },
	{ "DT_ItemTips.tip_chieftunerjournal_01",                   0 },
	{ "DT_ItemTips.tip_corrosionboard_01",                      0 },
	{ "DT_ItemTips.tip_degrandsrecord_01",                      0 },
	{ "DT_ItemTips.tip_disposaljournal_01",                     0 },
	{ "DT_ItemTips.tip_engineermemoirs_01",                     0 },
	{ "DT_ItemTips.tip_enhancementplan_01",                     0 },
	{ "DT_ItemTips.tip_fightingtower_01",                       0 },
	{ "DT_ItemTips.tip_freeze_01",                              0 },
	{ "DT_ItemTips.tip_frostgrimoire_01",                       0 },
	{ "DT_ItemTips.tip_frostsrecord_01",                        0 },
	{ "DT_ItemTips.tip_frostsrecord_02",                        0 },
	{ "DT_ItemTips.tip_gilroyrecords_01",                       0 },
	{ "DT_ItemTips.tip_gilroysterminal_01",                     0 },
	{ "DT_ItemTips.tip_homunculusrecord_01",                    0 },
	{ "DT_ItemTips.tip_homunculusrecord_02",                    0 },
	{ "DT_ItemTips.tip_landend_01",                             0 },
	{ "DT_ItemTips.tip_lightsilence_01",                        0 },
	{ "DT_ItemTips.tip_liliasdiary_01",                         0 },
	{ "DT_ItemTips.tip_lowestrecord_01",                        0 },
	{ "DT_ItemTips.tip_magicrecord_01",                         0 },
	{ "DT_ItemTips.tip_miliusbook_01",                          0 },
	{ "DT_ItemTips.tip_mothersnote_01",                         0 },
	{ "DT_ItemTips.tip_motleysterminal_01",                     0 },
	{ "DT_ItemTips.tip_painting_01",                            0 },
	{ "DT_ItemTips.tip_prisonwall_01",                          0 },
	{ "DT_ItemTips.tip_prophecybook_01",                        0 },
	{ "DT_ItemTips.tip_raggedpastedown_01",                     0 },
	{ "DT_ItemTips.tip_researchersjournal_01",                  0 },
	{ "DT_ItemTips.tip_ruinsrecords_01",                        0 },
	{ "DT_ItemTips.tip_searchrecord_01",                        0 },
	{ "DT_ItemTips.tip_secretletter_01",                        0 },
	{ "DT_ItemTips.tip_surveillancerecord_01",                  0 },
	{ "DT_ItemTips.tip_tombstone_01",                           0 },
	{ "DT_ItemTips.tip_tornjournal_01",                         0 },
	{ "DT_ItemTips.tip_tornletter_01",                          0 },
	{ "DT_ItemTips.tip_towerumbrella_01",                       0 },
	{ "DT_ItemTips.tip_townboard_01",                           0 },
	{ "DT_ItemTips.tip_tunerjournal_01",                        0 },
	{ "DT_ItemTips.tip_tunerletter_01",                         0 },
	{ "DT_ItemTips.tip_upperterminal_01",                       0 },
	{ "DT_ItemTips.tip_vials_01",                               0 },
	{ "DT_ItemTips.tip_workerscode_01",                         0 },
	{ "DT_ItemTips.tip_writingwall_01",                         0 },
	{ "DT_ItemTips.tip_yoransdiary_01",                         0 },
	{ "DT_ItemTips.tip_yoransdiary_02",                         0 },

	{ "DT_ItemKeys.key_elevator",                               0 },

	{ "DT_ItemAptitudes.progressive_dive",                      0 },
	{ "DT_ItemAptitudes.progressive_wall_grab",                 0 },
	};
}
