class Sides {
    class West {
        name = "Wehrmacht";
        playerClass = "SG_sturmtrooper_rifleman";
        flag = "images\Wehrmacht.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\n_installation.paa";
        color[] = {0.5,0.5,0.5, 1};
        squadRallyPointObjects[] = {{"Land_WW2_Zeltbahn", {0,0,0}}};
        FOBBoxObject = "B_supplyCrate_F";
        FOBComposition = "FOBGER";
        kits = "ww2_ger";
        logistics = "GER";
    };

    class GUER : WEST {
        name = "US ARMY";
        playerClass = "LIB_US_101AB_rifleman";
        flag = "images\US_Army.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\n_installation.paa";
        color[] = {0.1, 0.4, 0, 1};
        squadRallyPointObjects[] = {{"Land_TentA_F", {0,0,0}}};
        FOBBoxObject = "I_supplyCrate_F";
        FOBComposition = "FOBUS";
        kits = "ww2_101st";
        logistics = "US";
    };
};
