// attack.c

#include <ansi.h>
#include <dbase.h>
#include <origin.h>
#include <skill.h>

#define MAX_OPPONENT    4

static object *enemy = ({});
static string *killer = ({});

// prototypes

object *query_enemy() { return enemy; }
string *query_killer() { return killer; }

// This function returns 1 if we are fighting anyone (or with ob)
varargs int is_fighting(object ob)
{
        if( !ob ) return sizeof(enemy) > 0;

        return member_array(ob, enemy)!=-1;
}

// This function returns 1 if we are fighting anyone (or with ob)
varargs int is_killing(string id)
{
        if( !id ) return sizeof(killer) > 0;

        return member_array(id, killer)!=-1;
}

//This function starts fight between this_object() and ob
void fight_ob(object ob)
{
        if(!ob || ob==this_object()) return;

        set_heart_beat(1);

        if( member_array(ob, enemy)==-1 ) 
                enemy += ({ ob });
}

// This function starts killing between this_object() and ob
void kill_ob(object ob)
{
        if (!ob) return;
        if( killer && (member_array(ob->query("id"), killer)==-1) )
                killer += ({ ob->query("id") });

        tell_object(ob, HIR "������" + this_object()->name() + "��ɱ���㣡\n" NOR);

        fight_ob(ob);
}

void clean_up_enemy()
{
        if( sizeof(enemy) > 0 ) {
                for(int i=0; i<sizeof(enemy); i++) {
                        if( !objectp(enemy[i])
                        ||      environment(enemy[i])!=environment()
                        ||      (!living(enemy[i]) && !is_killing(enemy[i]->query("id"))) )
                                enemy[i] = 0;
                }
                enemy -= ({ 0 });
        }
}

void clean_temp()
{
object me=this_object();
object ob=this_player();
ob->delete_temp("delay_fight");
me->delete_temp("delay_fight");
}
// This function checks if the current opponent is available or
// select a new one.
object select_opponent()
{
        int which;

 if( !sizeof(enemy) ) {
return 0;
}

        which = random(MAX_OPPONENT);

        return which < sizeof(enemy) ? enemy[which] : enemy[0];
}

// Stop fighting ob.
int remove_enemy(object ob)
{
        if( is_killing(ob->query("id")) ) return 0;

        enemy -= ({ ob });
        return 1;
}

// Stop killing ob.
int remove_killer(object ob)
{
        if( is_killing(ob->query("id")) ) {
                killer -= ({ ob->query("id") });
                remove_enemy(ob);
                return 1;
        }

        return remove_enemy(ob);
}

// Stop all fighting, but killer remains.
void remove_all_enemy()
{
        for(int i=0; i<sizeof(enemy); i++) {
                // We ask our enemy to stop fight, but not nessessary to confirm
                // if the fight is succeffully stopped, bcz the fight will start
                // again if our enemy keeping call COMBAT_D->fight() on us.
                if( objectp(enemy[i]) ) enemy[i]->remove_enemy(this_object());
                enemy[i] = 0;;
        }

        enemy = ({});
}

// Stop all fighting and killing.
void remove_all_killer()
{
        killer = ({});
        enemy -= ({ 0 });

        for(int i=0; i<sizeof(enemy); i++)
                if( enemy[i]->remove_killer(this_object()) )
                        enemy[i] = 0;;

        enemy -= ({ 0 });
}

// reset_action()
//
// This function serves as a interface of F_ATTACK and wielded, worn objects.
// When the living's fighting action need update, call this function.
//
void reset_action()
{
        object ob;
        string type, skill;

        if( ob = query_temp("weapon") )
                type = ob->query("skill_type");
        else 
                type = "unarmed";

        if( stringp(skill = query_skill_mapped(type)) ) {
                // If using a mapped skill, call the skill daemon.
                set("actions", (: call_other, SKILL_D(skill), "query_action" :) );
        } else {
                // Else, let weapon handle it.
// Modify By AceLan....û�� map_skill �Ļ�...ʹ�û��� skill ���趨
/*
                if( ob ) set("actions", ob->query("actions",1) );
                else set("actions", query("default_actions",1) );
*/
                if( ob) 
                   set("actions", (: call_other, SKILL_D(type), "query_action" :));
                else
                   set("actions", query("default_actions",1));
        }
}

