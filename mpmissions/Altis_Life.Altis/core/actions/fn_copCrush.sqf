private["_vehicle","_type","_time","_vehicleData","_upp","_ui","_progress","_pgText","_cP","_veh"];

_vehicle = cursorTarget;
_veh = typeOf _vehicle;

if(!(_veh in["B_G_Offroad_01_armed_F","O_MRAP_02_hmg_F","B_Heli_Light_01_stripped_F","O_MRAP_02_F","B_Heli_Light_01_stripped_F"])) exitWith {hint "Voce nao pode destruir um carro se nao for ilegal";};

if(!((_vehicle isKindOf "Car") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Ship"))) exitWith {};
if(player distance cursorTarget > 10) exitWith {};
if((_vehicle isKindOf "Car") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Ship")) then
{
	_vehicleData = _vehicle getVariable["vehicle_info_owners",[]];
	if(count _vehicleData isEqualTo 0) exitWith {deleteVehicle _vehicle};
  _vehicleName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
[0,format["%1 seu %2 está sendo destruido pela polícia porque é um veículo ilegal.",(_vehicleData select 0) select 1,_vehicleName]] remoteExec ["life_fnc_broadcast",0];
	life_action_inUse = true;
		_upp = "Destuindo veículo";
	//Setup our progress bar.
	disableSerialization;	5 cutRsc ["life_progress","PLAIN"];
	_ui = uiNameSpace getVariable "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
        _cP = 0.01;
	while{true} do	{
		sleep 0.09;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vehicle > 10) exitWith {};
		if(!alive player) exitWith {};
	};
	5 cutText ["","PLAIN"];
		if(player distance _vehicle > 10) exitWith {hint "Destruiçao cancelada.";
 life_action_inUse = false;
};
if(!alive player) exitWith {life_action_inUse = false;
};
	if((count crew _vehicle) isEqualTo 0) then
	{
		if(!((_vehicle isKindOf "Car") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Ship"))) exitWith {life_action_inUse = false;
};

_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
		switch (true) do
		{
			case (_vehicle isKindOf "Car");
			case (_vehicle isKindOf "Ship");
			case (_vehicle isKindOf "Air");
};
[player,_vehicle] remoteExec ["TON_fnc_chopShopSell"];
		hint format["Voce destruiu %1's veículo, esteja ciente que foi por uma boa causa!",_type];
[0,format["%1 destruiu %2's %3 veículo",name player,(_vehicleData select 0) select 1,_vehicleName]] remoteExec ["life_fnc_broadcast",0];
	          } else {
		hint "Destruiçao cancelada.";
	};
};
life_action_inUse = false;
