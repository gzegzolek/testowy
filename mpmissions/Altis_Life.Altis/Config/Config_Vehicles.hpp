class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
			{ "C_Van_01_transport_F", { "", "", -1 } },
			{ "C_Van_01_fuel_F", { "", "", -1 } }
        };
    };

	class civ_vip_car_bronze {
        side = "civ";
        vehicles[] = {
			{ "B_Quadbike_01_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "C_SUV_01_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "C_Van_01_box_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "I_Truck_02_transport_F", { "life_donorlevel", "SCALAR", 1 } },
            { "I_Truck_02_covered_F", { "life_donorlevel", "SCALAR", 1 } },
            { "O_Truck_03_transport_F", { "life_donorlevel", "SCALAR", 1 } },
            { "O_Truck_03_covered_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Truck_01_transport_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Truck_01_covered_F", { "life_donorlevel", "SCALAR", 1 } },
            { "I_Truck_02_fuel_F", { "life_donorlevel", "SCALAR", 1 } },
            { "B_Truck_01_fuel_F", { "life_donorlevel", "SCALAR", 1 } }
        };
    };

	class civ_vip_car_silver {
        side = "civ";
        vehicles[] = {
			{ "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "C_SUV_01_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "C_Van_01_box_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "I_Truck_02_transport_F", { "life_donorlevel", "SCALAR", 2 } },
            { "I_Truck_02_covered_F", { "life_donorlevel", "SCALAR", 2 } },
            { "O_Truck_03_transport_F", { "life_donorlevel", "SCALAR", 2 } },
            { "O_Truck_03_covered_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Truck_01_transport_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Truck_01_covered_F", { "life_donorlevel", "SCALAR", 2 } },
            { "I_Truck_02_fuel_F", { "life_donorlevel", "SCALAR", 2 } },
            { "B_Truck_01_fuel_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "O_MRAP_02_F", { "life_donorlevel", "SCALAR", 2 } }
        };
    };

	class civ_vip_car_gold {
        side = "civ";
        vehicles[] = {
			{ "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "C_SUV_01_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "C_Van_01_box_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "I_Truck_02_transport_F", { "life_donorlevel", "SCALAR", 3 } },
            { "I_Truck_02_covered_F", { "life_donorlevel", "SCALAR", 3 } },
            { "O_Truck_03_transport_F", { "life_donorlevel", "SCALAR", 3 } },
            { "O_Truck_03_covered_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Truck_01_ammo_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Truck_01_transport_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Truck_01_covered_F", { "life_donorlevel", "SCALAR", 3 } },
            { "I_Truck_02_fuel_F", { "life_donorlevel", "SCALAR", 3 } },
            { "B_Truck_01_fuel_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Truck_01_box_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "O_Truck_03_device_F", { "life_donorlevel", "SCALAR", 3 } }
        };
    };

	class civ_vip_car_platinum {
        side = "civ";
        vehicles[] = {
			{ "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "C_SUV_01_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "C_Van_01_box_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "I_Truck_02_transport_F", { "life_donorlevel", "SCALAR", 4 } },
            { "I_Truck_02_covered_F", { "life_donorlevel", "SCALAR", 4 } },
            { "O_Truck_03_transport_F", { "life_donorlevel", "SCALAR", 4 } },
            { "O_Truck_03_covered_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Truck_01_ammo_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Truck_01_transport_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Truck_01_covered_F", { "life_donorlevel", "SCALAR", 4 } },
            { "I_Truck_02_fuel_F", { "life_donorlevel", "SCALAR", 4 } },
            { "B_Truck_01_fuel_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Truck_01_box_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "O_Truck_03_device_F", { "life_donorlevel", "SCALAR", 4 } }, 
			{ "O_MRAP_02_F", { "life_donorlevel", "SCALAR", 4 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 4 } }
        };
    };

	class civ_vip_car_diamante {
        side = "civ";
        vehicles[] = {
			{ "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "C_SUV_01_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "C_Van_01_box_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "I_Truck_02_transport_F", { "life_donorlevel", "SCALAR", 5 } },
            { "I_Truck_02_covered_F", { "life_donorlevel", "SCALAR", 5 } },
            { "O_Truck_03_transport_F", { "life_donorlevel", "SCALAR", 5 } },
            { "O_Truck_03_covered_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Truck_01_ammo_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Truck_01_transport_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Truck_01_covered_F", { "life_donorlevel", "SCALAR", 5 } },
            { "I_Truck_02_fuel_F", { "life_donorlevel", "SCALAR", 5 } },
            { "B_Truck_01_fuel_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Truck_01_box_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "O_Truck_03_device_F", { "life_donorlevel", "SCALAR", 5 } }, 
			{ "O_MRAP_02_F", { "life_donorlevel", "SCALAR", 5 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 5 } }
        };
    };

	class civ_vip_air_bronze {
        side = "civ_vip";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_donorlevel", "SCALAR", 1 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Light_02_unarmed_F", { "life_donorlevel", "SCALAR", 1 } },
            { "O_Heli_Transport_04_Box_F", { "life_donorlevel", "SCALAR", 1 } },
			{ "B_Heli_Light_01_stripped_F", { "life_donorlevel", "SCALAR", 1 } },
            { "I_Heli_Transport_02_F", { "life_donorlevel", "SCALAR", 1 } }
        };
    };

	class civ_vip_air_silver {
        side = "civ_vip";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_donorlevel", "SCALAR", 2 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 2 } },
            { "O_Heli_Light_02_unarmed_F", { "life_donorlevel", "SCALAR", 2 } },
			{ "B_Heli_Light_01_stripped_F", { "life_donorlevel", "SCALAR", 2 } },
            { "I_Heli_Transport_02_F", { "life_donorlevel", "SCALAR", 2 } }
        };
    };

	class civ_vip_air_gold {
        side = "civ_vip";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_donorlevel", "SCALAR", 3 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F", { "life_donorlevel", "SCALAR", 3 } },
            { "O_Heli_Transport_04_Box_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "I_Heli_light_03_unarmed_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "B_Heli_Light_01_stripped_F", { "life_donorlevel", "SCALAR", 3 } },
			{ "O_Heli_Transport_04_black_F", { "life_donorlevel", "SCALAR", 3 } },
            { "I_Heli_Transport_02_F", { "life_donorlevel", "SCALAR", 3 } }
        };
    };

	class civ_vip_air_platinum {
        side = "civ_vip";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_donorlevel", "SCALAR", 4 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 4 } },
            { "O_Heli_Light_02_unarmed_F", { "life_donorlevel", "SCALAR", 4 } },
            { "O_Heli_Transport_04_Box_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "B_Heli_Light_01_stripped_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "I_Heli_light_03_unarmed_F", { "life_donorlevel", "SCALAR", 4 } },
			{ "O_Heli_Transport_04_black_F", { "life_donorlevel", "SCALAR", 4 } },
            { "I_Heli_Transport_02_F", { "life_donorlevel", "SCALAR", 4 } }
        };
    };

	class civ_vip_air_diamante {
        side = "civ_vip";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_donorlevel", "SCALAR", 5 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 5 } },
            { "O_Heli_Light_02_unarmed_F", { "life_donorlevel", "SCALAR", 5 } },
            { "O_Heli_Transport_04_Box_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "B_Heli_Light_01_stripped_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "O_Heli_Transport_04_black_F", { "life_donorlevel", "SCALAR", 5 } },
			{ "I_Heli_light_03_unarmed_F", { "life_donorlevel", "SCALAR", 5 } },
            { "I_Heli_Transport_02_F", { "life_donorlevel", "SCALAR", 5 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
			{ "O_Truck_03_ammo_F", { "", "", -1 } },
			{ "B_Truck_01_transport_F", { "", "", -1 } },
			{ "B_Truck_01_covered_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "O_Truck_02_box_F", { "", "", -1 } },
            { "O_Truck_02_covered_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "life_medicLevel", "SCALAR", 2 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_medicLevel", "SCALAR", 2 } },
            { "O_Heli_Light_02_unarmed_F", { "life_medicLevel", "SCALAR", 5 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_MRAP_03_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_G_Offroad_01_armed_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
		assurPrice = 3500;
        textures[] = {
			{ "EMS", "med", {
                "textures\Med\Vehicles\medic_front.jpg",
                "textures\Med\Vehicles\medicback.jpg"
            } }
		};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
		assurPrice = 3500;
        textures[] = {};
    };

    class O_Truck_03_ammo_F {
        vItemSpace = 695;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 779000;
		assurPrice = 233500;
        textures[] = {};
    };
	
	class O_Truck_02_box_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 185000;
		assurPrice = 55500;
        textures[] = {};
    };
	
	class I_Truck_02_box_F {
        vItemSpace = 445;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 435000;
		assurPrice = 130500;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
		assurPrice = 1000;
        textures[] = { };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 325;
        licenses[] = { {""}, {"aviation"}, {""}, {""} };
        price = 1250000;
		assurPrice = 475000;
        textures[] = {  };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 300;
        licenses[] = { {""}, {"aviation"}, {""}, {""} };
        price = 350000;
		assurPrice = 98000;
        textures[] = {
            { "Police", "cop", {
              "textures\Cop\Vehicles\CopGhostBody.jpg",
              "textures\Cop\Vehicles\CopGhostTail.jpg"
            } }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 25;
        licenses[] = { {""}, {"swat"}, {""}, {""} };
        price = 550000;
		assurPrice = 3000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 10;
        licenses[] = { {""}, {"swat"}, {""}, {""} };
        price = 250000;
		assurPrice = 3000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 275;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
		assurPrice = 3000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 10000;
		assurPrice = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
		assurPrice = 105000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 575;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
		assurPrice = 350000;
        textures[] = { };
    };
	
	class B_Truck_01_covered_F {
        vItemSpace = 585;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 679000;
		assurPrice = 203000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 550;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 1100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 115;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
		assurPrice = 10000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 105;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 400000;
		assurPrice = 350000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_MRAP_02_hmg_F {
        vItemSpace = 115;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
		assurPrice = 8000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
		assurPrice = 6000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 910;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1450000;
		assurPrice = 435500;
        textures[] = { };
    };
	
    class B_Truck_01_transport_F {
        vItemSpace = 530;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 610000;
		assurPrice = 18300;
        textures[] = { };
    };
	
	class B_Truck_01_ammo_F	{
        vItemSpace = 810;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
		assurPrice = 375500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1250000;
		assurPrice = 375500;
        textures[] = { 
		    { "Ifrit Chamas VIP", "civ", {
	                "textures\Vip\Vehicles\ifrit\flame_ifrit_1.jpg",
					"textures\Vip\Vehicles\ifrit\flame_ifrit_2.jpg"
            } },
		    { "Ifrit Batman VIP", "civ", {
	                "textures\Vip\Vehicles\ifrit\ifrit_batman_front.jpg",
					"textures\Vip\Vehicles\ifrit\ifrit_batman_hinten.jpg"
            } },
		    { "Ifrit Wolf Bite VIP", "civ", {
	                "textures\Vip\Vehicles\ifrit\mrap_02_ext_01_co.jpg",
					"textures\Vip\Vehicles\ifrit\mrap_02_ext_02_co.jpg"
            } }			
		};
    };

    class C_Offroad_01_F {
        vItemSpace = 100;
        //assurPrice[] = { 1000, 1000, 1000, 1000 };
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
		assurPrice = 13500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Trump", "civ", {
                "textures\Civ\Vehicles\OffTRUMP.jpg"
            } },
            { "Shrek", "civ", {
                "textures\Civ\Vehicles\OffSHREK.jpg"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\policeoffroad.jpg"
            } },
            { "Medical", "med", {
                "textures\Med\Vehicles\offroadMED.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
		assurPrice = 4500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 54;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
		assurPrice = 27000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Sanic", "civ", {
                "textures\Civ\Vehicles\HatchSANIC.jpg"
            } },
			{ "Martini", "civ", {
                "textures\Civ\Vehicles\mcreafordwrc.paa"
            } },
			{ "MonsterV2", "civ", {
                "textures\Civ\Vehicles\civ_monsterwrcv2_hbsport.paa"
            } },
			{ "MonsterV3", "civ", {
                "textures\Civ\Vehicles\civ_monsterwrc_hb.paa"
            } },
			{ "Domino's", "civ", {
                "textures\Civ\Vehicles\civ_dominospizza_hb.paa"
            } },
			{ "RedBull", "civ", {
                "textures\Civ\Vehicles\vwwrc.paa"
            } },
			{ "AbudHabic", "civ", {
                "textures\Civ\Vehicles\abudhabiwrc.paa"
            } },
            { "Bope", "cop", {
                "textures\Cop\Vehicles\bopehactebk.jpg"
			} },
            { "Police", "cop", {
                "textures\Cop\Vehicles\policehatch.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4500;
		assurPrice = 1350;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 330;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 260000;
		assurPrice = 78000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 275;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 165000;
		assurPrice = 49000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 475;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 415000;
		assurPrice = 124500;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30500;
		assurPrice = 9150;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50500;
		assurPrice = 15150;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Asiimov", "civ", {
                "textures\Civ\Vehicles\suvASIIMOV.paa"
            } },
            { "Hyperbeast", "civ", {
                "textures\Civ\Vehicles\suvHYPER.paa"
            } },
            { "Nyan", "civ", {
                "textures\Civ\Vehicles\suvNYAN.jpg"
            } },
            { "Sticker", "civ", {
                "textures\Civ\Vehicles\suvSTICKER.paa"
            } },
            { "Police", "cop", {
                "textures\Cop\Vehicles\suvpolice.jpg"
            } },
			{ "Bope", "cop", {
                "textures\Cop\Vehicles\suvbope.jpg"
            } },
            { "Medical", "med", {
                "textures\Med\Vehicles\suvMED.jpg"
            } },
            { "JurassicPark", "civ", {
                "textures\Civ\Vehicles\civ_jurassicpark_suv.paa"
            } },
            { "White", "civ", {
                "textures\Civ\Vehicles\suv_white.jpg"
            } },
            { "Poly", "civ", {
                "textures\Civ\Vehicles\suv_poly.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 155;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
		assurPrice = 22500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 210;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 110000;
		assurPrice = 33000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 100000;
		assurPrice = 30000;
        textures[] = {
           { "Hunter VIP", "civ", {
	                "textures\Vip\Vehicles\hunter\donator_hunter_front.paa",
					"textures\Vip\Vehicles\hunter\donator_hunter_hinten.paa"
			} },
			{ "Hunter Assassino de COP VIP", "civ", {
					"textures\Vip\Vehicles\hunter\mrap_01_base_co.jpg",
	                "textures\Vip\Vehicles\hunter\mrap_01_adds_co.jpg",

			} },
			{ "Hunter Unicórnio VIP", "civ", {
	                "textures\Vip\Vehicles\hunter\unicorn_hunter_teil1.paa",
					"textures\Vip\Vehicles\hunter\unicorn_hunter_teil2.paa"
			} },
			{ "Hunter Caveira VIP", "civ", {
	                "textures\Vip\Vehicles\hunter\graywolfhunter_1.jpg",
					"textures\Vip\Vehicles\hunter\graywolfhunter_2.jpg"
			} },
			{ "Police", "cop", {
                "textures\Cop\Vehicles\Hunter1.jpg",
                "textures\Cop\Vehicles\Hunter2.jpg"
            } }
        };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 130;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 450000;
		assurPrice = 171000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class I_Heli_Transport_02_F {
       vItemSpace = 425;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 1575000;
	   assurPrice = 598500;
       textures[] = {};
   };
   
   class B_Heli_Transport_03_unarmed_F {
       vItemSpace = 565;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 2135000;
	   assurPrice = 811300;
       textures[] = {};
   };
   
    class O_Heli_Transport_04_black_F {
       vItemSpace = 115;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 935000;
	   assurPrice = 355300;
       textures[] = {};
   };
   
   class O_Truck_02_covered_F {
       vItemSpace = 275;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 135000;
	   assurPrice = 40500;
       textures[] = {};
   };
   
   class O_Truck_02_transport_F {
       vItemSpace = 255;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 115000;
	   assurPrice = 34500;
       textures[] = {};
   };

   class O_Heli_Transport_04_Box_F {
      vItemSpace = 525;
      licenses[] = { {""}, {""}, {""}, {""} };
      price = 1805000;
	  assurPrice = 541500;
      textures[] = {};
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {""}, {"aviation"}, {"mAir"}, {""} };
        price = 250000;
		assurPrice = 95000;
        textures[] = {
            { "Police", "cop", {
                "textures\Cop\Vehicles\policeheli.jpg"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS", "med", {
                "textures\Med\Vehicles\hummingMED.jpg"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 250000;
		assurPrice = 95000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 240;
        licenses[] = { {"" }, {"aviation"}, {"mAir"}, {""} };
        price = 900000;
		assurPrice = 342000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "textures\Med\Vehicles\EMS_Heli.jpg"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 110;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
		assurPrice = 45000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
		assurPrice = 22500;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
		assurPrice = 39500;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 9999999;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
		assurPrice = 65500;
        textures[] = {};
    };
};
