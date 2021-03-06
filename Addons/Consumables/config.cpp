class CfgPatches
{
	class SG_itemsize
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class WoodenPlank: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WoodenPlank0";
		descriptionShort="$STR_CfgVehicles_WoodenPlank1";
		model="\dz\gear\consumables\single_plank.p3d";
		weight=1500;
		itemSize[]={2,7};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=1;
		varStackMax=20;
		inventorySlot[]=
		{
			"Truck_01_WoodenPlanks",
			"Material_WoodenPlanks",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Material_L1W3_WoodenPlanks",
			"Material_L2_WoodenPlanks",
			"Material_L2W1_WoodenPlanks",
			"Material_L2W2_WoodenPlanks",
			"Material_L2W3_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_L3W1_WoodenPlanks",
			"Material_L3W2_WoodenPlanks",
			"Material_L3W3_WoodenPlanks"
		};
	};
	class WoodenLog: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WoodenLog0";
		descriptionShort="$STR_CfgVehicles_WoodenLog1";
		model="\dz\gear\camping\wooden_log.p3d";
		weight=20000;
		itemSize[]={3,10};
		varQuantityDestroyOnMin=1;
		itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=4;
		varStackMax=4;
		inventorySlot[]=
		{
			"Truck_01_WoodenLogs",
			"Material_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs",
			"Material_FPole_WoodenLog",
			"Material_FPole_WoodenLog2",
			"Material_FPole_MagicStick"
		};	
	};
	class Firewood: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Firewood0";
		descriptionShort="$STR_CfgVehicles_Firewood1";
		model="\dz\gear\cooking\log01.p3d";
		animClass="NoFireClass";
		weight=2000;
		absorbency=0.30000001;
		itemSize[]={2,5};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=6;
		varQuantityDestroyOnMin=1;
		varStackMax=6;
		inventorySlot[]=
		{
			"Firewood"
		};
	};
};