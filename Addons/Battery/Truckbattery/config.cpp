class CfgPatches
{
	class SamMod_Official_TruckBattery
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class Inventory_Base;
	class Box_Base;
	class TruckBattery: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_TruckBattery0";
		descriptionShort="$STR_CfgVehicles_TruckBattery1";
		model="\dz\vehicles\parts\battery_truck.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		weight=18000;
		itemSize[]={5,3};
		absorbency=0;
		inventorySlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=5500;
			energyAtSpawn=5500;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={8};
			attachmentAction=2;
		};
	};
};
