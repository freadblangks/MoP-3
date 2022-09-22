/*
 * Copyright (C) 2011-2015 SkyMist Gaming
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * World Boss: Chi-Ji <The Red Crane>.
 *
 * ======= QUESTS =======
 *
 * [90] Celestial Blessings
 *
 * Quest accept:
 * 
 * Wrathion says: I will meet you at each of the four shrines, champion.
 * Wrathion says: Remember, we must visit all four, but we only need to complete ONE of the four challenges.
 * Wrathion says: Choose the challenge most appropriate for your unique talents.
 * // Wrathion transforms into his whelp form.
 * Wrathion says: Good luck! 
 *
 * Quest complete:
 *
 * Wrathion says: We have done it, hero! We have the blessings of the celestials, and we have completed their challenge.
 * Wrathion says: I know our next step. Meet me back atop Mason's folly - you'll be pleasantly surprised at what I have in store for you! 
 *
 * Temple of the Red Crane - ! Healer spec challenge.
 *
 * Wrathion says: The Red Crane of Hope has inspired the citizens of Pandaria from the very dawn of history. I very much want to speak with him.
 * // Wrathion runs down the right-hand set of stairs to the basement.
 * Wrathion says: Great Red Crane! Hear our plea.
 * Wrathion says: My champion and I seek your blessing of Hope.
 * Chi-Ji says: My my, the child of the Worldbreaker, proof that none are beyond redemption. I am honored by your visit.
 * Chi-Ji says: Tell me, Son of the Earth-Warder: What is the nature of hope?
 * Wrathion says: Hope is...a belief of a better tomorrow.
 * Chi-Ji says: You speak, but doubt your own words.
 * // Wrathion kneels
 * Wrathion says: ...Great Crane. You have not seen what I have seen.
 * Chi-Ji says: You underestimate me.
 * Wrathion says: ...the fire that once burned the sky will return. It is inevitable. The Burning Legion WILL find Azeroth.
 * Wrathion says: Seas of blood, cities in ruins! Who are we - one divided world - to stand against a legion?
 * Wrathion says: You speak of hope. Believe me, the thinnest silver of belief that we might somehow survive the coming devastation is all that sustains me.
 * Chi-Ji says: Rise, son of Deathwing. I will give you my blessing, for you need it more than any I have ever met.
 * // Wrathion stands
 * Chi-Ji says: I challenge you not to think of hope as a vague and unimaginable future.
 * Chi-Ji says: Live EVERY day with hope in your heart. In doing so, you CREATE the future you dream of.
 * Wrathion says: ...thank you, Great Crane.
 * Chi-Ji says: My challenge, should you accept it, tasks you with healing the most grievous of wounds.
 *
 * - Healer Challenge -
 *
 * Chi-Ji says: Let the challenge begin! Hero, you must keep the Black Prince alive with your skills as a healer.
 * Wrathion says: I'm a black dragon. I won't need any help.
 * Chi-Ji says: Are you certain? You are filled with doubts and fears, young Prince.
 * Chi-Ji says: You have not fully reconciled with your past. Now is the time.
 * Wrathion says: What - wait - father!?
 * Vision of Deathwing yells: I shall tear this world apart!
 * Wrathion says: Please - don't make me do this.
 * Chi-Ji yells: Your champion will keep you alive. Begin!
 * Vision of Deathwing yells: Your efforts are insignificant!
 * 
 * Chi-Ji yells: Heal the Prince, but don't forget to keep yourself alive!
 * Chi-Ji yells: Do not miss any opportunity to heal the Black Prince!
 * Chi-Ji yells: The Vale of shadows has lifted!
 * Chi-Ji yells: Keep move! Your foe is dangerous, but you are smarter!
 * Chi-Ji yells: Use the blood of the world to regenerate yourself. You can do this!
 * Chi-Ji yells: The elements are undying! Make use of their time before they rise again!
 * Chi-Ji yells: Do not fear his traps, champion! Your healing is more powerful than his magic!
 * 
 * Vision of Deathwing yells: Your tenacity is admirable, but pointless!
 * Vision of Deathwing yells: There's no shelter from my fury!
 * Vision of Deathwing yells: Your armor means nothing! Your faith - even less!
 * 
 * Failure
 * Wrathion yells: Enough! Make it stop!
 * Chi-Ji yells: Very well. The test is over.
 * Chi-Ji says: But do not give in despair. You have the spirit to overcome this. Try again, I believe in you.
 *
 * Victory
 * Chi-Ji yells: Very good! You have done it!
 * Wrathion says: Such... madness...
 * Chi-Ji says: Do not despair, young prince. You are not your father.
 * Chi-Ji says: More importantly, your champion would not let you fall. Do you see, with the support of friends, nothing is impossible.
 * Wrathion says: I understand. Thank you, Great Crane. 
 *
 * ===================================================================================================================
 *
 *[90] The Emperor's Way - Actual Boss fight.
 *
 * Intro
 * Emperor Shaohao yells: The Red Crane saw hope in me, and instructed me to look inward. Despite my visage of despair, I found this hope, and the despair was vanquished.
 * Chi-Ji yells: When faced with challenges, the like you have never seen, what do you hope for? What is the future you seek?
 *
 * Aggro
 * Chi-Ji yells: Then let us begin!
 *
 * Beacon of Hope
 * Believe in one another, and let others carry hope for you.
 *
 * Crane Rush
 * Without hope, there is no brightness in the future.
 * Create the destiny you seek.
 *
 * Kills player
 * Do not give up on yourself! 
 *
 * Death
 * Chi-Ji yells: Your hope shines brightly, and even more brightly when you work together to overcome. It will ever light your way, in even the darkest of places.
 * Emperor Shaohao yells: You have walked the trial of hope, and learned of the path of the red crane. May it guide your footsteps through time.
*/

