class WW2_101ST {
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
		primaryWeapon = "LIB_M1_Garand";
		primaryAttachments[] = { };
		primaryMagazine = "LIB_8Rnd_762x63";
		primaryMagazineCount = 10;
		primaryMagazineTracer = "LIB_8Rnd_762x63";
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
		uniform = "U_LIB_US_AB_Uniform_M42";
		vest = "V_LIB_US_AB_Vest_Garand";
		backpack = "B_LIB_US_M36";
		headGear = "H_LIB_US_AB_Helmet";

		// Items
		assignedItems[] = { "ItemWatch", "ItemCompass", "ItemMap"};
		items[] = { { "FirstAidKit",2 },{ "LIB_US_Mk_2",2 },{ "LIB_US_M18", 2 } };
	};
	class Officer : Rifleman {
		availableInGroups[] = { "Rifle", "Weapon", "Mortar" };

		displayName = "Squad Leader";
		primaryWeapon = "LIB_M1A1_Thompson";
		primaryMagazine = "LIB_30Rnd_45ACP";

		primaryMagazineCount = 7;

		isLeader = 1;

		vest = "V_LIB_US_AB_Vest_Thompson";

		secondaryWeapon = "Binocular";
		secondaryMagazine = "LIB_7Rnd_45ACP";
		secondaryMagazineCount = 4;

		primaryAttachments[] = {};


		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 2 } };
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
		headgear = "H_LIB_US_AB_Helmet_Medic_1";
		backpack = "B_LIB_US_M36";
		vest = "V_LIB_US_Vest_Medic";
		items[] = { { "FirstAidKit", 4 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 4 }, "Medikit" };

		icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
		UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
		mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
		compassIcon[] = { "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2 };
	};
	class AutomaticRifleman : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };

		displayName = "Automatic Rifleman";

		primaryWeapon = "LIB_M1918A2_BAR";
		primaryMagazine = "LIB_20Rnd_762x63";
		primaryMagazineCount = 8;
		primaryMagazineTracer = "LIB_20Rnd_762x63";
		primaryMagazineTracerCount = 0;
		//backpack = "B_AssaultPack_rgr";
		items[] = { { "FirstAidKit", 1 } };
		vest = "V_LIB_US_AB_Vest_Bar";

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class Grenadier : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Grenadier";

		primaryWeapon = "LIB_M1_Garand";
		primaryMagazineCount = 8;
		primaryAttachments[] = { "LIB_ACC_GL_M7" };
		items[] += { {"LIB_1Rnd_G_M9A1", 8} };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
	};
	class Marksman : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Marksman";

		primaryWeapon = "LIB_M1903A4_Springfield";
		primaryMagazine = " LIB_5Rnd_762x63";
		primaryMagazineCount = 6;

		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 2 } };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
	};
	class AntiAir : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "AA Rifleman";

		secondaryWeapon = "launch_I_Titan_F";
		secondaryMagazine = "Titan_AA";
		secondaryMagazineCount = 2;
		backpack = "B_FieldPack_oli";
		primaryMagazineCount = 5;
		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 2 } };
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
	};
	class LightAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };
		primaryMagazineCount = 6;
		secondaryWeapon = "LIB_M1A1_Bazooka";
		secondaryMagazine = "LIB_1Rnd_60mm_M6";
		secondaryMagazineCount = 2;
		backpack = "B_LIB_US_RocketBag_Empty";
		displayName = "LAT Rifleman";
		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 2 } };
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "HAT Rifleman";
		primaryMagazineCount = 5;
		secondaryWeapon = "LIB_M1A1_Bazooka";
		secondaryMagazine = "LIB_1Rnd_60mm_M6";
		secondaryMagazineCount = 2;
		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 2 } };
		backpack = "B_LIB_US_RocketBag_Empty";
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyMachineGun : AutomaticRifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "M1919 Rifleman";
		primaryWeapon = "LIB_M1919A4";
		primaryMagazine = "LIB_50Rnd_762x63";
		primaryMagazineCount = 4;

		vest = "V_LIB_US_AB_Vest_Bar";

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class AmmoBearer : Rifleman {
		availableInGroups[] = { "Weapon" };

		displayName = "Ammo Bearer";
		vest = "V_LIB_US_Vest_Asst_MG";
		backpack = "B_LIB_US_Backpack";
		items[] += { {"LIB_50Rnd_762x63", 3} };
	};
	class Crewman : Rifleman {
		availableInGroups[] = { "Vehicle" };

		displayName = "Crewman";

		primaryWeapon = "LIB_M1_Carbine";
		primaryMagazine = "LIB_15Rnd_762x33";

		secondaryWeapon = "LIB_Colt_M1911";
		secondaryMagazine = "LIB_7Rnd_45ACP";
		secondaryMagazineCount = 3;

		uniform = "U_LIB_US_Tank_Crew";
		headGear = "H_LIB_US_Helmet_Tank";
		primaryMagazineCount = 3;
		vest = "";

		items[] = { { "FirstAidKit", 2 },{ "LIB_US_M18", 2 } };

		isCrew = 1;
	};
	class HelicopterPilot : Rifleman {
		availableInGroups[] = { "Helicopter" };

		displayName = "Pilot";

		primaryWeapon = "arifle_Mk20C_F";

		uniform = "U_I_HeliPilotCoveralls";
		headGear = "H_PilotHelmetHeli_I";
		primaryMagazineCount = 3;
		vest = "";

		items[] = { { "FirstAidKit", 2 },{ "LIB_US_M18", 2 } };

		isPilot = 1;
	};

	class Sniper : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Recon" };

		displayName = "Sniper";

		primaryWeapon = "LIB_M1903A4_Springfield";
		primaryMagazine = "LIB_10Rnd_792x57";
		primaryMagazineCount = 7;
		primaryMagazineTracerCount = 0;

		secondaryWeapon = "LIB_Colt_M1911";
		secondaryMagazine = "LIB_7Rnd_45ACP";
		secondaryMagazineCount = 4;

		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 1 } };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
	};
	class Spotter : Rifleman {
		availableInGroups[] = { "Recon" };

		displayName = "Spotter";
		UIIcon = "A3\ui_f\data\gui\rsc\rscdisplayarsenal\binoculars_ca.paa";

		uniform = "U_I_FullGhillie_lsh";
		secondaryWeapon = "Rangefinder";

		primaryWeapon = "arifle_Mk20_F";
		primaryAttachments[] = { "optic_MRCO","bipod_03_F_blk" };
		primaryMagazineCount = 5;
		primaryMagazineTracerCount = 0;

		items[] = { { "FirstAidKit", 2 },{ "LIB_US_Mk_2", 1 },{ "LIB_US_M18", 1 } };
	};
	class Specialist : Rifleman {
		availableInGroups[] = { "Recon" };

		displayName = "Specialist";
	};
};
