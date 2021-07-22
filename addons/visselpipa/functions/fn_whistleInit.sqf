#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["ZSN Whistle Mod", "whistle_dot", "Blow Whistle (Dot)", {[player] spawn zsn_whistledot}, {}, [DIK_O,[true,false,false]]] call cba_fnc_addKeybind;

["ZSN Whistle Mod", "whistle_dash", "Blow Whistle (Dash)", {[player] spawn zsn_whistledash}, {}, [DIK_O,[false,true,false]]] call cba_fnc_addKeybind;

zsn_whistleblow = 
{
   params ["_unit"];
	_items = items _unit;
	_sounds = switch true do {
		case ('ZSN_Whistle' in _items) : {["zsn_whistleblow2","zsn_whistleblow3","zsn_whistleblow4"]};
		case ('ZSN_TrenchWhistle' in _items) : {["zsn_trenchblow","zsn_trenchblow2"]};
	};
	[_unit, [_sounds select floor random count _sounds, 1600]] remoteExec ["say3d"];
};
zsn_whistleblast = 
{
	params ["_unit"];
	_items = items _unit;
	_sounds = switch true do {
		case ('ZSN_Whistle' in _items) : {["zsn_whistleblast2","zsn_whistleblast3","zsn_whistleblast4"]};
		case ('ZSN_TrenchWhistle' in _items) : {["zsn_trenchblast","zsn_trenchblast2"]};
	};
	[_unit, [_sounds select floor random count _sounds, 1600]] remoteExec ["say3d"];
};
zsn_whistledot = 
{
	params ["_unit"];
	_items = items _unit;
	_sound = switch true do {
		case ('ZSN_Whistle' in _items) : {"zsn_whistledot1"};
		case ('ZSN_TrenchWhistle' in _items) : {"zsn_trenchdot"};
	};
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};
zsn_whistledash = 
{
	params ["_unit"];
	_items = items _unit;
	_sound = switch true do {
		case ('ZSN_Whistle' in _items) : {"zsn_whistledash1"};
		case ('ZSN_TrenchWhistle' in _items) : {"zsn_trenchdash"};
	};
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};
zsn_uppstallning = 
{
	params ["_unit"];
	_sound = "zsn_uppstallning";
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};
zsn_framat = 
{
   params ["_unit"];
	_sound = "zsn_framat";
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};
zsn_eld = 
{
	params ["_unit"];
	_sound = "zsn_eld";
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};
zsn_eldupphor = 
{
	params ["_unit"];
	_sound = "zsn_eldupphor";
	[_unit, [_sound, 1600]] remoteExec ["say3d"];
};