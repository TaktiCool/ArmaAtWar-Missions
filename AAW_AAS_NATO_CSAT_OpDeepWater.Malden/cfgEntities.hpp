class baseSupplyObject {
    supplyUses = -1;
    isDraggable = 0;
    isLoadable = 0;
    cargoCapacity = 0;
};

class CfgEntities {
    // Supply
    class vr_vehicleAmmo_0 : baseSupplyObject {
        rearmAmount = 1;
    };
    class vr_fuelContainer_0 : baseSupplyObject {
        refuelAmount = 1;
    };
    class vr_repairContainer_0 : baseSupplyObject {
        repairAmount = 1;
    };

    // Supply
    class vr_vehicleAmmo_1 : baseSupplyObject {
        rearmAmount = 1;
    };
    class vr_fuelContainer_1 : baseSupplyObject {
        refuelAmount = 1;
    };
    class vr_repairContainer_1 : baseSupplyObject {
        repairAmount = 1;
    };

    // Boats
    class B_Boat_Transport_01_F {
        respawnCondition = "(([""sector_0""] call AAW_Sector_fnc_getSector) getVariable [""side"", sideUnknown]) isEqualTo west";
        side = "WEST";
        cargoCapacity = 10;
        respawnTime = 200;
        ticketValue = 10;
        abandonedVehicleRadius = 100;
        abandonedVehicleTime = 300;
    };
    class B_Boat_Armed_01_minigun_F : B_Boat_Transport_01_F {
        cargoCapacity = 20;
        respawnTime = 400;
        ticketValue = 25;
    };
    
    class O_Boat_Transport_01_F : B_Boat_Transport_01_F {
        respawnCondition = "(([""sector_1""] call AAW_Sector_fnc_getSector) getVariable [""side"", sideUnknown]) isEqualTo east";
        side = "EAST";
    };
    class O_Boat_Armed_01_hmg_F : O_Boat_Transport_01_F {
        cargoCapacity = 20;
        respawnTime = 400;
        ticketValue = 25;
    };
};
