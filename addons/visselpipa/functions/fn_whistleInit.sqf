#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["ZSN Whistle Mod", "whistle_dot", "Blow Whistle (Dot)", {[player] spawn zsn_whistledot}, {}, [DIK_O,[true,false,false]]] call cba_fnc_addKeybind;

["ZSN Whistle Mod", "whistle_dash", "Blow Whistle (Dash)", {[player] spawn zsn_whistledash}, {}, [DIK_O,[false,true,false]]] call cba_fnc_addKeybind;

zsn_whistleblow = 
{
   params ["_unit"];
	_items = items _unit;
	_sounds = ["zsn_whistleblow2","zsn_whistleblow3","zsn_whistleblow4"];
	[_unit, [_sounds select floor random count _sounds, 1000]] remoteExec ["say3d"];
};
zsn_whistleblast = 
{
	params ["_unit"];
	_items = items _unit;
	_sounds = ["zsn_whistleblast2","zsn_whistleblast3","zsn_whistleblast4"];
	[_unit, [_sounds select floor random count _sounds, 1000]] remoteExec ["say3d"];
};
zsn_trenchblow = 
{
   params ["_unit"];
	_items = items _unit;
	_sounds = ["zsn_trenchblow","zsn_trenchblow2"];
	[_unit, [_sounds select floor random count _sounds, 1000]] remoteExec ["say3d"];
};
zsn_trenchblast = 
{
	params ["_unit"];
	_items = items _unit;
	_sounds = ["zsn_trenchblast","zsn_trenchblast2"];
	[_unit, [_sounds select floor random count _sounds, 1000]] remoteExec ["say3d"];
};
zsn_whistledot = 
{
	params ["_unit"];
	_items = items _unit;
	_sound = if ('ZSN_Whistle' in _items) then {"zsn_whistledot1"} else {if ('ZSN_TrenchWhistle' in _items) then {"zsn_trenchdot"} else {""}};
	if (_sound != "") then {[_unit, [_sound, 1000]] remoteExec ["say3d"]};
};
zsn_whistledash = 
{
	params ["_unit"];
	_items = items _unit;
	_sound = if ('ZSN_Whistle' in _items) then {"zsn_whistledot1"} else {if ('ZSN_TrenchWhistle' in _items) then {"zsn_trenchdot"} else {""}};
	if (_sound != "") then {[_unit, [_sound, 1000]] remoteExec ["say3d"]};
};