modded class ActionGiveSalineTarget
{   
     override void OnFinishProgressServer( ActionData action_data )
     {
         PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
         Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
         float delta = nacdata.param1;
         
         ntarget.AddHealth("GlobalHealth", "Health", 30);
         ntarget.AddHealth("GlobalHealth", "Blood", 1500);
         ntarget.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
         
         action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
         
         action_data.m_MainItem.Delete();
     }
}