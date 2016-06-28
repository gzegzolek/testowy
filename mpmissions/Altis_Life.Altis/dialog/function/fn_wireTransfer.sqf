#include "..\..\script_macros.hpp"
/*
	File: fn_wireTransfer.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initiates the wire-transfer
*/
params [
	["_value",0,[0]],
	["_from","",[""]]
];

if(EQUAL(_value,0) OR EQUAL(_from,"") OR EQUAL(_from,profileName)) exitWith {}; //No
ADD(TTPBANK,_value);
[1] call SOCK_fnc_updatePartial;
hint format["%1 has wire transferred $%2 to you",_from,[_value] call life_fnc_numberText];
