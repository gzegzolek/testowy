/*
----------------------------------------------|
Author: Backer
Description: Starts the therapie!
----------------------------------------------|
*/

private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if(player isEqualTo _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

//GIMME MORE

[player] remoteExec ["life_fnc_therapie", _unit];

if(side player isEqualTo independent) then
{

[0,format["%1 was successfully treated by %2 for drug abuse!",_unit getVariable["realname", name _unit], player getVariable["realname",name player]]] remoteExec ["life_fnc_broadcast",independent];
};