#include "ObjectMgr.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "CreatureTextMgr.h"
#include "SpellScript.h"
#include "SpellAuras.h"
#include "SpellAuraEffects.h"
#include "Player.h"

enum Texts
{
    // Chi'ji
    SAY_INTRO               = 0, // When faced with challenges, the like you have never seen, what do you hope for? What is the future you seek?
    SAY_AGGRO               = 1, // Then let us begin!
    SAY_DEATH               = 2, // Your hope shines brightly, and even more brightly when you work together to overcome. It will ever light your way, in even the darkest of places.
    SAY_SLAY                = 3, // Do not give up on yourself!
    SAY_BEACON_HOPE         = 4, // Believe in one another, and let others carry hope for you.
    SAY_CRANE_RUSH          = 5  // 0 - Without hope, there is no brightness in the future. ; 1 - Create the destiny you seek.
};

enum Spells
{
    // Chi'ji
    SPELL_INSPIRING_SONG    = 144468, // Heal spell.
    SPELL_FIRESTORM_SUMMON  = 144461, // Summons NPC_FIRESTORM in 15y.
    SPELL_BEACON_OF_HOPE_S  = 144473, // Summons NPC_BEACON_OF_HOPE.
    SPELL_BLAZING_SONG      = 144471, // Per. dmg. boss aura. Triggers 144472 dmg. each 2s, 65y radius.
    SPELL_CRANE_RUSH        = 144470, // 66 and 33%. Triggers 144495 each sec, summoning NPC_CHILD_OF_CHIJI each 0.5s in 5y.

    // NPCs
    SPELL_FIRESTORM_AURA    = 144463, // Per. dmg. npc aura. Triggers 144462 dmg. each 2s.
    SPELL_BEACON_OF_HOPE_A  = 144474, // Per. dmg. decrease npc aura. Triggers 144475 each 1s, 10y radius.
    SPELL_BURNING_NOVA_A    = 144493, // Per. dmg. npc aura. Triggers 144494 dmg. each 2s, 4y radius.
};

enum Events
{
    // Chi'ji
    EVENT_INSPIRING_SONG    = 1, // 20s from aggro, 30s after.
    EVENT_FIRESTORM         = 2, // 12s from aggro, 45s after.
    EVENT_BEACON_OF_HOPE    = 3, // 45s from aggro, 65s after.
    EVENT_BLAZING_SONG      = 4, // 9s after beacon of hope.
    EVENT_CRANE_RUSH        = 5  // 66 and 33%.
};

enum Npcs
{
    NPC_FIRESTORM           = 71971,
    NPC_BEACON_OF_HOPE      = 71978,
    NPC_CHILD_OF_CHIJI      = 71990
};

enum CraneRushStates
{
    DONE_NONE               = 0, // No casts done.
    DONE_66                 = 1, // First cast done.
    DONE_33                 = 2  // Both casts done.
};

// ToDo: Check and fix script.
class boss_chi_ji : public CreatureScript
{
    public:
        boss_chi_ji() : CreatureScript("boss_chi_ji") { }

        struct boss_chi_jiAI : public ScriptedAI
        {
            boss_chi_jiAI(Creature* creature) : ScriptedAI(creature), summons(me) { }

            EventMap _events;
            SummonList summons;
            uint8 craneRushDone;

            void InitializeAI()
            {
                if (!me->isDead())
                    Reset();
            }

            void Reset()
            {
                _events.Reset();
                summons.DespawnAll();

                craneRushDone = DONE_NONE;
            }
    
