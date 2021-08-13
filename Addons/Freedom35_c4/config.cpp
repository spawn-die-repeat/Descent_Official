class CfgPatches
{
	class Freedom35_c4
	{
		units[]=
		{
			"F35_oldc4"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
		weapons[]={};
	};
};
class CfgMods
{
	class Freedom35_c4
	{
		dir="Freedom35_c4";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Freedom35_c4";
		credits="";
		author="Wayward Son";
		authorID="0";
		version="0.5";
		extra=0;
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Freedom35_c4/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class F35_oldc4: Inventory_Base
	{
		scope=2;
		displayName="Old Plastic Explosive";
		descriptionShort="An old deactivated brick of plastic explosive. Combine 3 of these with and Electronics Repair Kit to create a Satchel Charge.";
		model="Freedom35_c4\c4_f35.p3d";
		weight=70;
		rotationFlags=17;
		itemSize[]={1,3};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=3;
		varQuantityDestroyOnMin=1;
		varStackMax=3;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Freedom35_c4\data\c4_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
};
