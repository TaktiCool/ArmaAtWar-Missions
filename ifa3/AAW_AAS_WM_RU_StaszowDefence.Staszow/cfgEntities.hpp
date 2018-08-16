#define T_TRUCK_TRANSPORT 5
#define T_TRUCK_SUPPLY 5
#define T_ATV 3
#define T_OFFROAD 3
#define T_OFFROAD_ARMED 10
#define T_MRAP 10
#define T_MRAP_HMG 15
#define T_MRAP_GMG 20
#define T_APC_WHEELED 25
#define T_APC_TRACKED 25
#define T_APC_AA 25
#define T_MBT 30
#define T_ARTILLERY 30
#define T_MLRS 30
#define T_HELI_LIGHT 20
#define T_HELI_LIGHT_ARMED 25
#define T_HELI_TRANSPORT 20
#define T_HELI_TRANSPORT_ARMED 25
#define T_HELI_ATTACK_HELI 40

class defaultVehicle {
    respawnCondition = "true";
    side = "UNKNOWN";
    respawnTime = -1; // disabled
    ticketValue = 2;
    abandonedVehicleRadius = 100;
    abandonedVehicleTime = 300;
};

class CfgEntities {

    /*
    Logistic Config
    */

    //Crates
    class Box_Nato_Ammo_F {
        isDraggable = 1;
        isLoadable = 1;
        cargoCapacity = 3;
        cargoSize = 5;
    };

    class Box_East_Ammo_F : Box_Nato_Ammo_F {
    };

    class ReammoBox_F : Box_Nato_Ammo_F {};

    class Box_IND_Ammo_F : Box_Nato_Ammo_F {
    };

    class Land_CargoBox_V1_F {
        isDraggable = 1;
        isLoadable = 1;
        cargoCapacity = 20;
        cargoSize = 25;
    };

    class B_Slingload_01_Cargo_F {
        isDraggable = 1;
        isLoadable = 0;
        cargoCapacity = 50;
        cargoSize = 60;
        logisticOffset[] = {0,0,5};
    };

    class CargoNet_01_ammo_base_F : B_Slingload_01_Cargo_F {
        isLoadable = 1;
        cargoSize = 20;
        cargoCapacity = 10;
        logisticOffset[] = {0, 0, 0};
    };

    /*
    Vehicle Config
    */
    // TRUCKS
    class LIB_Truck_base {
        side = "WEST";
        cargoCapacity = 50;
        respawnTime = 180;
        ticketValue = T_TRUCK_TRANSPORT;
    };

    class LIB_Scout_M3_base : LIB_Truck_base {
        side = "GUER";
    };

    class LIB_US_GMC_Base : LIB_Truck_base {
        side = "GUER";
    };


    // MRAPs
    class LIB_Car_base : defaultVehicle {
        side = "WEST";
        cargoCapacity = 20;
        respawnTime = 300;
        ticketValue = T_MRAP;
    };

    class LIB_Willys_MB_base : LIB_Car_base {
        side = "GUER";
    };

};