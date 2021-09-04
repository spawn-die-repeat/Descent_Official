class ActionInjectHealingSyringeSelf: ActionInjectSelf
{   

	 override void ApplyModifiers( ActionData action_data )
	{
		PlayerBase player = action_data.m_Player;
		
		action_data.m_Player.AddHealth("GlobalHealth", "Health", 40);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 2000);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
		
	}
}