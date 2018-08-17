
// base config
class sector {
    dependency[] = {};
    ticketValue = 20;
    captureTime[] = {60,90};
    minUnits = 2;
    isLastSector = "";
    firstCaptureTime[] = {15,30};
};

class CfgSectors {

    class base_west : sector {
        designator = "HQ";
    };

    class base_guer : sector {
        designator = "HQ";
    };

    class CfgSectorPath {
        class path_0 {
            class sector_0 : sector {
                dependency[] = {"base_west","sector_1"};
                designator = "A";
            };

            class sector_1 : sector {
                dependency[] = {"sector_0","base_guer"};
                designator = "B";
            };

        };

    };
};
