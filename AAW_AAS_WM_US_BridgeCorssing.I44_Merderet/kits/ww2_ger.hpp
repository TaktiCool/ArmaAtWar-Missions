class WW2_GER {
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
		primaryWeapon = "LIB_K98";
		primaryAttachments[] = { };
		primaryMagazine = "LIB_5Rnd_792x57";
		primaryMagazineCount = 10;
		primaryMagazineTracer = "LIB_5Rnd_792x57";
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
		uniform = "U_LIB_GER_Soldier_camo";
		vest = "V_LIB_GER_VestKar98";
		backpack = "B_LIB_GER_A_frame";
		headGear = "H_LIB_GER_HelmetCamo";

		// Items
		assignedItems[] = { "ItemWatch", "ItemCompass", "ItemMap"};
		items[] = { { "FirstAidKit",2 },{ "LIB_shg24",2 },{ "LIB_nb39", 2 } };
	};
	class Officer : Rifleman {
		availableInGroups[] = { "Rifle", "Weapon", "Mortar" };

		displayName = "Squad Leader";
		primaryWeapon = "LIB_MP40";
		primaryMagazine = "LIB_32Rnd_9x19";

		isLeader = 1;

		secondaryWeapon = "LIB_Binocular_GER";
		primaryMagazineCount = 7;

		primaryAttachments[] = {};

		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 2 } };
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
		backpack = "B_LIB_GER_MedicBackpack_Empty";
		items[] = { { "FirstAidKit", 4 },{ "LIB_shg24", 1 },{ "LIB_nb39", 4 }, "Medikit" };

		icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
		UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
		mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
		compassIcon[] = { "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2 };
	};
	class AutomaticRifleman : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };

		displayName = "Automatic Rifleman";

		primaryWeapon = "LIB_MG34";
		primaryMagazine = "LIB_50Rnd_792x57";
		primaryMagazineCount = 4;
		primaryMagazineTracer = "LIB_50Rnd_792x57";
		primaryMagazineTracerCount = 0;
		//backpack = "B_AssaultPack_rgr";
		items[] = { { "FirstAidKit", 1 } };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class Grenadier : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Grenadier";

		primaryWeapon = "LIB_K98";
		primaryMagazineCount = 8;
		primaryAttachments[] = { "LIB_ACC_GW_SB_Empty" };
		items[] += { {"LIB_1Rnd_G_SPRGR_30", 8} };

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
	};
	class Marksman : Rifleman {
		kitGroup = "Specialized";
		availableInGroups[] = { "Rifle" };

		displayName = "Marksman";

		primaryWeapon = "LIB_G43";
		primaryMagazine = "LIB_10Rnd_792x57";
		primaryMagazineCount = 6;

		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 2 } };

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
		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 2 } };
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
	};
	class LightAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Rifle" };
		primaryMagazineCount = 6;
		secondaryWeapon = "LIB_PzFaust_30m";
		secondaryMagazine = "LIB_1Rnd_PzFaust_30m";
		secondaryMagazineCount = 2;
		backpack = "B_LIB_GER_SapperBackpack_empty";
		displayName = "LAT Rifleman";
		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 2 } };
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyAntiTank : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "HAT Rifleman";
		primaryMagazineCount = 5;
		secondaryWeapon = "LIB_RPzB";
		secondaryMagazine = "LIB_1Rnd_RPzB";
		secondaryMagazineCount = 2;
		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 2 } };
		backpack = "B_LIB_GER_Panzer_Empty";
		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
	};
	class HeavyMachineGun : AutomaticRifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Weapon" };

		displayName = "MG42 Rifleman";
		primaryWeapon = "LIB_MG42";
		primaryMagazine = "LIB_50Rnd_792x57";
		primaryMagazineCount = 4;

		UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
	};
	class AmmoBearer : Rifleman {
		availableInGroups[] = { "Weapon" };

		displayName = "Ammo Bearer";

		backpack = "B_LIB_GER_A_frame";
		items[] += { {"LIB_50Rnd_792x57", 3} };
	};
	class Crewman : Rifleman {
		availableInGroups[] = { "Vehicle" };

		displayName = "Crewman";

		primaryWeapon = "LIB_MP40";
		primaryMagazine = "LIB_32Rnd_9x19";

		secondaryWeapon = "LIB_P08";
		secondaryMagazine = "LIB_8Rnd_9x19_P08";
		secondaryMagazineCount = 3;

		uniform = "U_LIB_GER_Tank_crew_private";
		headGear = "H_LIB_GER_TankPrivateCap2";
		primaryMagazineCount = 3;
		vest = "";

		items[] = { { "FirstAidKit", 2 },{ "LIB_nb39", 2 } };

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

		items[] = { { "FirstAidKit", 2 },{ "LIB_nb39", 2 } };

		isPilot = 1;
	};

	class Sniper : Rifleman {
		kitGroup = "Limited";
		availableInGroups[] = { "Recon" };

		displayName = "Sniper";

		primaryWeapon = "LIB_K98ZF39";
		primaryMagazine = "LIB_5Rnd_792x57";
		primaryMagazineCount = 7;
		primaryMagazineTracerCount = 0;

		secondaryWeapon = "LIB_P08";
		secondaryMagazine = "LIB_8Rnd_9x19_P08";
		secondaryMagazineCount = 4;

		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 1 } };

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

		items[] = { { "FirstAidKit", 2 },{ "LIB_shg24", 1 },{ "LIB_nb39", 1 } };
	};
	class Specialist : Rifleman {
		availableInGroups[] = { "Recon" };

		displayName = "Specialist";
	};
};
