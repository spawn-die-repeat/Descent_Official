class CfgPatches
{
	class SamMod_Official_Weapons
	{
		units[]=
		{
			"Deagle",
			"Deagle_g"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base
	{
	};
	class Deagle_Base: Pistol_Base
	{
	};
	class SG_BlackCamo_Deagle: Deagle_Base
	{
		scope=2;
		displayName="SG BlackCamo Deagle";
		descriptionShort="$STR_cfgWeapons_DE1";
		model="\dz\weapons\pistols\DE\DE.p3d";
		attachments[]=
		{
			"weaponOpticsCrossbow",
			"pistolMuzzle"
		};
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"zbytek",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Weapons\SG BlackCamo\Deagle\SG_BlackCamo_deagle.paa",
			"Weapons\SG BlackCamo\Deagle\SG_BlackCamo_deagle.paa",
			"Weapons\SG BlackCamo\Deagle\SG_BlackCamo_deagle.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Weapons\SG BlackCamo\Deagle\BlackCamo_deagle.rvmat",
			"dz\weapons\pistols\DE\data\deagle_plastic.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=220;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Weapons\SG BlackCamo\Deagle\BlackCamo_deagle.rvmat",
			                    "Weapons\SG BlackCamo\Deagle\BlackCamo_deagle_plastic.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Weapons\SG BlackCamo\Deagle\BlackCamo_deagle.rvmat",
			                    "Weapons\SG BlackCamo\Deagle\BlackCamo_deagle_plastic.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\pistols\DE\data\deagle_damage.rvmat",
								"dz\weapons\pistols\DE\data\deagle_plastic_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\pistols\DE\data\deagle_damage.rvmat",
								"dz\weapons\pistols\DE\data\deagle_plastic_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\pistols\DE\data\deagle_destruct.rvmat",
								"dz\weapons\pistols\DE\data\deagle_plastic_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
