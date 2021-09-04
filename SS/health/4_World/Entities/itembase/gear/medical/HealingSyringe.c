class HealingSyringe: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionInjectHealingSyringeTarget);
		AddAction(ActionInjectHealingSyringeSelf);
	}
};
