class CfgPatches
{
	class SamMod_Official_Health
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Medical",
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class SalineBagExtra
	{
		dir="SalineBagExtra";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="HealingSyringe";
		credits="Didldadl";
		author="Didldadl";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Extras\health\4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;
	class NewSalineBag: Inventory_Base
	{	
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		itemSize[]={1,2};
		weight=60;
		lootCategory="Medical";
		lootTag[]=
		{
			"Medic"
		};
		hiddenSelections[]=
        {
            "zbytek"
        };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};

	class HealingSyringe: NewSalineBag
	{
		scope=2;
		displayName="Healing Syringe";
		descriptionShort="Healing Syringe";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\Epinephrine.p3d"
		};
	};
	class SG_ProtoPen: HealingSyringe
	{
		scope=2;
		displayName="A Proto-Type Medical Syringe";
		descriptionShort="An experimental quick fire syringe its effects are unknow and caution should be used at all times.";
		hiddenSelectionsTextures[]=
		{
			"Extras\health\HealingSyringe.paa"
		};
	};
};