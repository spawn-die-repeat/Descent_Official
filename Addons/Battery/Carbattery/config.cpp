class CfgPatches
{
	class SamMod_Official_CarBattery
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
	class CarBattery: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CarBattery0";
		descriptionShort="$STR_CfgVehicles_CarBattery1";
		model="\dz\vehicles\parts\battery_car.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		weight=10000;
		itemSize[]={3,3};
		absorbency=0.1;
		inventorySlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=2500;
			energyAtSpawn=2500;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={5,8,6};
			attachmentAction=2;
		};
	};
};
