#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit GVAR "restrained")) exitWith {};
if((_unit GVAR "civrestrained")) exitWith {};
if(player isEqualTo _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

if(life_inv_zipties < 1) then
{
    hint "You have no zip ties";
} else {
    life_inv_zipties = life_inv_zipties - 1;
    //Broadcast!
    _unit say3D "ziptie";
    _unit SVAR["civrestrained",true,true];
    hint "you have restrained the player";
	[player] remoteExec [ "life_fnc_civRestrain", _unit];
};
