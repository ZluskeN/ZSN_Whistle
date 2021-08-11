#include "\a3\editor_f\Data\Scripts\dikCodes.h"

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