class WW2_russ {
	class Rifleman {
		scope = 1;
		kitGroup = "Unlimited";
		availableInGroups[] = { "Rifle", "Weapon", "Mortar" };

		// Display
		displayName = "Rifleman";
		icon = "";
		UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
		mapIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
		compassIcon[] = { "a3\ui_f\data\map\Markers\Military\dot_ca.paa", 3.6 };

		// Special attributes
		isLeader = 0;
		isMedic = 0;
		isEngineer = 0;
		isPilot = 0;
		isCrew = 0;

		// Primary weapon
		primaryWeapon = "LIB_M9130";
		primaryAttachments[] = { };
		primaryMagazine = "LIB_5Rnd_762x54";
		primaryMagazineCount = 10;
		primaryMagazineTracer = "";
		primaryMagazineTracerCount = 0;

		// Secondary weapon
		secondaryWeapon = "";
		secondaryMagazine = "";
		secondaryMagazineCount = 0;

		// Handgun weapon
		handgunWeapon = "";
		handgunMagazine = "";
		handgunMagazineCount = 0;

		// Uniform
		uniform = "U_LIB_NKVD_Strelok";
		vest = "V_LIB_SOV_RA_MosinBelt";
		backpack = "B_LIB_SOV_RA_Rucksack";
		headGear = "H_LIB_SOV_RA_Helmet";

		// Items
		assignedItems[] = { "ItemWatch", "ItemCompass", "ItemMap"};
		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 2 },{ "LIB_RDG", 2 } };
	};
	class Officer : Rifleman {
		availableInGroups[] = { "Rifle", "Weapon", "Mortar" };

		displayName = "Squad Leader";
		primaryWeapon = "LIB_PPSh41_m";
		primaryMagazine = "LIB_35Rnd_762x25";
		primaryMagazineCount = 7;

		isLeader = 1;

		vest = "V_LIB_SOV_RA_OfficerVest";
		headGear = "H_LIB_NKVD_OfficerCap";
		secondaryWeapon = "Binocular";
		secondaryMagazine = "";
		secondaryMagazineCount = 0;

		primaryAttachments[] = {};


		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 2 } };
		icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
		UIIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
		mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
		compassIcon[] = { "a3\ui_f\data\gui\cfg\ranks\corporal_gs.paa", 1.3 };
	};
	class Medic : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle", "Weapon" };

		displayName = "Medic";

		isMedic = 1;

		primaryMagazineCount = 6;
		backpack = "B_LIB_SOV_RA_MedicalBag_Empty";
		vest = "V_LIB_US_Vest_Medic";
		items[] = { { "FirstAidKit", 4 },{ "LIB_F1", 1 },{ "LIB_RDG", 4 }, "Medikit" };

		icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
		UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
		mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
		compassIcon[] = { "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2 };
	};
	class AutomaticRifleman : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };

		displayName = "Automatic Rifleman";

		primaryWeapon = "LIB_DP28";
		primaryMagazine = "LIB_47Rnd_762x54";
		primaryMagazineCount = 8;
		primaryMagazineTracer = "LIB_47Rnd_762x54";
		primaryMagazineTracerCount = 0;
		items[] = { { "FirstAidKit", 1 } };
		vest = "V_LIB_SOV_IShBrVestMG";

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class Grenadier : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Grenadier";

		primaryWeapon = "LIB_M9130";
		primaryMagazineCount = 8;
		primaryAttachments[] = { "LIB_ACC_GL_DYAKONOV_Empty" };
		items[] += { {"LIB_1Rnd_G_DYAKONOV", 8} };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
	};
	class Marksman : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Marksman";

		primaryWeapon = "LIB_M9130PU";
		primaryMagazine = " LIB_5Rnd_762x54";
		primaryMagazineCount = 6;

		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 2 } };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
	};
	class LightAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };
		primaryMagazineCount = 6;
		secondaryWeapon = "B_AssaultPack_blk";
		secondaryMagazine = "LIB_1Rnd_RPzB";
		secondaryMagazineCount = 2;
		backpack = "B_LIB_SOV_RA_Rucksack2";
		displayName = "LAT Rifleman";
		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 2 } };
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "HAT Rifleman";
		primaryMagazineCount = 5;
		secondaryWeapon = "B_AssaultPack_blk";
		secondaryMagazine = "LIB_1Rnd_RPzB";
		secondaryMagazineCount = 2;
		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 2 } };
		backpack = "B_LIB_SOV_RA_Rucksack2";
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyMachineGun : AutomaticRifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "M1919 Rifleman";
		primaryWeapon = "LIB_DT";
		primaryMagazine = "LIB_63Rnd_762x54";
		primaryMagazineCount = 4;

		vest = "V_LIB_SOV_IShBrVestMG";

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class AmmoBearer : Rifleman {
		availableInGroups[] = { "Weapon" };

		displayName = "Ammo Bearer";
		vest = "V_LIB_SOV_RA_PPShBelt";
		items[] += { {"LIB_63Rnd_762x54", 3} };
	};
	class Crewman : Rifleman {
		availableInGroups[] = { "Vehicle" };

		displayName = "Crewman";

		primaryWeapon = "LIB_PPSh41_m";
		primaryMagazine = "LIB_35Rnd_762x25";

		secondaryWeapon = "LIB_M1895";
		secondaryMagazine = "LIB_7Rnd_762x38";
		secondaryMagazineCount = 3;

		uniform = "U_LIB_SOV_Tank_ryadovoi";
		headGear = "H_LIB_SOV_TankHelmet";
		primaryMagazineCount = 3;
		vest = "";

		items[] = { { "FirstAidKit", 2 },{ "LIB_RDG", 2 } };

		isCrew = 1;
	};

	class Sniper : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Recon" };

		displayName = "Sniper";

		primaryWeapon = "LIB_M9130PU";
		primaryMagazine = "LIB_5Rnd_762x54";
		primaryMagazineCount = 7;
		primaryMagazineTracerCount = 0;

		uniform = "U_LIB_SOV_Sniper_spring";

		secondaryWeapon = "LIB_Colt_M1911";
		secondaryMagazine = "LIB_7Rnd_45ACP";
		secondaryMagazineCount = 4;

		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 1 } };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
	};
	class Spotter : Rifleman {
		availableInGroups[] = { "Recon" };

		displayName = "Spotter";
		UIIcon = "A3\ui_f\data\gui\rsc\rscdisplayarsenal\binoculars_ca.paa";

		uniform = "U_LIB_SOV_Sniper_spring";
		secondaryWeapon = "Rangefinder";

		primaryMagazineCount = 5;
		primaryMagazineTracerCount = 0;

		items[] = { { "FirstAidKit", 2 },{ "LIB_F1", 1 },{ "LIB_RDG", 1 } };
	};
	class Specialist : Rifleman {
		availableInGroups[] = { "Recon" };

		displayName = "Specialist";
	};
};
