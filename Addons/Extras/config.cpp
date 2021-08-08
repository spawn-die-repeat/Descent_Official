class CfgPatches
{
	class SamMod_Official_Extras
	{
		units[]=
		{
			"SG_Bish_Kit",
			"SG_MediBag_Purple",
			"SG_Dodgy_kit",
			"SG_MediBag_Sea",
			"SG_warden_kit",
			"SG_Flag_Bish",
			"SG_Flag_Dodgy",
			"SG_Flag_Pastie",
			"SG_Flag_SG",
			"SG_Flag_Warden",
			"SG_Durban_CarTent",
			"SG_DigitalCamo_CarTent",
			"SG_DuckHunter_CarTent",
			"SG_JungleCamo_CarTent",
			"SG_LeafTent_CarTent",
			"SG_Medical_PartyTent"				
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping",
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class SamMod_Official_Extras
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
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Extras/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Extras/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Extras/Scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Book_Base;
	class ItemBook: Book_Base
	{
	};
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class FirstAidKit
	{
	};
	class HouseNoDestruct;
	class Static;
	class BaseBuildingBase: Inventory_Base
	{
	};
	class Flag_Base: Inventory_Base
	{
	};
	class TentBase;
	class PartyTent;
	class SG_Bish_Kit: Container_Base
	{
		scope=2;
		displayName="SG_Amen";
		descriptionShort="God will strike you down";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={10,100};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\First Aid Pouch\SG_Bish_Kit.paa",
			"Extras\Data\First Aid Pouch\SG_Bish_Kit.paa",
			"Extras\Data\First Aid Pouch\SG_Bish_Kit.paa"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid2"
		};
	};	
	class SG_MediBag_Purple: Container_Base
	{
		scope=2;
		displayName="SG_MediBag_Purple";
		descriptionShort="Special Medical Bag By SG";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={5,5};
		attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa",
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa",
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid2"
		};
	};	
	class SG_Dodgy_kit: Container_Base
	{
		scope=2;
		displayName="SG Dodgy Kit";
		descriptionShort="Hands off";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={10,100};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\First Aid Pouch\SG_Dodgy_kit.paa",
			"Extras\Data\First Aid Pouch\SG_Dodgy_kit.paa",
			"Extras\Data\First Aid Pouch\SG_Dodgy_kit.paa"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid2"
		};
	};
	class SG_MediBag_Sea: Container_Base
	{
		scope=2;
		displayName="SG_MediBag_Sea";
		descriptionShort="Special Medical Bag By SG";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={5,5};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa",
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa",
			"Extras\Data\First Aid Pouch\SG_FirstAid_Purple.paa"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid2"
		};
	};
	class SG_warden_kit: Container_Base
	{
		scope=2;
		displayName="SGCrocadilekit";
		descriptionShort="It Bites";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={10,100};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\First Aid Pouch\SG_Warden_kit.paa",
			"Extras\Data\First Aid Pouch\SG_Warden_kit.paa",
			"Extras\Data\First Aid Pouch\SG_Warden_kit.paa"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid2"
		};
	};	
	class SG_Flag_Bish: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Flags\SG_Bish_Flag.paa"
		};
	};
	class SG_Flag_Dodgy: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Flags\SG_Dodgy_Flag.paa"
		};
	};
	class SG_Flag_Pastie: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Flags\SG_Pastie_Flag.paa"
		};
	};
	class SG_Flag: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Flags\SG_Flag.paa"
		};
	};
	class SG_Flag_Warden: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Flags\SG_Warden_Flag.paa"
		};
	};
	class CarTent;
	class CarTentPlacing;
	class SG_Durban_CarTent: CarTent
	{
		scope=2;
		displayName="ChernoCamo CarTent";	
		itemsCargoSize[]={10,75};
		hiddenSelections[]=
		{
			"entrancec",
			"entranceo",
			"bags",
			"camo",
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Tents\Car Tents\SG_ChernoCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_ChernoCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_ChernoCamo_Packed.paa",
			"dz\gear\camping\data\tent_pristine_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"dz\gear\camping\data\car_tent_packed.rvmat",
			"Extras\Data\Tents\Car Tents\SG_ChernoCamo.rvmat"
		};
	};
	class SG_Durban_CarTentPlacing: CarTentPlacing
	{
	};
	class SG_DigitalCamo_CarTent: CarTent
	{
		scope=2;
		displayName="DigitalCamo CarTent";
		itemsCargoSize[]={10,75};
		hiddenSelections[]=
		{
			"entrancec",
			"entranceo",
			"bags",
			"camo",
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Tents\Car Tents\SG_DigitalCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_DigitalCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_DigitalCamo_Packed.paa",
			"dz\gear\camping\data\tent_pristine_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"dz\gear\camping\data\car_tent_packed.rvmat",
			"Extras\Data\Tents\Car Tents\SG_DigitalCamo.rvmat"
		};
	};
	class SG_DigitalCamo_CarTentPlacing: CarTentPlacing
	{
	};
	class SG_DuckHunter_CarTent: CarTent
	{
		scope=2;
		displayName="DuckHunterCamo CarTent";
		itemsCargoSize[]={10,75};
		hiddenSelections[]=
		{
			"entrancec",
			"entranceo",
			"bags",
			"camo",
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Tents\Car Tents\SG_DuckHunter.paa",
			"Extras\Data\Tents\Car Tents\SG_DuckHunter.paa",
			"Extras\Data\Tents\Car Tents\SG_DuckHunter_Packed.paa",
			"dz\gear\camping\data\tent_pristine_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"dz\gear\camping\data\car_tent_packed.rvmat",
			"Extras\Data\Tents\Car Tents\SG_DuckHunter.rvmat"
		};
	};
	class SG_DuckHunter_CarTentPlacing: CarTentPlacing
	{
	};
	class SG_JungleCamo_CarTent: CarTent
	{
		scope=2;
		displayName="JungleCamo  Car Tent";
		itemsCargoSize[]={10,75};
		hiddenSelections[]=
		{
			"entrancec",
			"entranceo",
			"bags",
			"camo",
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Tents\Car Tents\SG_JungleCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_JungleCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_JungleCamo_Packed.paa",
			"dz\gear\camping\data\tent_pristine_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"dz\gear\camping\data\car_tent_packed.rvmat",
			"Extras\Data\Tents\Car Tents\SG_JungleCamo.rvmat"
		};
	};
	class SG_JungleCamo_CarTentPlacing: CarTentPlacing
	{
	};
	class SG_LeafTent_CarTent: CarTent
	{
		scope=2;
		displayName="LeafCamo Car Tent";
		itemsCargoSize[]={10,60};
		hiddenSelections[]=
		{
			"entrancec",
			"entranceo",
			"bags",
			"camo",
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[]=
		{
			"Extras\Data\Tents\Car Tents\SG_LeafCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_LeafCamo.paa",
			"Extras\Data\Tents\Car Tents\SG_LeafCamo_Packed.paa",
			"dz\gear\camping\data\tent_pristine_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"dz\gear\camping\data\car_tent_packed.rvmat",
			"Extras\Data\Tents\Car Tents\SG_LeafCamo.rvmat"
		};
	};
	class SG_LeafTent_CarTentPlacing: CarTentPlacing
	{
	};
	class SG_Medical_PartyTent: PartyTent
    {
		scope=2;
        displayName="SG Medical tent";
        descriptionShort="SG Medical tent";
        itemsCargoSize[]={10,20};
        hiddenSelectionsTextures[]=
        {
            "Extras\Data\Tents\Party Tent\SG_party_tent_medi.paa",
            "dz\gear\camping\data\tent_pristine_co.paa",
            "dz\gear\camping\data\party_tent_pieces_co.paa",
            "dz\gear\camping\data\party_tent_tubes_cables_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "dz\gear\camping\data\party_tent_bag.rvmat",
            "Extras\Data\Tents\Party Tent\SG_party_tent_medi.rvmat",
            "dz\gear\camping\data\party_tent_pieces.rvmat",
            "dz\gear\camping\data\party_tent_tubes_cables.rvmat"
        };
    };
	class PartyTentPlacing: PartyTent
	{
	};
	class PartyTent_BluePlacing: PartyTentPlacing
	{
	};
	class PartyTent_BrownPlacing: PartyTentPlacing
	{
	};
	class PartyTent_LunaparkPlacing: PartyTentPlacing
	{
	};
	class SG_Medical_PartyTentPlacing: PartyTentPlacing
	{
	};
};	