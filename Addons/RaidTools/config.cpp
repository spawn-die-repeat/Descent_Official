class CfgPatches
{
	class SamMod_Official
	{
		units[]=
		{
			"SG_RaidPick",
			"SG_RaidHammer",
			"SG_RaidSaw"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class FishingRod_Base_New: FishingRod_Base
	{
	};
	class Lockpick: Inventory_Base
	{
	};
	class SledgeHammer: Inventory_Base
	{
	};
	class Hacksaw: Inventory_Base
	{
	};
	class FirefighterAxe: Inventory_Base
	{
	};
	class SG_RaidPick: Lockpick
	{
		scope=2;
		displayName="SG RaidPick";
		descriptionShort="Gimmi da Loot";
		model="\dz\gear\tools\Lockpick.p3d";
		isLockpick=1;
		itemSize[]={1,2};
		repairableWithKits[]={};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RaidTools\RaidPick\SG_RaidPick.paa"
		};
	};
	class SG_RaidHammer: SledgeHammer
	{
		scope=2;
		displayName="SG RaidHammer";
		descriptionShort="Gimmi da Loot";
		model="\dz\gear\tools\Sledge_Hammer.p3d";
		itemSize[]={2,5};
		repairableWithKits[]={};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RaidTools\RaidHammer\SG_RaidHammer.paa"
		};
	};
	class SG_Raidsaw: Hacksaw
	{
		scope=2;
		displayName="SG RaidSaw";
		descriptionShort="Gimmi da Loot";
		model="\dz\gear\tools\hacksaw.p3d";
		action="GestureMeleeBayonetStab";
		itemInfo[]=
		{
			"Knife"
		};
		itemSize[]={3,2};
		repairableWithKits[]={};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"RaidTools\RaidSaw\SG_RaidSaw.paa"
		};
	};
	class SG_RaidAxe: FirefighterAxe
	{
		scope=2;
		displayName="SG RaidAxe";
		descriptionShort="Chop Chop";
		model="\dz\weapons\melee\blade\FirefighterAxe.p3d";
		itemSize[]={2,5};
		itemInfo[]=
		{
			"Axe"
		};
		hiddenSelectionsTextures[]=
		{
			"RaidTools\RaidAxe\SG_RaidAxe.paa"
		};
	};
};