// This is called in heart_beat() to perform attack action.
/* private */ int attack()
{
        object opponent;

        if (userp(this_object()) && this_object()->query_temp("netdead")) {
          remove_all_killer();
          return 1;
        }

        clean_up_enemy();

        opponent = select_opponent();
        if( objectp(opponent) ) {
                set_temp("last_opponent", opponent);
                COMBAT_D->fight(this_object(), opponent);
                return 1;
     } else {
                return 0;
}
}

//
// init() - called by MudOS when another object is moved to us.
// ��������� init(), �� mob ��������ʱ�����д˺���
// �ڴ�ֻ�ж������������ļ��, �Ժ���Զ���������ӹ�ϵ
//
void init()
{
        object ob;
        string vendetta_mark, attitude;
        int kill = query("bellicosity");
        // We check these conditions here prior to handle auto fights. Although
        // most of these conditions are checked again in COMBAT_D's auto_fight()
        // function, these check reduces lots of possible failure in the call_out
        // launched by auto_fight() and saves some overhead.
        if(     is_fighting()
        ||      !living(this_object())
        ||      !(ob = this_player()) 
        ||      environment(ob)!=environment()
        ||      !living(ob)
        ||      ob->query("linkdead") )
                return;

        if( query("auto_size") )
            CHAR_D->auto_size(this_object(), ob);

        attitude = query("attitude");
        // �Զ����������������
        // ս���Ķ���������, �Զ���
        if( userp(ob) && is_killing(ob->query("id")) ) {
                COMBAT_D->auto_fight(this_object(), ob, "hatred");
                return;
        // ����Ͳ����� ???
        } else if( stringp(vendetta_mark = query("vendetta_mark"))
        && ob->query("vendetta/" + vendetta_mark) ) {
                COMBAT_D->auto_fight(this_object(), ob, "vendetta");
                return;
        // ���������͵� mob
        } else if( userp(ob) && attitude=="aggressive" ) {
                COMBAT_D->auto_fight(this_object(), ob, "aggressive");
                return;
        // ɱ��̫���ε� mob
        }else if( kill > 400)
        {
        // �� player ֻҪ�����߾��ܿ���
              if(userp(ob) && random((int)kill)>(int)query("max_force")) 
              { 
                COMBAT_D->auto_fight(this_object(), ob, "berserk");
                return;
        // �� npc ������,����ɱ���ߵ��˻���Լ���master,�ٴ�player 
              }else 
              if(!userp(ob) && random((int)kill/20)>(int)query("cps"))
              { 
                COMBAT_D->auto_fight(this_object(), ob, "berserk");
                return;
              }
        }else if (attitude == "badman" && !present("badman license", ob)) {
                COMBAT_D->auto_fight(this_object(), ob, "aggressive");
                return;
        }
}

int can_flee(int exit_number)
{
 object me=this_object();
 int i, j,k=0,dp1, dp2;
 k=sizeof(enemy);
 if(exit_number < 3)
  exit_number=2;
 if(exit_number > 4)
  exit_number=4;
 exit_number=exit_number*2;
 if((exit_number < k+1)&&random(query("kar")*10) < 280)
  return 0;
 else
  {
   dp1 = (int)COMBAT_D->skill_power(this_object(), "dodge", 2)
        +(int)COMBAT_D->skill_power(this_object(), "move", 2);
  
   for (i=dp2=0; i<sizeof(enemy); i++)
     dp2 += (int)COMBAT_D->skill_power(enemy[i], "dodge", 2);
   return random((int)dp1*query("kar")/2) > random((int)dp2*2);
  }
}
