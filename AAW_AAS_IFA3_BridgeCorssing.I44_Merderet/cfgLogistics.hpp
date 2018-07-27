class cfgLogistics {

    class GER {
        objectToSpawn[] = {"mainBaseFlagWest"};
        resources = 100; // at Beginning of Round
        resourcesMax = 500; // maximal resources
        resourceGrowth[] = {1, 12}; // [resources, per seconds]
        class MedicalBox {
            displayName = "Medical Box";
            classname = "LIB_BasicWeaponsBox_GER";
            content[] = {{"FirstAidKit", 30}};
            removeDefaultLoadout = 1;
            resources = 5;
            picture = "\A3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
        };

        class BasicAmmoBox : MedicalBox {
            displayName = "Basic Ammo Box";
            content[] = {{"LIB_5Rnd_792x57", 40}, {"LIB_50Rnd_792x57", 8}, {"LIB_8Rnd_9x19_P08", 9}, {"LIB_shg24", 10}, {"LIB_nb39", 15}};
            picture = "\A3\ui_f\data\gui\cfg\respawnroles\assault_ca.paa";
        };

        class AdvancedAmmoBox : BasicAmmoBox {
            displayName = "Advanced Ammo Box";
			classname = "LIB_BasicWeaponsBox_GER";
            content[] = {{"LIB_5Rnd_792x57", 10}, {"LIB_10Rnd_792x57", 10}, {"LIB_nb39", 10},  {"LIB_shg24", 3}};
        };

        class FOBBox {
            displayName = "FOB Box";
            classname = "B_supplyCrate_F";
            content[] = {};
            removeDefaultLoadout = 1;
            resources = 50;
            picture = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        };
    };


    class US {
        objectToSpawn[] = {"mainBaseFlagGuer"};
        resources = 100; // at Beginning of Round
        resourcesMax = 500; // maximal resources
        resourceGrowth[] = {1, 12}; // [resources, per seconds]
        class MedicalBox {
            displayName = "Medical Box";
            classname = "LIB_BasicAmmunitionBox_US";
            content[] = {{"FirstAidKit", 30}};
            removeDefaultLoadout = 1;
            resources = 5;
            picture = "\A3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
        };

        class BasicAmmoBox : MedicalBox {
            displayName = "Basic Ammo Box";
			classname = "LIB_BasicAmmunitionBox_US";
            content[] = {{"LIB_8Rnd_762x63", 40}, {"LIB_30Rnd_45ACP", 5}, {"LIB_7Rnd_45ACP", 9}, {"LIB_US_Mk_2", 15}, {"LIB_US_M18", 15}};
            picture = "\A3\ui_f\data\gui\cfg\respawnroles\assault_ca.paa";
        };

        class AdvancedAmmoBox : BasicAmmoBox {
            displayName = "Advanced Ammo Box";
			classname = "LIB_BasicAmmunitionBox_US";
            content[] = {{"LIB_8Rnd_762x63", 10}, {"LIB_20Rnd_762x63", 10}, {"LIB_US_M18", 10},  {"LIB_US_Mk_2", 3}};
        };

        class FOBBox {
            displayName = "FOB Box";
            classname = "I_supplyCrate_F";
            removeDefaultLoadout = 1;
            resources = 50;
            picture = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        };
    };
};