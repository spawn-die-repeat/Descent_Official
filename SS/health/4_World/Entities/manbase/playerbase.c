modded class PlayerBase extends ManBase
{
    override void Init()
    {
        DayzPlayerItemBehaviorCfg toolsOneHanded = new DayzPlayerItemBehaviorCfg;
        toolsOneHanded.SetToolsOneHanded();

        
     	GetDayZPlayerType().AddItemInHandsProfileIK("HealingSyringe", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/morphine.anm");

		super.Init();
    }
}