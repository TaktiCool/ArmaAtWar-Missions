class Sides {
    class West {
        name = "NATO";
        playerClass = "B_Soldier_F";
        //flag = "a3\data_f\Flags\flag_nato_co.paa";
        flag = "a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        color[] = {0, 0.3, 0.8, 1};
        RallyComposition = "RALLYNATO";
        FOBComposition = "FOBNATO";
        kits = "NATO";
        logistics = "NATO";
    };

    class East : West {
        name = "CSAT";
        playerClass = "O_Soldier_F";
        //flag = "a3\data_f\Flags\flag_csat_co.paa";
        flag = "a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        color[] = {0.5, 0, 0, 1};
        RallyComposition = "RALLYCSAT";
        FOBComposition = "FOBCSAT";
        kits = "CSAT";
        logistics = "CSAT";
    };
};