            void EnterCombat(Unit* /*who*/)
            {
                Talk(SAY_AGGRO);

                _events.ScheduleEvent(EVENT_INSPIRING_SONG, urand(18000, 23000)); // 18-23
                _events.ScheduleEvent(EVENT_FIRESTORM, urand(12000, 14000));      // 12-14
                _events.ScheduleEvent(EVENT_BEACON_OF_HOPE, urand(44000, 48000)); // 44-48
            }

            void KilledUnit(Unit* victim)
            {
                if (victim->GetTypeId() == TYPEID_PLAYER)
                    Talk(SAY_SLAY);
            }

            void EnterEvadeMode()
            {
                me->RemoveAllAuras();
                Reset();
                me->DeleteThreatList();
                me->CombatStop(true);
                me->GetMotionMaster()->MoveTargetedHome();
            }

            void JustDied(Unit* /*killer*/)
            {
                Talk(SAY_DEATH);
                summons.DespawnAll();
            }

            void JustSummoned(Creature* summon)
            {
                summons.Summon(summon);
                summon->setActive(true);

		        if (me->isInCombat())
                    summon->SetInCombatWithZone();

                switch (summon->GetEntry())
                {
                    case NPC_FIRESTORM:
                        summon->AddAura(SPELL_FIRESTORM_AURA, summon);
                        summon->SetReactState(REACT_PASSIVE);
						summon->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_NON_ATTACKABLE | UNIT_FLAG_NOT_SELECTABLE);
                        summon->SetSpeed(MOVE_WALK, 0.7f);
                        summon->SetSpeed(MOVE_RUN, 0.7f);
                        summon->GetMotionMaster()->MoveRandom(20.0f);
                        break;

                    case NPC_BEACON_OF_HOPE:
                        summon->AddAura(SPELL_BEACON_OF_HOPE_A, summon);
                        summon->SetReactState(REACT_PASSIVE);
                        break;

                    case NPC_CHILD_OF_CHIJI:
                    {
                        summon->AddAura(SPELL_BURNING_NOVA_A, summon);
                        summon->SetReactState(REACT_PASSIVE);
                        summon->SetSpeed(MOVE_WALK, 0.85f);
                        summon->SetSpeed(MOVE_RUN, 0.85f);
                        float x, y, z;
                        summon->GetClosePoint(x, y, z, summon->GetObjectSize() / 3, 50.0f);
                        summon->GetMotionMaster()->MovePoint(1, x, y, z); // Move forward 50y (enough time to despawn properly).
                        summon->DespawnOrUnsummon(30000); // Spell time is 1 minute, but it's too much to move the Child constantly.
                        break;
                    }

                    default: break;
                }
            }

            void UpdateAI(const uint32 diff)
            {
                if (!UpdateVictim())
                    return;

                _events.Update(diff);

                if (me->HasUnitState(UNIT_STATE_CASTING))
                    return;

                // Set Crane Rush phases execution.
                if (me->HealthBelowPct(67) && craneRushDone == DONE_NONE || me->HealthBelowPct(34) && craneRushDone == DONE_66)
                {
                    _events.ScheduleEvent(EVENT_CRANE_RUSH, 2000);
                    craneRushDone++;
                }

                while (uint32 eventId = _events.ExecuteEvent())
                {
                    switch (eventId)
                    {
                        case EVENT_INSPIRING_SONG:
                            DoCast(me, SPELL_INSPIRING_SONG);
                            _events.ScheduleEvent(EVENT_INSPIRING_SONG, urand(35000, 40000));
                            break;

                        case EVENT_FIRESTORM:
                            DoCast(me, SPELL_FIRESTORM_SUMMON);
                            _events.ScheduleEvent(EVENT_FIRESTORM, urand(43000, 47000));
                            break;

                        case EVENT_BEACON_OF_HOPE:
                            Talk(SAY_BEACON_HOPE);
                            if (Unit* target = SelectTarget(SELECT_TARGET_RANDOM, 0, NonTankTargetSelector(me)))
                                DoCast(target, SPELL_BEACON_OF_HOPE_S);
                            _events.ScheduleEvent(EVENT_BLAZING_SONG, urand(8000, 9500));
                            _events.ScheduleEvent(EVENT_BEACON_OF_HOPE, urand(70000, 75000)); // 65 + Blazing Song delay.
                            break;

                        case EVENT_BLAZING_SONG:
                            DoCast(me, SPELL_BLAZING_SONG);
                            break;

                        case EVENT_CRANE_RUSH:
                            Talk(SAY_CRANE_RUSH);
                            DoCast(me, SPELL_CRANE_RUSH); // Channeled.
                            break;

                        default: break;
                    }
                }

                DoMeleeAttackIfReady();
            }
        };

        CreatureAI* GetAI(Creature* creature) const
        {
            return new boss_chi_jiAI(creature);
        }
};

void AddSC_boss_chi_ji()
{
    new boss_chi_ji();
}
