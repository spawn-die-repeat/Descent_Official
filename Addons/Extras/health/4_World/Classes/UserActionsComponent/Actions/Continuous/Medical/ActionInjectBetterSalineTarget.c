class ActionInjectHealingSyringeTarget: ActionInjectTarget
{   
	override void ApplyModifiers( ActionData action_data )
	{
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		
		 ntarget.AddHealth("GlobalHealth", "Health", 90);
         ntarget.AddHealth("GlobalHealth", "Blood", 4000);
         ntarget.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);

	}
}