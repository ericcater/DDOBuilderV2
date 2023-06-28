// BreakdownTypes.h
//
#pragma once

enum BreakdownType
{
    Breakdown_Unknown = 0,
    //
    Breakdown_DestinyPoints,
    Breakdown_FatePoints,
    Breakdown_NegativeLevels,
    // abilities
    Breakdown_Strength,
    Breakdown_Dexterity,
    Breakdown_Constitution,
    Breakdown_Intelligence,
    Breakdown_Wisdom,
    Breakdown_Charisma,
    // saves
    Breakdown_SaveFortitude,
    Breakdown_SaveReflex,
    Breakdown_SaveWill,
    Breakdown_SaveEnchantment,
    Breakdown_SaveFear,
    Breakdown_SaveIllusion,
    Breakdown_SavePoison,
    Breakdown_SaveDisease,
    Breakdown_SaveSpell,
    Breakdown_SaveMagic,
    Breakdown_SaveTraps,
    Breakdown_SaveCurse,
    // physical
    Breakdown_ArmorCheckPenalty,
    Breakdown_BAB,
    Breakdown_MovementSpeed,
    Breakdown_Hitpoints,
    Breakdown_FalseLife,
    Breakdown_KiMaximum,
    Breakdown_UnconsciousRange,
    Breakdown_StyleBonusFeats,
    Breakdown_PRR,
    Breakdown_MRR,
    Breakdown_MRRCap,
    Breakdown_AC,
    Breakdown_BonusArmorAC,
    Breakdown_BonusShieldAC,
    Breakdown_DR,
    Breakdown_Dodge,
    Breakdown_DodgeCap,
    Breakdown_DodgeCapTowerShield,
    Breakdown_MaxDexBonus,
    Breakdown_MaxDexBonusShields,
    Breakdown_OffHandAttackBonus,
    Breakdown_DoubleStrike,
    Breakdown_DoubleShot,
    Breakdown_Fortification,
    Breakdown_HealingAmplification,
    Breakdown_ImbueDice,
    Breakdown_Immunities,
    Breakdown_NaturalArmor,
    Breakdown_NegativeHealingAmplification,
    Breakdown_RepairAmplification,
    Breakdown_ThreatMelee,
    Breakdown_ThreatRanged,
    Breakdown_ThreatSpell,
    Breakdown_SecondaryShieldBash,
    Breakdown_DodgeBypass,
    Breakdown_FortificationBypass,
    Breakdown_TacticalAssassinate,
    Breakdown_TacticalStunning,
    Breakdown_TacticalSunder,
    Breakdown_TacticalTrip,
    Breakdown_TacticalStunningShield,
    Breakdown_TacticalGeneral,
    Breakdown_TacticalWands,
    Breakdown_TacticalFear,
    Breakdown_TacticalInnateAttack,
    Breakdown_TacticalBreathWeapon,
    Breakdown_TacticalPoison,
    Breakdown_TacticalRuneArm,
    Breakdown_TacticalQuiveringPalm,
    Breakdown_MissileDeflection,
    Breakdown_MissileDeflectionBypass,
    Breakdown_OverrideBAB,
    Breakdown_Incorporeality,
    Breakdown_Displacement,
    Breakdown_Strikethrough,
    Breakdown_SneakAttackDice,
    Breakdown_SneakAttackDamage,
    Breakdown_SneakAttackAttack,
    Breakdown_SneakAttackRange,
    Breakdown_HelplessDamage,
    Breakdown_HelplessDamageReduction,
    Breakdown_DamageAbilityMultiplier,
    Breakdown_DamageAbilityMultiplierOffhand,
    Breakdown_KiPassive,
    Breakdown_KiHit,
    Breakdown_KiCritical,
    Breakdown_RuneArmChargeRate,
    Breakdown_RuneArmStableCharge,
    // skills
    Breakdown_SkillBalance,
    Breakdown_SkillBluff,
    Breakdown_SkillConcentration,
    Breakdown_SkillDiplomacy,
    Breakdown_SkillDisableDevice,
    Breakdown_SkillHaggle,
    Breakdown_SkillHeal,
    Breakdown_SkillHide,
    Breakdown_SkillIntimidate,
    Breakdown_SkillJump,
    Breakdown_SkillListen,
    Breakdown_SkillMoveSilently,
    Breakdown_SkillOpenLock,
    Breakdown_SkillPerform,
    Breakdown_SkillRepair,
    Breakdown_SkillSearch,
    Breakdown_SkillSpellCraft,
    Breakdown_SkillSpot,
    Breakdown_SkillSwim,
    Breakdown_SkillTumble,
    Breakdown_SkillUMD,
    // magical
    Breakdown_Spellpoints,
    Breakdown_EldritchBlast,
    Breakdown_ArcaneSpellfailure,
    Breakdown_ArcaneSpellfailureShields,
    Breakdown_SpellResistance,
    Breakdown_CasterLevel_First,    // Breakdown_CasterLevel_First + class index
    Breakdown_CasterLevel_Last = Breakdown_CasterLevel_First + 50,
    Breakdown_CasterLevel_Spell_Acid,
    Breakdown_CasterLevel_Spell_Cold,
    Breakdown_CasterLevel_Spell_Electric,
    Breakdown_CasterLevel_Spell_Evil,
    Breakdown_CasterLevel_Spell_Fire,
    Breakdown_CasterLevel_Spell_Force,
    Breakdown_CasterLevel_Spell_Light,
    Breakdown_CasterLevel_Spell_Negative,
    Breakdown_CasterLevel_Spell_Poison,
    Breakdown_CasterLevel_Spell_Positive,
    Breakdown_CasterLevel_Spell_Sonic,
    Breakdown_CasterLevel_Ceruleite,
    Breakdown_CasterLevel_Crimsonite,
    Breakdown_CasterLevel_Gildleaf,
    Breakdown_CasterLevel_School_Abjuration,
    Breakdown_CasterLevel_School_Conjuration,
    Breakdown_CasterLevel_School_Divination,
    Breakdown_CasterLevel_School_Enchantment,
    Breakdown_CasterLevel_School_Evocation,
    Breakdown_CasterLevel_School_Illusion,
    Breakdown_CasterLevel_School_Necromancy,
    Breakdown_CasterLevel_School_Transmutation,
    Breakdown_MaxCasterLevel_Spell_Acid,
    Breakdown_MaxCasterLevel_Spell_Cold,
    Breakdown_MaxCasterLevel_Spell_Electric,
    Breakdown_MaxCasterLevel_Spell_Evil,
    Breakdown_MaxCasterLevel_Spell_Fire,
    Breakdown_MaxCasterLevel_Spell_Force,
    Breakdown_MaxCasterLevel_Spell_Light,
    Breakdown_MaxCasterLevel_Spell_Negative,
    Breakdown_MaxCasterLevel_Spell_Poison,
    Breakdown_MaxCasterLevel_Spell_Positive,
    Breakdown_MaxCasterLevel_Spell_Sonic,
    Breakdown_MaxCasterLevel_Ceruleite,
    Breakdown_MaxCasterLevel_Crimsonite,
    Breakdown_MaxCasterLevel_Gildleaf,
    Breakdown_MaxCasterLevel_School_Abjuration,
    Breakdown_MaxCasterLevel_School_Conjuration,
    Breakdown_MaxCasterLevel_School_Divination,
    Breakdown_MaxCasterLevel_School_Enchantment,
    Breakdown_MaxCasterLevel_School_Evocation,
    Breakdown_MaxCasterLevel_School_Illusion,
    Breakdown_MaxCasterLevel_School_Necromancy,
    Breakdown_MaxCasterLevel_School_Transmutation,
    Breakdown_SpellPenetration,
    Breakdown_SpellPowerAcid,
    Breakdown_SpellPowerCold,
    Breakdown_SpellPowerElectric,
    Breakdown_SpellPowerEvil,
    Breakdown_SpellPowerFire,
    Breakdown_SpellPowerForceUntyped,
    Breakdown_SpellPowerLightAlignment,
    Breakdown_SpellPowerNegative,
    Breakdown_SpellPowerPhysical,
    Breakdown_SpellPowerPositive,
    Breakdown_SpellPowerRepair,
    Breakdown_SpellPowerRust,
    Breakdown_SpellPowerSonic,
    Breakdown_SpellPowerPoison,
    Breakdown_SpellPowerUniversal,
    Breakdown_SpellCriticalChanceAcid,
    Breakdown_SpellCriticalChanceLightAlignment,
    Breakdown_SpellCriticalChanceCold,
    Breakdown_SpellCriticalChanceElectric,
    Breakdown_SpellCriticalChanceEvil,
    Breakdown_SpellCriticalChanceFire,
    Breakdown_SpellCriticalChanceForceUntyped,
    Breakdown_SpellCriticalChanceNegative,
    Breakdown_SpellCriticalChancePhysical,
    Breakdown_SpellCriticalChancePoison,
    Breakdown_SpellCriticalChancePositive,
    Breakdown_SpellCriticalChanceRepair,
    Breakdown_SpellCriticalChanceRust,
    Breakdown_SpellCriticalChanceSonic,
    Breakdown_SpellCriticalChanceUniversal,
    Breakdown_SpellCriticalMultiplierAcid,
    Breakdown_SpellCriticalMultiplierLightAlignment,
    Breakdown_SpellCriticalMultiplierCold,
    Breakdown_SpellCriticalMultiplierElectric,
    Breakdown_SpellCriticalMultiplierEvil,
    Breakdown_SpellCriticalMultiplierFire,
    Breakdown_SpellCriticalMultiplierForceUntyped,
    Breakdown_SpellCriticalMultiplierNegative,
    Breakdown_SpellCriticalMultiplierPhysical,
    Breakdown_SpellCriticalMultiplierPoison,
    Breakdown_SpellCriticalMultiplierPositive,
    Breakdown_SpellCriticalMultiplierRepair,
    Breakdown_SpellCriticalMultiplierRust,
    Breakdown_SpellCriticalMultiplierSonic,
    Breakdown_SpellCriticalMultiplierUniversal,
    Breakdown_SpellSchoolAbjuration,
    Breakdown_SpellSchoolConjuration,
    Breakdown_SpellSchoolDivination,
    Breakdown_SpellSchoolEnchantment,
    Breakdown_SpellSchoolEvocation,
    Breakdown_SpellSchoolIllusion,
    Breakdown_SpellSchoolNecromancy,
    Breakdown_SpellSchoolTransmutation,
    Breakdown_SpellSchoolFear,
    Breakdown_SpellSchoolGlobalDC,
    Breakdown_ImplementInYourHands,
    // songs
    Breakdown_SongCount,
    Breakdown_SongDuration,
    // other
    Breakdown_EnergyResistanceAcid,
    Breakdown_EnergyResistanceChaos,
    Breakdown_EnergyResistanceCold,
    Breakdown_EnergyResistanceElectric,
    Breakdown_EnergyResistanceEvil,
    Breakdown_EnergyResistanceFire,
    Breakdown_EnergyResistanceForce,
    Breakdown_EnergyResistanceGood,
    Breakdown_EnergyResistanceLawful,
    Breakdown_EnergyResistanceLight,
    Breakdown_EnergyResistanceNegative,
    Breakdown_EnergyResistancePoison,
    //Breakdown_EnergyResistancePositive,
    //Breakdown_EnergyResistanceRepair,
    //Breakdown_EnergyResistanceRust,
    Breakdown_EnergyResistanceSonic,
    Breakdown_EnergyAbsorptionAcid,
    Breakdown_EnergyAbsorptionChaos,
    Breakdown_EnergyAbsorptionCold,
    Breakdown_EnergyAbsorptionElectric,
    Breakdown_EnergyAbsorptionEvil,
    Breakdown_EnergyAbsorptionFire,
    Breakdown_EnergyAbsorptionForce,
    Breakdown_EnergyAbsorptionGood,
    Breakdown_EnergyAbsorptionLawful,
    Breakdown_EnergyAbsorptionLight,
    Breakdown_EnergyAbsorptionNegative,
    Breakdown_EnergyAbsorptionPoison,
    //Breakdown_EnergyAbsorptionPositive,
    //Breakdown_EnergyAbsorptionRepair,
    //Breakdown_EnergyAbsorptionRust,
    Breakdown_EnergyAbsorptionSonic,
    // melee power
    Breakdown_MeleePower,
    Breakdown_RangedPower,
    // hirelings
    Breakdown_HirelingAbilityBonus,
    Breakdown_HirelingHitpoints,
    Breakdown_HirelingFortification,
    Breakdown_HirelingPRR,
    Breakdown_HirelingMRR,
    Breakdown_HirelingDodge,
    Breakdown_HirelingMeleePower,
    Breakdown_HirelingRangedPower,
    Breakdown_HirelingSpellPower,
    // Turn Undead
    Breakdown_TurnUndeadLevel,
    Breakdown_TurnUndeadHitDice,
    // marker, not used as a real breakdown
    Breakdown_EndOfNormalBreakdowns,
    // weapon breakdowns
    Breakdown_WeaponEffectHolder,
    Breakdown_Weapon,
    Breakdown_WeaponBaseDamage,
    Breakdown_WeaponAttackBonus,
    Breakdown_WeaponDamageBonus,
    Breakdown_WeaponOtherDamageEffects,
    Breakdown_WeaponCriticalThreatRange,
    Breakdown_WeaponCriticalAttackBonus,
    Breakdown_WeaponCriticalDamageBonus,
    Breakdown_WeaponCriticalOtherDamageEffects,
    Breakdown_WeaponCriticalMultiplier,
    Breakdown_WeaponCriticalMultiplier19To20,
    Breakdown_WeaponAttackSpeed,
    Breakdown_WeaponGhostTouch,
    Breakdown_WeaponTrueSeeing,
    Breakdown_DRBypass,
    Breakdown_MainHand,
    Breakdown_OffHand,
};
