class CfgPatches
{
	class SamMod_Official_LS
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
class CfgMods
{
	class SamaritainGaming
	{
		dir="Loadingscreen";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Loadingscreen";
		credits="";
		author="Bishop";
		authorID="0";
		version="0.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Loadingscreen/scripts/3_Game"
				};
			};
		};
	};
};
