modded class SalineMdfr
{
    override void OnTick(PlayerBase player, float deltaT)
	{
		float blood =  player.GetHealth("GlobalHealth", "Blood");

		float blood_scale_normalized = Math.InverseLerp(PlayerConstants.BLOOD_THRESHOLD_FATAL, player.GetMaxHealth("", "Blood"), blood);
		blood_scale_normalized = Math.Clamp(blood_scale_normalized,0,1);
		float regen_speed = Math.Lerp(PlayerConstants.HEALTH_REGEN_MIN, PlayerConstants.HEALTH_REGEN_MAX, blood_scale_normalized);
		regen_speed = regen_speed * deltaT;
		if( player.GetHealth("GlobalHealth", "Health") > 0.001 )//hotfix for a bug in damage system
		{
			player.AddHealth("GlobalHealth", "Health" ,  regen_speed * 20.5 );
		}
		player.AddHealth("RightArm","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER );
		player.AddHealth("RightHand","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		player.AddHealth("LeftArm","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		player.AddHealth("LeftHand","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		
		player.AddHealth("RightLeg","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		player.AddHealth("RightFoot","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		player.AddHealth("LeftLeg","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		player.AddHealth("LeftFoot","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
		
		player.AddHealth("Torso","Health",regen_speed * PlayerConstants.DAMAGE_ZONE_BLOOD_REGEN_MODIFIER);
	} 
    
    override float CalculateRegenTime()
     {
         float regen_time = 120
         return regen_time;
     }
};