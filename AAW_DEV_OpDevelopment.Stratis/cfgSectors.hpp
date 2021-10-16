
// base config
class sector {
    dependency[] = {};
    ticketValue = 30;
    captureTime[] = {30,60};
    minUnits = 1;
    maxUnits = 9;
    firstCaptureTime[] = {5,15};
};

class CfgSectors {

    class base_west : sector {
        designator = "HQ";
    };

    class base_east : sector {
        designator = "HQ";
    };

    class CfgSectorPath {
        class path_0 {
            class sector_0 : sector {
                dependency[] = {"base_west","sector_1"};
                designator = "A";
                spawnPoint = "sector_0_spawn";
            };

            class sector_1 : sector {
                dependency[] = {"sector_0","sector_2"};
                designator = "B";
                spawnPoint = "sector_1_spawn";
            };

            class sector_2 : sector {
                dependency[] = {"sector_1","sector_3"};
                designator = "C";
                spawnPoint = "sector_2_spawn";
            };

            class sector_3 : sector {
                dependency[] = {"sector_2","base_east"};
                designator = "D";
                spawnPoint = "sector_3_spawn";
            };
        };

        class path_1 {
            class sector_5 : sector {
                dependency[] = {"base_west","sector_9"};
                designator = "A";
                spawnPoint = "sector_5_spawn";
            };

            class sector_9 : sector {
                dependency[] = {"sector_5","sector_6"};
                designator = "B";
                spawnPoint = "sector_9_spawn";
            };

            class sector_6 : sector {
                dependency[] = {"sector_9","sector_3"};
                designator = "C";
                spawnPoint = "sector_6_spawn";
            };

            class sector_3 : sector {
                dependency[] = {"sector_6","base_east"};
                designator = "D";
                spawnPoint = "sector_3_spawn";
            };
        };

        class path_3 {
            class sector_4 : sector {
                dependency[] = {"base_west","sector_8"};
                designator = "A";
                spawnPoint = "sector_4_spawn";
            };

            class sector_8 : sector {
                dependency[] = {"sector_4","sector_13"};
                designator = "B";
                spawnPoint = "sector_8_spawn";
            };

            class sector_13 : sector {
                dependency[] = {"sector_8","sector_10"};
                designator = "C";
                spawnPoint = "sector_13_spawn";
            };

            class sector_10 : sector {
                dependency[] = {"sector_13","base_east"};
                designator = "D";
                spawnPoint = "sector_10_spawn";
            };
        };

        class path_4 {
            class sector_12 : sector {
                dependency[] = {"base_west","sector_11"};
                designator = "A";
                spawnPoint = "sector_12_spawn";
            };

            class sector_11 : sector {
                dependency[] = {"sector_12","sector_2"};
                designator = "B";
                spawnPoint = "sector_11_spawn";
            };

            class sector_2 : sector {
                dependency[] = {"sector_11","sector_7"};
                designator = "C";
                spawnPoint = "sector_2_spawn";
            };

            class sector_7 : sector {
                dependency[] = {"sector_2","base_east"};
                designator = "D";
                spawnPoint = "sector_7_spawn";
            };
        };

        class path_5 {
            class sector_4 : sector {
                dependency[] = {"base_west","sector_9"};
                designator = "A";
                spawnPoint = "sector_4_spawn";
            };

            class sector_9 : sector {
                dependency[] = {"sector_4","sector_6"};
                designator = "B";
                spawnPoint = "sector_9_spawn";
            };

            class sector_6 : sector {
                dependency[] = {"sector_9","sector_3"};
                designator = "C";
                spawnPoint = "sector_6_spawn";
            };

            class sector_3 : sector {
                dependency[] = {"sector_6","base_east"};
                designator = "D";
                spawnPoint = "sector_3_spawn";
            };
        };

        class path_6 {
            class sector_0 : sector {
                dependency[] = {"base_west","sector_9"};
                designator = "A";
                spawnPoint = "sector_0_spawn";
            };

            class sector_9 : sector {
                dependency[] = {"sector_0","sector_2"};
                designator = "B";
                spawnPoint = "sector_9_spawn";
            };

            class sector_2 : sector {
                dependency[] = {"sector_9","sector_3"};
                designator = "C";
                spawnPoint = "sector_2_spawn";
            };

            class sector_3 : sector {
                dependency[] = {"sector_2","base_east"};
                designator = "D";
                spawnPoint = "sector_3_spawn";
            };
        };

        class path_7 {
            class sector_4 : sector {
                dependency[] = {"base_west","sector_9"};
                designator = "A";
                spawnPoint = "sector_4_spawn";
            };

            class sector_9 : sector {
                dependency[] = {"sector_4","sector_3"};
                designator = "B";
                spawnPoint = "sector_9_spawn";
            };

            class sector_3 : sector {
                dependency[] = {"sector_9","sector_10"};
                designator = "C";
                spawnPoint = "sector_3_spawn";
            };

            class sector_10 : sector {
                dependency[] = {"sector_3","base_east"};
                designator = "D";
                spawnPoint = "sector_10_spawn";
            };
        };
    };
};
