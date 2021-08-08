	class CfgPatches
{
    class SamMod_Official_Clothes
    {
        units[]=
		{
			"SG_Beige_Tshirt",
			"SG_Black_Tshirt",
			"SG_Blue_Tshirt",
			"SG_Green_Tshirt",
			"SG_Grey_Tshirt",
		    "SG_BlackCamo_Beret",
			"SG_Durban_Beret",
			"SG_ForestAllSeason_Beret",
			"SG_JungleCamo_Beret",
			"SG_BlackCamo_Balaclava",
			"SG_Durban_Balaclava",
			"SG_ForestAllSeason_Balaclava",
			"SG_JungleCamo_Balaclava",
			"SG_Official_Balaclava",
			"SG_Blackcamo_Gloves",
			"SG_Durban_Gloves",
			"SG_ForestAllSeason_Gloves",
	        "SG_Jungle_Gloves",		
			"SG_BlackCamo_Jacket",
			"SG_Durban_Jacket",
			"SG_ForestAllSeason_Jacket",
			"SG_JungleCamo_Jacket",			
			"SG_BlackCamo_TTSKOPants",
			"SG_Durban_TTSKOPants",
			"SG_ForestAllSeason_TTSKOPants",
			"SG_JungleCamo_TTSKOPants",			
			"SG_BlackCamo_CombatBoots",
			"SG_Durban_CombatBoots",
			"SG_ForestAllSeason_CombatBoots",
			"SG_JungleCamo_CombatBoots",
			"SG_Official_Boots",			
			"SG_BlackCamo_AssaultBag",
			"SG_Durban_AssaultBag",
			"SG_ForestAllSeason_AssaultBag",
			"SG_JungleCamo_AssaultBag",
            "SG_BuidlingBag_AssaultBag",
            "SG_BlueBag_AssaultBag",
			"SG_MedicalBag_AssaultBag",
			"SG_BlackCamo_HighCapacityVest",
			"SG_Durban_HighCapacityVest",
			"SG_ForestAllSeason_HighCapacityVest",
			"SG_JungleCamo_HighCapacityVest",			
			"SG_BlackCamo_PlateCarrier",
			"SG_Durban_PlateCarrier",
			"SG_ForestAllSeason_PlateCarrier",
			"SG_JungleCamo_PlateCarrier",			
			"SG_BlackCamo_Pouches",
			"SG_Durban_Pouches",
			"SG_ForestAllSeason_Pouches",
			"SG_JungleCamo_Pouches",		
			"SG_BlackCamo_Holster",
			"SG_Durban_Holster",
			"SG_ForestAllSeason_Holster",
			"SG_JungleCamo_Holster",
			"SG_RiderJacket",
			"SG_deviljacket_BomberJacket",
			"SG_OldMan_BomberJacket",
			"SG_TheLoLJacket_WoolCoat",
			"SG_BlackCamo_Mich",
			"SG_Durban_Mich",
			"SG_ForestAllSeason_Mich",
			"SG_JungleCamo_Mich",
			"SG_SecurityVest_Black",
			"SG_SecurityVest_Blue"
		};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Data"
        };
    };
};
class CfgMods
{
	class SamMod_Official
	{
		dir="SamMod_Official";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SamaritanGaming";
		author="Bishop And DoDgY";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			""
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					""
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					""
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					""
				};
			};
		};
	};
};
class CfgVehicles
{	
	class Container_Base;
	class TShirt_ColorBase;
	class MilitaryBeret_ColorBase;
	class BalaclavaMask_ColorBase;
	class OMNOGloves_ColorBase;
	class M65Jacket_ColorBase;
	class TTSKOPants;
	class CombatBoots_ColorBase;
	class AssaultBag_ColorBase;
	class HighCapacityVest_ColorBase;
	class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class RidersJacket_ColorBase;
	class BomberJacket_ColorBase;
	class WoolCoat_ColorBase;
	class Mich2001Helmet;
	class PressVest_ColorBase;
	class SG_Beige_Tshirt: TShirt_ColorBase
	{
		scope=2;
		displayName="SG Beige";
		descriptionShort="Welcome to Samaritan's of DayZ";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_beige_co.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Beige_Tshirt.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Beige_Tshirt.paa"
		};
	};
	class SG_Black_Tshirt: TShirt_ColorBase
	{
		scope=2;
		displayName="SG Black";
		descriptionShort="Welcome to Samaritan's of DayZ";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_black_co.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Black_Tshirt.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Black_Tshirt.paa"
		};
	};
	class SG_Blue_Tshirt: TShirt_ColorBase
	{
		scope=2;
		displayName="SG Blue";
		descriptionShort="Welcome to Samaritan's of DayZ";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_blue_co.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Blue_Tshirt.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Blue_Tshirt.paa"
		};
	};
	class SG_Green_Tshirt: TShirt_ColorBase
	{
		scope=2;
		displayName="SG Green";
		descriptionShort="Welcome to Samaritan's of DayZ";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_green_co.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Green_Tshirt.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Green_Tshirt.paa"
		};
	};
	class SG_Grey_Tshirt: TShirt_ColorBase
	{
		scope=2;
		displayName="SG Grey";
		descriptionShort="Welcome to Samaritan's of DayZ";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\tops\Data\tshirt_ground_grey_co.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Grey_Tshirt.paa",
			"Clothes\SG_Official\Data\Tshirt\SG_Grey_Tshirt.paa"
		};
	};
	class SG_BlackCamo_Beret: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
        {
            male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
            female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
        };
		displayName="SG BlacCamo_Beret";
		descriptionShort="SG tactical, For all your Survival Needs";
		inventorySlot[]=
        {
            "Headgear"
        };
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]=
        {
            "Clothing",
            "Headgear"
        };
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Beret\SG_BlackCamo_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_BlackCamo_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_BlackCamo_Beret.paa"
		};
		headSelectionsToHide[]=
        {
            "Clipping_MilitaryBeret_xx"
        };
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};
	class SG_Durban_Beret: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
        {
            male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
            female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
        };
		displayName="SG Durban_Beret";
		descriptionShort="SG tactical, For all your Survival Needs";
		inventorySlot[]=
        {
            "Headgear"
        };
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]=
        {
            "Clothing",
            "Headgear"
        };
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Beret\SG_Durban_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_Durban_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_Durban_Beret.paa"
		};
		headSelectionsToHide[]=
        {
            "Clipping_MilitaryBeret_xx"
        };
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};	
	class SG_ForestAllSeason_Beret: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
        {
            male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
            female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
        };
		displayName="SG Forest All Season Beret";
		descriptionShort="SG tactical, For all your Survival Needs";
		inventorySlot[]=
        {
            "Headgear"
        };
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]=
        {
            "Clothing",
            "Headgear"
        };
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Beret\SG_ForestAllSeason_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_ForestAllSeason_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_ForestAllSeason_Beret.paa"
		};
		headSelectionsToHide[]=
        {
            "Clipping_MilitaryBeret_xx"
        };
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};		
	class SG_JungleCamo_Beret: MilitaryBeret_ColorBase
	{
		scope=2;
		model="\DZ\characters\headgear\MilitaryBeret_g.p3d";
		class ClothingTypes
        {
            male="\DZ\characters\headgear\MilitaryBeret_m.p3d";
            female="\DZ\characters\headgear\MilitaryBeret_f.p3d";
        };
		displayName="SG Jungle Beret";
		descriptionShort="SG tactical, For all your Survival Needs";
		inventorySlot[]=
        {
            "Headgear"
        };
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]=
        {
            "Clothing",
            "Headgear"
        };
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Beret\SG_JungleCamo_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_JungleCamo_Beret.paa",
			"Clothes\SG_Official\Data\Beret\SG_JungleCamo_Beret.paa"
		};
		headSelectionsToHide[]=
        {
            "Clipping_MilitaryBeret_xx"
        };
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	};			
	class SG_BlackCamo_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG BlackCamo Mask";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={2,1};	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Balaclava\SG_BlackCamo_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_BlackCamo_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_BlackCamo_Balaclava.paa"
		};
    };		
	class SG_Durban_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG Durban Mask";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={2,1};	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Balaclava\SG_Durban_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_Durban_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_Durban_Balaclava.paa"
		};
    };	
	class SG_ForestAllSeason_Balaclava: BalaclavaMask_ColorBase
	{
	    scope=2;
		displayName="SG Forest All Season Balaclava";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={2,1};	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Balaclava\SG_ForestAllSeason_balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_ForestAllSeason_balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_ForestAllSeason_balaclava.paa"
		};
    };
	class SG_JungleCamo_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG Jungle Balaclava";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={2,1};	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Balaclava\SG_JungleCamo_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_JungleCamo_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_JungleCamo_Balaclava.paa"
		};	
	};
	class SG_Official_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG Official Balaclava";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={2,1};	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Balaclava\SG_Official_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_Official_Balaclava.paa",
			"Clothes\SG_Official\Data\Balaclava\SG_Official_Balaclava.paa"
		};	
	};
	class SG_Blackcamo_Gloves: OMNOGloves_ColorBase
	{	
		scope=2;
		displayName="SG BlackCamo Gloves";
		descriptionShort="SG Tactical for all your suvival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\OMNOGloves\SG_BlackCamo_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_BlackCamo_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_BlackCamo_Gloves.paa"
		};
	};
	class SG_Durban_Gloves: OMNOGloves_ColorBase
	{
		scope=2;
		displayName="SG Durban Gloves";
		descriptionShort="SG Tactical for all your suvival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\OMNOGloves\SG_Durban_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_Durban_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_Durban_Gloves.paa"
		};
	};
	class SG_ForestAllSeason_Gloves: OMNOGloves_ColorBase
	{	
		scope=2;
		displayName="SG Forest All Season Gloves";
		descriptionShort="SG Tactical for all your suvival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\OMNOGloves\SG_ForestAllSeason_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_ForestAllSeason_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_ForestAllSeason_Gloves.paa"
		};
	};
	class SG_Jungle_Gloves: OMNOGloves_ColorBase
	{
		scope=2;
		displayName="SG Jungle Gloves";
		descriptionShort="SG Tactical for all your suvival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\OMNOGloves\SG_JungleCamo_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_JungleCamo_Gloves.paa",
			"Clothes\SG_Official\Data\OMNOGloves\SG_JungleCamo_Gloves.paa"
		};
	};	
	class SG_BlackCamo_Jacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName="SG BlacCamo Jacket";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};	
		varWetMax=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\M65_Jacket\SG_BlackCamo_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_BlackCamo_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_BlackCamo_M65.paa"
		};	
	};
    class SG_Durban_Jacket: M65Jacket_ColorBase
	{
		scope=2;	
	    displayName="SG Durban Jacket";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};	
		varWetMax=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\M65_Jacket\SG_Durban_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_Durban_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_Durban_M65.paa"
		};	
	};
    class SG_ForestAllSeason_Jacket: M65Jacket_ColorBase
	{
		scope=2;	
	    displayName="SG ForestAllSeason Jacket";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};	
		varWetMax=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\M65_Jacket\SG_ForestAllseasons_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_ForestAllseasons_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_ForestAllseasons_M65.paa"
		};	
	};
    class SG_JungleCamo_Jacket: M65Jacket_ColorBase
	{
		scope=2;	
	    displayName="SG Jungle Camo Jacket";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};	
		varWetMax=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\M65_Jacket\SG_JungleCamo_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_JungleCamo_M65.paa",
			"Clothes\SG_Official\Data\M65_Jacket\SG_JungleCamo_M65.paa"
		};	
	};	
	class SG_BlackCamo_TTSKOPants: TTSKOPants
	{	
		scope=2;
		displayName="SG BlackCamo Pants";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={10,4};	
		varWetMax=0;
		heatIsolation=1;
		attachments[]={ "Belt_Left"};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\TTSKOPants\SG_BlackCamo_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_BlackCamo_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_BlackCamo_TTSKOPants.paa"
		};	
	};
    class SG_Durban_TTSKOPants: TTSKOPants
	{	
		scope=2;
		displayName="SG Durban Pants";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={10,4};
		varWetMax=0;
		heatIsolation=1;		
		attachments[]={ "Belt_Left"};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\TTSKOPants\SG_Durban_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_Durban_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_Durban_TTSKOPants.paa"
		};	
	};	
    class SG_ForestAllSeason_TTSKOPants: TTSKOPants
	{	
		scope=2;
		displayName="SG Forest AllSeason Pants";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={10,4};
		varWetMax=0;
		heatIsolation=1;		
		attachments[]={ "Belt_Left"};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\TTSKOPants\SG_ForestAllSeason_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_ForestAllSeason_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_ForestAllSeason_TTSKOPants.paa"
		};	
	};		
    class SG_JungleCamo_TTSKOPants: TTSKOPants
	{
		scope=2;
		displayName="SG Jungle Camo Pants";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={10,4};
		varWetMax=0;
		heatIsolation=1;		
		attachments[]={ "Belt_Left"};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\TTSKOPants\SG_JungleCamo_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_JungleCamo_TTSKOPants.paa",
			"Clothes\SG_Official\Data\TTSKOPants\SG_JungleCamo_TTSKOPants.paa"
		};	
	};	
	class SG_BlackCamo_CombatBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG BlackCamo CombatBoots";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Boots\SG_BlackCamo_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_BlackCamo_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_BlackCamo_Boots.paa"
		};
	};
	class SG_Durban_CombatBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG Durban CombatBoots";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Boots\SG_Durban_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_Durban_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_Durban_Boots.paa"
		};
	};
	class SG_ForestAllSeason_CombatBoots: CombatBoots_ColorBase
	{	
		scope=2;
		displayName="SG Forest AllSeason CombatBoots";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Boots\SG_ForestAllSeason_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_ForestAllSeason_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_ForestAllSeason_Boots.paa"
		};
	};
	class SG_JungleCamo_CombatBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG Forest AllSeason CombatBoots";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Boots\SG_JungleCamo_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_JungleCamo_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_JungleCamo_Boots.paa"
		};
	};
	class SG_Official_Boots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG Official CombatBoots";
		descriptionShort="SG tactical, For all your Survival Needs";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Boots\SG_Official_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_Official_Boots.paa",
			"Clothes\SG_Official\Data\Boots\SG_Official_Boots.paa"
		};
	};
	class SG_BlackCamo_AssaultBag: AssaultBag_ColorBase
	{
		scope=2;
		displayName="SG BlackCamo Assault Bag";
		descriptionShort="A bag for small tactical missions";	
	    itemSize[]={4,5};
        itemsCargoSize[]={10,6};
        attachments[]={ "shoulder","Chemlight","WalkieTalkie","Pistol","magazine","magazine2"};
        varWetMax=0.79000002;
        heatIsolation=0.60000002;	
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_BlackCamo_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BlackCamo_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BlackCamo_AssaultBag.paa"
		};	
    };
	class SG_Durban_AssaultBag: AssaultBag_ColorBase
	{	
		scope=2;
		displayName="SG Durban Assault Bag";
		descriptionShort="A bag for small tactical missions";	
	    itemSize[]={4,5};
        itemsCargoSize[]={10,6};
        attachments[]={ "shoulder","Chemlight","WalkieTalkie","Pistol","magazine","magazine2"};
        varWetMax=0.79000002;
        heatIsolation=0.60000002;	
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_Durban_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_Durban_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_Durban_AssaultBag.paa"
		};	
    };	
	class SG_ForestAllSeason_AssaultBag: AssaultBag_ColorBase
	{	
		scope=2;
		displayName="SG Forest AllSeason Assault Bag";
		descriptionShort="A bag for small tactical missions";	
	    itemSize[]={4,5};
        itemsCargoSize[]={10,6};
        attachments[]={ "shoulder","Chemlight","WalkieTalkie","Pistol","magazine","magazine2"};
        varWetMax=0.79000002;
        heatIsolation=0.60000002;	
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_ForestAllSeason_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_ForestAllSeason_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_ForestAllSeason_AssaultBag.paa"
		};	
    };		
	class SG_JungleCamo_AssaultBag: AssaultBag_ColorBase
	{	
		scope=2;
		displayName="SG Jungle Camo Assault Bag";
		descriptionShort="A bag for small tactical missions";	
	    itemSize[]={4,5};
        itemsCargoSize[]={10,6};
        attachments[]={ "shoulder","Chemlight","WalkieTalkie","Pistol","magazine","magazine2"};
        varWetMax=0.79000002;
        heatIsolation=0.60000002;	
        hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_JungleCamo_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_JungleCamo_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_JungleCamo_AssaultBag.paa"
		};	
    };
	class SG_medicalBag_AssaultBag: AssaultBag_ColorBase
	{
		scope=2;
		displayName="SG Medical Bag";
		descriptionShort="A Medical Bag, Can hold Various Items.";
		itemSize[]={4,5};
		itemsCargoSize[]={10,5};
		attachments[]=
		{
			"Chemlight",
			"Mask",
			"WalkieTalkie",
			"firstaidkit",
			"Gloves",
			"MedicalBandage",
			"Headgear"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_MedicalBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_MedicalBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_MedicalBag_AssaultBag.paa"
		};
    };
	class SG_BlueBag_AssaultBag: AssaultBag_ColorBase
	{
		scope=2;
		displayName="SG Blue Bag";
		descriptionShort="A backpack can hold some intresting items";
		itemSize[]={4,5};
		itemsCargoSize[]={10,5};
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2",
			"Chemlight",
			"WalkieTalkie",
			"Pistol",
			"VestPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_BlueBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BlueBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BlueBag_AssaultBag.paa"
		};
	};
	class SG_BuidlingBag_AssaultBag: AssaultBag_ColorBase
	{
		scope=2;
		displayName="SG Building Bag";
		descriptionShort="A Bag for Building, Can hold Various Items.";
		itemSize[]={4,5};
		itemsCargoSize[]={10,5};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Truck_01_WoodenPlanks",
			"shoulder",
			"Truck_01_WoodenCrate1"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\AssaultBag\SG_BuidlingBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BuidlingBag_AssaultBag.paa",
			"Clothes\SG_Official\Data\AssaultBag\SG_BuidlingBag_AssaultBag.paa"
		};                                       
    };
	class SG_BlackCamo_HighCapacityVest: HighCapacityVest_ColorBase
	{	
		scope=2;	
		displayName="SG BlackCamo High Capacity Vest";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};	
		varWetMax=0.1;
		heatIsolation=0.75;	
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\HighCapacityVest\SG_BlackCamo_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_BlackCamo_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_BlackCamo_Vest.paa"
		};
	};	
	class SG_Durban_HighCapacityVest: HighCapacityVest_ColorBase
	{	
		scope=2;	
		displayName="SG Durban High Capacity Vest";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};	
		varWetMax=0.1;
		heatIsolation=0.75;	
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\HighCapacityVest\SG_Durban_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_Durban_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_Durban_Vest.paa"
		};
	};		
	class SG_ForestAllSeason_HighCapacityVest: HighCapacityVest_ColorBase
	{	
		scope=2;	
		displayName="SG Forest AllSeason High Capacity Vest";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};	
		varWetMax=0.1;
		heatIsolation=0.75;	
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\HighCapacityVest\SG_ForestAllSeason_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_ForestAllSeason_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_ForestAllSeason_Vest.paa"
		};
	};	
	class SGJungleCamoHighCapacityVest: HighCapacityVest_ColorBase
	{	
		scope=2;	
		displayName="SG Jungle Camo High Capacity Vest";
		descriptionShort="SG tactical, For all your Survival Needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};	
		varWetMax=0.1;
		heatIsolation=0.75;	
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\HighCapacityVest\SG_JungleCamo_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_JungleCamo_Vest.paa",
			"Clothes\SG_Official\Data\HighCapacityVest\SG_JungleCamo_Vest.paa"
		};
	};	
	class SG_BlackCamo_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG BlackCamo Plate Carrier";
		descriptionShort="SG Tactical for all your survival needs";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa"
		};	
	};
	class SG_Durban_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG Durban Plate Carrier";
		descriptionShort="SG Tactical for all your survival needs";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa"
		};		
	};
	class SG_ForestAllSeason_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG Forest AllSeason Plate Carrier";
		descriptionShort="SG Tactical for all your survival needs";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa"
		};		
	};	
	class SG_JungleCamo_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG Jungle Camo Plate Carrier";
		descriptionShort="SG Tactical for all your survival needs";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={4,4};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa"
		};		
	};	
	class SG_BlackCamo_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG BlackCamo Plate Carrier Pouch";
		descriptionShort="SG Tactical for all your survival needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa"
		};	
	};	
	class SG_Durban_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG Durban Plate Carrier Pouch";
		descriptionShort="SG Tactical for all your survival needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa"
		};		
	};
	class SG_ForestAllSeason_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG Forest AllSeason Plate Carrier Pouch";
		descriptionShort="SG Tactical for all your survival needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};	
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa"
		};		
	};		
	class SG_JungleCamo_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG Forest Jungle Camo Plate Carrier Pouch";
		descriptionShort="SG Tactical for all your survival needs";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa"
		};		
	};		
	class SG_BlackCamo_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG BlackCamo Plate Carrier Holster";
		descriptionShort="SG Tactical for all your survival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_BlackCamo_PlateCarrier.paa"
		};	
	};		
	class SG_Durban_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG Durban Plate Carrier Holster";
		descriptionShort="SG Tactical for all your survival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_Durban_PlateCarrier.paa"
		};		
	};	
	class SG_ForestAllSeason_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG Forest AllSeason Plate Carrier Holster";
		descriptionShort="SG Tactical for all your survival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_ForestAllSeason_PlateCarrier.paa"
		};		
	};		
	class SG_JungleCamo_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG Jungle Camo Plate Carrier Holster";
		descriptionShort="SG Tactical for all your survival needs";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa",
			"Clothes\SG_Official\Data\PlateCarrier\SG_JungleCamo_PlateCarrier.paa"
		};		
	};	
	class SG_RiderJacket: RidersJacket_ColorBase
	{	
		scope=2;	
		displayName="SGRiderJacket";
		descriptionShort="Samaritain Gaming's Official Clan Top";	
		itemSize[]={4,4};
		itemsCargoSize[]={10,3};	
		attachments[]=
		{
			"Belt_Left",
			"shoulder"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\RiderJacket\SG_RiderJacket.paa",
			"Clothes\SG_Official\Data\RiderJacket\SG_RiderJacket.paa",
			"Clothes\SG_Official\Data\RiderJacket\SG_RiderJacket.paa"
		};
    };	
	class SG_OldMan_BomberJacket: BomberJacket_ColorBase
	{
		scope=2;
		displayName="Old Man Jacket";
		descriptionShort="A Jacket for an old man";		
		itemSize[]={4,4};
		itemsCargoSize[]={10,5};		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\BomberJacket\SG_OldMan_BomberJacket.paa",
			"Clothes\SG_Official\Data\BomberJacket\SG_OldMan_BomberJacket.paa",
			"Clothes\SG_Official\Data\BomberJacket\SG_OldMan_BomberJacket.paa"
		};	
	};
	class SG_deviljacket_BomberJacket: BomberJacket_ColorBase
	{
		scope=2;
		displayName="RED Jacket";
		descriptionShort="A Jacket for the Devil";
		itemSize[]={4,4};
		itemsCargoSize[]={10,5};		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\BomberJacket\SG_deviljacket_BomberJacket.paa",
			"Clothes\SG_Official\Data\BomberJacket\SG_deviljacket_BomberJacket.paa",
			"Clothes\SG_Official\Data\BomberJacket\SG_deviljacket_BomberJacket.paa"
		};	
	};
	class SG_TheLoLJacket_WoolCoat: WoolCoat_ColorBase
	{
		scope=2;	
		displayName="The LoL Jacket";
		descriptionShort="Property Of the LOL clan";	
		itemSize[]={4,4};
		itemsCargoSize[]={10,5};	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\WoolCoat\SG_TheLoLJacket_WoolCoat.paa",
			"Clothes\SG_Official\Data\WoolCoat\SG_TheLoLJacket_WoolCoat.paa",
			"Clothes\SG_Official\Data\WoolCoat\SG_TheLoLJacket_WoolCoat.paa"
		};	
    };
	class SG_BlackCamo_Mich : Mich2001Helmet
    {
		scope=2;
		displayName="SG BlackCamo Mich2001";
		descriptionShort="SG tactical, For all your Survival Needs";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Helmets\SG_BlackCamo_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_BlackCamo_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_BlackCamo_Mich.paa"
		};
	};
	class SG_Durban_Mich : Mich2001Helmet
	{
		scope=2;
		displayName="SG Durban Mich2001";
		descriptionShort="SG tactical, For all your Survival Needs";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Helmets\SG_Durban_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_Durban_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_Durban_Mich.paa"
		};
	};
	class SG_ForestAllSeason_Mich : Mich2001Helmet
	{
		scope=2;
		displayName="SG ForestAllSeason Mich2001";
		descriptionShort="SG tactical, For all your Survival Needs";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Helmets\SG_ForestAllSeason_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_ForestAllSeason_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_ForestAllSeason_Mich.paa"
		};
	};	
	class SG_JungleCamo_Mich : Mich2001Helmet
	{
		scope=2;
		displayName="SG JungleCamo Mich2001";
		descriptionShort="SG tactical, For all your Survival Needs";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\Helmets\SG_JungleCamo_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_JungleCamo_Mich.paa",
			"Clothes\SG_Official\Data\Helmets\SG_JungleCamo_Mich.paa"
		};
	};
	class SG_SecurityVest_Black: PressVest_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_PressVest_ColorBase0";
		descriptionShort="$STR_CfgVehicles_PressVest_ColorBase1";
		model="\DZ\characters\vests\pressVest_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"Pistol"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=7000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		quickBarBonus=2;
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		visibilityModifier=0.94999999;
		repairableWithKits[]={3,8};
		repairCosts[]={25,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\pressVest_m.p3d";
			female="\DZ\characters\vests\pressVest_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Black.paa",
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Black.paa",
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Black.paa"
		};
	};
	class SG_SecurityVest_Blue: PressVest_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_PressVest_ColorBase0";
		descriptionShort="$STR_CfgVehicles_PressVest_ColorBase1";
		model="\DZ\characters\vests\pressVest_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"Pistol"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=7000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		quickBarBonus=2;
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		visibilityModifier=0.94999999;
		repairableWithKits[]={3,8};
		repairCosts[]={25,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\pressVest_m.p3d";
			female="\DZ\characters\vests\pressVest_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Blue.paa",
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Blue.paa",
			"Clothes\SG_Official\Data\SecurityVest\SG_SecurityVest_Blue.paa"
		};
	};
};	
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfirstaidkit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"firstaidkit"
		};
		model="\DZ\gear\containers\FirstAidKit.p3d";
	};
};
class CfgSlots
{
	class Slot_FirstAid
	{
		name="firstaidkit";
		displayName="firstaidkit";
		ghostIcon="hips";
	};
};
