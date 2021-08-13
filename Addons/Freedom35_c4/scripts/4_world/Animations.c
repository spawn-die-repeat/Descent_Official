modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("F35_oldc4", "dz/anims/workspaces/player/player_main/props/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/magazine_stanag30_coupled.anm");
    };
};