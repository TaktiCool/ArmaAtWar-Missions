
// base config
class sector {
    dependency[] = {};
    ticketValue = 30;
    captureTime[] = {60,90};
    minUnits = 2;
    isLastSector = "";
    firstCaptureTime[] = {15,30};
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
                designator = "B";
            };

            class sector_1 : sector {
                dependency[] = {"sector_0", "base_east"};
                designator = "C";
            };

            class sector_2 : sector {
                dependency[] = {"base_west","sector_1"};
                designator = "A";
            };

            class sector_3 : sector {
                dependency[] = {"sector_0","base_east"};
                designator = "D";
            };
        };
    };
};
