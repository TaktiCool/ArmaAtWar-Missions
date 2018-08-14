
class CfgEntities {
    // Boats
    class vr_speedboat_0 {
        respawnCondition = "time > 20";
        respawnTime = 10;
    };

    // Tanks
    class vr_slammer_0 {
        respawnCondition = "time > 60";
    };
    class vr_slammer_1 : vr_slammer_0 {};

    // Air

    class vr_ghosthawk_0 {
        respawnCondition = "time > 30";
        respawnTime = 10;
    };

    class vr_Huron_0 {
        respawnCondition = "time > 60";
    };

    // Tanks
    class vr_varsuk_0 {
        respawnCondition = "time > 60";
        //ticketValue = 20;
    };
    class vr_varsuk_1: vr_varsuk_0 {};

    class vr_Taru_0 {
        respawnCondition = "time > 60";
    };
};
