////////////////////////////////////////////////////////////////////
//DeRap: zsn_visselpipa\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Fri Apr 02 14:59:22 2021 : 'file' last modified on Tue Nov 21 20:36:15 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class zsn_jagarhorn
	{
		units[] = {"zsn_bugleItem"};
		weapons[] = {"zsn_Bugle"};
		requiredVersion = 1;
		requiredAddons[] = {"ace_common"};
	};
};
class Extended_PostInit_EventHandlers
{
	class zsn_functions
	{
		init = "nul = [] execVM 'zsn_jagarhorn\functions\fn_bugleInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class zsn_bugle
				{
					displayName="Bugle";
					condition="'ZSN_Bugle' in (items _player)";
					showDisabled=0;
					exceptions[]={"isNotInside","isNotSitting"};
					icon = "zsn_jagarhorn\blasjagarhorn2.paa";
					class zsn_uppstallning
					{
						displayName="Assemble";
						condition="'ZSN_Bugle' in (items _player)";
						statement="[_player] spawn zsn_uppstallning";
						showDisabled=0;
						exceptions[]={"isNotInside","isNotSitting"};
					};
					class zsn_framat
					{
						displayName="Advance";
						condition="'ZSN_Bugle' in (items _player)";
						statement="[_player] spawn zsn_framat";
						showDisabled=0;
						exceptions[]={"isNotInside","isNotSitting"};
					};
					class zsn_eld
					{
						displayName="Fire";
						condition="'ZSN_Bugle' in (items _player)";
						statement="[_player] spawn zsn_eld";
						showDisabled=0;
						exceptions[]={"isNotInside","isNotSitting"};
					};
					class zsn_eldupphor
					{
						displayName="Cease Fire";
						condition="'ZSN_Bugle' in (items _player)";
						statement="[_player] spawn zsn_eldupphor";
						showDisabled=0;
						exceptions[]={"isNotInside","isNotSitting"};
					};
				};
			};
		};
	};
	class Item_Base_F;
	class zsn_bugleItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Bugle";
		author = "ZluskeN";
		vehicleClass = "Items";
		class TransportItems
		{
			class ZSN_Bugle
			{
				name = "ZSN_Bugle";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ZSN_Bugle: ACE_ItemCore
	{
		scope = 2;
		author = "ZluskeN";
		displayName = "Bugle";
		descriptionShort = "Jägarhornet tog över signalgivningen från fältpipan under 1800-talet och medgav en mer utspridd stridsteknik.";
		picture = "\zsn_jagarhorn\jagarhorn2.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
};
class CfgSounds
{
	sounds[] = {};
	class zsn_uppstallning
	{
		name = "zsn_uppstallning";
		sound[] = {"\zsn_jagarhorn\sounds\Uppstallning.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_framat
	{
		name = "zsn_framat";
		sound[] = {"\zsn_jagarhorn\sounds\Framat.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_eld
	{
		name = "zsn_eld";
		sound[] = {"\zsn_jagarhorn\sounds\Eld.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_eldupphor
	{
		name = "zsn_eldupphor";
		sound[] = {"\zsn_jagarhorn\sounds\EldUpphor.ogg",1,1,1600};
		titles[] = {};
	};
};
class CfgFunctions
{
	class ZSN
	{
		class Functions
		{
			class whistleInit
			{
				file = "zsn_jagarhorn\functions\fn_bugleInit.sqf";
				postInit = 1;
			};
		};
	};
};
