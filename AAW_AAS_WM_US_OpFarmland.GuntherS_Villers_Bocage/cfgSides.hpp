class Sides {
    class West {
        name = "Wehrmacht";
        playerClass = "SG_sturmtrooper_rifleman";
        flag = "ww2\core_t\if_data_t\factions\wehrmacht.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\n_installation.paa";
        color[] = {0.5,0.5,0.5, 1};
        RallyComposition = "RALLYGER";
        FOBBoxObject = "B_supplyCrate_F";
        FOBComposition = "FOBGER";
        kits = "IFA3_GER";
        logistics = "GER";
    };

    class GUER : WEST {
        name = "US ARMY";
        playerClass = "LIB_US_101AB_rifleman";
        flag = "ww2\core_t\if_data_t\factions\us_army.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\n_installation.paa";
        color[] = {0.1, 0.4, 0, 1};
        RallyComposition = "NATO";
        FOBBoxObject = "I_supplyCrate_F";
        FOBComposition = "FOBUS";
        kits = "IFA3_US";
        logistics = "US";
    };
};
