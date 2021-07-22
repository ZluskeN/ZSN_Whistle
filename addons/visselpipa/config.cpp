////////////////////////////////////////////////////////////////////
//DeRap: zsn_visselpipa\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Fri Apr 02 14:59:22 2021 : 'file' last modified on Tue Nov 21 20:36:15 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class zsn_visselpipa
	{
		units[] = {"zsn_whistleItem","zsn_trenchwhistleItem","zsn_bugleItem"};
		weapons[] = {"ZSN_Whistle","ZSN_TrenchWhistle","zsn_Bugle"};
		requiredVersion = 1;
		requiredAddons[] = {"ace_common"};
	};
};
class Extended_PostInit_EventHandlers
{
	class zsn_functions
	{
		init = "nul = [] execVM 'zsn_visselpipa\functions\fn_whistleInit.sqf'";
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
				class zsn_blowwhistle
				{
					displayName = "Blow Whistle";
					condition = "'ZSN_Whistle' in (items _player) OR 'ZSN_TrenchWhistle' in (items _player)";
					statement = "[_player] spawn zsn_whistleblow";
					showDisabled = 0;
					exceptions[] = {"isNotInside","isNotSitting"};
					icon = "zsn_visselpipa\blowwhistle.paa";
				};
				class zsn_blastwhistle
				{
					displayName = "Blast Whistle";
					condition = "'ZSN_Whistle' in (items _player) OR 'ZSN_TrenchWhistle' in (items _player)";
					statement = "[_player] spawn zsn_whistleblast";
					showDisabled = 0;
					exceptions[] = {"isNotInside","isNotSitting"};
					icon = "zsn_visselpipa\blowwhistle.paa";
				};
				class zsn_bugle
				{
					displayName="Bugle";
					condition="'ZSN_Bugle' in (items _player)";
					showDisabled=0;
					exceptions[]={"isNotInside","isNotSitting"};
					icon = "zsn_visselpipa\blasjagarhorn.paa";
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
	class zsn_whistleItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Whistle";
		author = "ZluskeN";
		vehicleClass = "Items";
		class TransportItems
		{
			class ZSN_Whistle
			{
				name = "ZSN_Whistle";
				count = 1;
			};
		};
	};
	class zsn_trenchwhistleItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Trench Whistle";
		author = "ZluskeN";
		vehicleClass = "Items";
		class TransportItems
		{
			class ZSN_TrenchWhistle
			{
				name = "ZSN_TrenchWhistle";
				count = 1;
			};
		};
	};
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
	class ZSN_Whistle: ACE_ItemCore
	{
		scope = 2;
		author = "ZluskeN";
		displayName = "Whistle";
		descriptionShort = "Invented in 1884, the Acme Thunderer and its variations has become the world's best-selling whistle.";
		picture = "\zsn_visselpipa\visselpipa.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ZSN_TrenchWhistle: ACE_ItemCore
	{
		scope = 2;
		author = "ZluskeN";
		displayName = "Trench Whistle";
		descriptionShort = "The classic Trench Whistle, used to command troops in combat since the days of the Roman Empire.";
		picture = "\zsn_visselpipa\trench.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class ZSN_Bugle: ACE_ItemCore
	{
		scope = 2;
		author = "ZluskeN";
		displayName = "Bugle";
		descriptionShort = "Jägarhornet tog över signalgivningen från fältpipan under 1800-talet och medgav en mer utspridd stridsteknik.";
		picture = "\zsn_visselpipa\jagarhorn.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class CfgSounds
{
	sounds[] = {};
	class zsn_whistledash1
	{
		name = "zsn_whistledash";
		sound[] = {"\zsn_visselpipa\sounds\Thunderer580dash.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistledot1
	{
		name = "zsn_whistledot";
		sound[] = {"\zsn_visselpipa\sounds\Thunderer580dot.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchdash
	{
		name = "zsn_trenchdash";
		sound[] = {"\zsn_visselpipa\sounds\trenchdash.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchdot
	{
		name = "zsn_trenchdot";
		sound[] = {"\zsn_visselpipa\sounds\trenchdot.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblow2
	{
		name = "zsn_whistleblow";
		sound[] = {"\zsn_visselpipa\sounds\thunderer585.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblow3
	{
		name = "zsn_whistleblow";
		sound[] = {"\zsn_visselpipa\sounds\thunderer595.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblow4
	{
		name = "zsn_whistleblow";
		sound[] = {"\zsn_visselpipa\sounds\thunderer605.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblast2
	{
		name = "zsn_whistleblast";
		sound[] = {"\zsn_visselpipa\sounds\thunderer585blast.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblast3
	{
		name = "zsn_whistleblast";
		sound[] = {"\zsn_visselpipa\sounds\thunderer595blast.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_whistleblast4
	{
		name = "zsn_whistleblast";
		sound[] = {"\zsn_visselpipa\sounds\thunderer605blast.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchblow
	{
		name = "zsn_trenchblow";
		sound[] = {"\zsn_visselpipa\sounds\trench.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchblow2
	{
		name = "zsn_trenchblow";
		sound[] = {"\zsn_visselpipa\sounds\trench2.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchblast
	{
		name = "zsn_trenchblast";
		sound[] = {"\zsn_visselpipa\sounds\trenchblast.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_trenchblast2
	{
		name = "zsn_trenchblast";
		sound[] = {"\zsn_visselpipa\sounds\trenchblast2.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_uppstallning
	{
		name = "zsn_uppstallning";
		sound[] = {"\zsn_visselpipa\sounds\Uppstallning.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_framat
	{
		name = "zsn_framat";
		sound[] = {"\zsn_visselpipa\sounds\Framat.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_eld
	{
		name = "zsn_eld";
		sound[] = {"\zsn_visselpipa\sounds\Eld.ogg",1,1,1600};
		titles[] = {};
	};
	class zsn_eldupphor
	{
		name = "zsn_eldupphor";
		sound[] = {"\zsn_visselpipa\sounds\EldUpphor.ogg",1,1,1600};
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
				file = "zsn_visselpipa\functions\fn_whistleInit.sqf";
				postInit = 1;
			};
		};
	};
};
