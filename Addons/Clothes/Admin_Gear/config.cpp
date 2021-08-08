	class CfgPatches
{
    class SamMod_Official_Pastie
    {
        units[]=
		{
			"SG_Pastie_PlateCarrier",
			"SG_Pastie_Pouches",
			"SG_Pastie_Holster",
			"SG_Pastie_Jacket",
			"SG_Pastie_CombatBoots",
			"SG_Pastie_TTSKOPants",
			"SG_Pastie_Balaclava",
			"SG_Pastie_Gloves",
			"SG_Dodgy_Balaclava",
	        "SG_Dodgy_Gloves",		
			"SG_Dodgy_Jacket",			
			"SG_Dodgy_TTSKOPants",			
			"SG_Dodgy_CombatBoots",
			"SG_Dodgy_PlateCarrier",			
			"SG_Dodgy_Pouches",		
			"SG_Dodgy_Holster",
			"SG_Dodgy_CowboyHat"
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
class CfgVehicles
{
	class Container_Base;
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class M65Jacket_ColorBase;
	class CombatBoots_ColorBase;
	class TTSKOPants;
	class BalaclavaMask_ColorBase;
	class OMNOGloves_ColorBase;
	class CowboyHat_ColorBase;
	class SG_Pastie_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG Pastie Plate Carrier";
		descriptionShort="Official Gamer Girl Gear";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={2,2};
		varWetMax=0;
		weight=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa"
		};	
	};
	class SG_Pastie_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG Pastie Plate Carrier Pouch";
		descriptionShort="Official Gamer Girl Gear";	
		itemSize[]={2,2};
		weight=0;
		itemsCargoSize[]={10,5};
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
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa"
		};	
	};
	class SG_Pastie_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG Pastie Plate Carrier Holster";
		descriptionShort="Official Gamer Girl Gear";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};	
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Pastie_PlateCarrier.paa"
		};	
	};
	class SG_Pastie_Jacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName="SG Pastie Jacket";
		descriptionShort="Official Gamer Girl Gear";	
		itemSize[]={2,2};
		itemsCargoSize[]={10,100};	
		varWetMax=0;
		weight=0;
		heatIsolation=1;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Pastie_M65.paa",
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Pastie_M65.paa",
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Pastie_M65.paa"
		};	
	};
	class SG_Pastie_CombatBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG Pastie Admin Boots";
		descriptionShort="Official Gamer Girl Gear";
		itemSize[]={2,2};
		attachments[]=
		{
			"Knife"
		};
		durability=0.5;
		varWetMax=0;
		weight=0;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\Boots\SG_Pastie_CombatBoots.paa",
			"Clothes\Admin_Gear\Data\Boots\SG_Pastie_CombatBoots.paa",
			"Clothes\Admin_Gear\Data\Boots\SG_Pastie_CombatBoots.paa"
		};
	};
	class SG_Pastie_TTSKOPants: TTSKOPants
	{	
		scope=2;
		displayName="SG Pastie Pants";
		descriptionShort="Official Gamer Girl Gear";	
		itemSize[]={2,2};
		weight=0;
		itemsCargoSize[]={0,0};	
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
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Pastie_TTSKOPants.paa",
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Pastie_TTSKOPants.paa",
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Pastie_TTSKOPants.paa"
		};	
	};
	class SG_Pastie_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG Pastie Balaclava";
		descriptionShort="Official Gamer Girl Gear";
		itemSize[]={2,1};
		weight=0;
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
			"Clothes\Admin_Gear\Data\Balaclava\SG_Pastie_Balaclava.paa",
			"Clothes\Admin_Gear\Data\Balaclava\SG_Pastie_Balaclava.paa",
			"Clothes\Admin_Gear\Data\Balaclava\SG_Pastie_Balaclava.paa"
		};	
	};
	class SG_Pastie_Gloves: OMNOGloves_ColorBase
	{	
		scope=2;
		displayName="SG Pastie Gloves";
		descriptionShort="Official Gamer Girl Gear";	
		varWetMax=0;
		weight=0;
		itemSize[]={1,1};
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Pastie_Gloves.paa",
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Pastie_Gloves.paa",
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Pastie_Gloves.paa"
		};
	};
	class SG_Dodgy_Balaclava: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="SG Dodgy Balaclava";
		descriptionShort="Another can or just ban";
		weight=0;
		itemSize[]={1,1};
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
			"Clothes\Admin_Gear\Data\Balaclava\SG_Dodgy_Balaclava.paa",
			"Clothes\Admin_Gear\Data\Balaclava\SG_Dodgy_Balaclava.paa",
			"Clothes\Admin_Gear\Data\Balaclava\SG_Dodgy_Balaclava.paa"
		};	
	    class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class SG_Dodgy_Gloves: OMNOGloves_ColorBase
	{
		scope=2;
		displayName="SG Dodgy Gloves";
		descriptionShort="Another can or just ban";	
		weight=0;
		itemSize[]={1,1};
		varWetMax=0;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Dodgy_Gloves.paa",
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Dodgy_Gloves.paa",
			"Clothes\Admin_Gear\Data\OMNOGloves\SG_Dodgy_Gloves.paa"
		};
	    class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};	
    class SG_Dodgy_Jacket: M65Jacket_ColorBase
	{
		scope=2;	
	    displayName="SG Dodgy Camo Jacket";
		descriptionShort="Another can or just ban";
		weight=0;
		itemSize[]={1,1};
		itemsCargoSize[]={10,50};
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
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Dodgy_M65.paa",
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Dodgy_M65.paa",
			"Clothes\Admin_Gear\Data\M65_Jacket\SG_Dodgy_M65.paa"
		};	
	    class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};			
    class SG_Dodgy_TTSKOPants: TTSKOPants
	{
		scope=2;
		displayName="SG Dodgy Camo Pants";
		descriptionShort="Another can or just ban";	
		itemSize[]={1,1};
		weight=0;
		itemsCargoSize[]={0,0};
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
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Dodgy_TTSKOPants.paa",
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Dodgy_TTSKOPants.paa",
			"Clothes\Admin_Gear\Data\TTSKOPants\SG_Dodgy_TTSKOPants.paa"
		};	
	    class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class SG_Dodgy_CombatBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="SG Forest AllSeason CombatBoots";
		descriptionShort="Another can or just ban";
		itemSize[]={4,3};
		attachments[]=
		{
			"Knife"
		};
		durability=0;
		weight=0;
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
			"Clothes\Admin_Gear\Data\Boots\SG_Dodgy_Boots.paa",
			"Clothes\Admin_Gear\Data\Boots\SG_Dodgy_Boots.paa",
			"Clothes\Admin_Gear\Data\Boots\SG_Dodgy_Boots.paa"
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};	
	class SG_Dodgy_PlateCarrier: PlateCarrierVest
	{	
		scope=2;
		displayName="SG Dodgy Plate Carrier";
		descriptionShort="Stella is my first love";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};	
		itemSize[]={1,1};
		weight=0;
		itemsCargoSize[]={0,0};
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
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa"
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};			
	class SG_Dodgy_Pouches: PlateCarrierPouches
	{	
		scope=2;	
		displayName="SG Dodgy Pouches";
		descriptionShort="Another can or just a ban";	
		itemSize[]={4,3};
		itemsCargoSize[]={8,5};
		allowOwnedCargoManipulation=1;
		weight=0;
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
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa"
		};		
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};			
	class SG_Dodgy_Holster: PlateCarrierHolster
	{	
		scope=2;	
		displayName="SG Dodgy Plate Carrier Holster";
		descriptionShort="Another can or just a ban";	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa",
			"Clothes\Admin_Gear\Data\PlateCarrier\SG_Dodgy_PlateCarrier.paa"
		};		
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class SG_Dodgy_CowboyHat: CowboyHat_ColorBase
	{
		scope=2;
		displayName="SG_Dodgy_CowboyHat";
		descriptionShort="Yee Haa";
		model="\DZ\characters\headgear\CowboyHat_g.p3d";
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
		rotationFlags=16;
		weight=0;
		itemSize[]={1,1};
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_CowboyHat"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Clothes\Admin_Gear\Data\CowboyHat\SG_Dodgy_Cowboyhat.paa",
			"Clothes\Admin_Gear\Data\CowboyHat\SG_Dodgy_Cowboyhat.paa",
			"Clothes\Admin_Gear\Data\CowboyHat\SG_Dodgy_Cowboyhat.paa"
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
    };
};