/*
	File: fn_craft.sqf
	Description: Crafting System
	Created by EdgeKiller
    Coder: EdgeKiller
*/
private["_dialog","_inv","_itemInfo","_filter"]; //Declare all private variables
if(!dialog) then { //Verify if the window is open
	createDialog "Life_craft";
};
disableSerialization; //Disable Serialization

if(life_is_processing) exitWith{
	closeDialog 2001;
	closeDialog 0;
};


_dialog = findDisplay 666; //find the craft dialog/window
_inv = _dialog displayCtrl 669; //find the listbox of items can be created
lbClear _inv; //clear the listbox

_filter = _dialog displayCtrl 673;
_filter lbAdd "Armas";
_filter lbSetData[(lbSize _filter)-1,"weapon"];
_filter lbAdd "Roupas";
_filter lbSetData[(lbSize _filter)-1,"uniform"];
_filter lbAdd "Mochilas";
_filter lbSetData[(lbSize _filter)-1,"backpack"];
_filter lbAdd "Itens";
_filter lbSetData[(lbSize _filter)-1,"item"];
_filter lbAdd "Coletes";
_filter lbSetData[(lbSize _filter)-1,"vest"];
_filter lbAdd "Munição";
_filter lbSetData[(lbSize _filter)-1,"ammo"];
_filter lbAdd "Veh TBA";
_filter lbSetData[(lbSize _filter)-1,"vehicle"];
_filter lbAdd "Tools & Attachments";
_filter lbSetData[(lbSize _filter)-1,"attach"];

_filter lbSetCurSel 0;