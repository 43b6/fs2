#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" : "$N手拿匕首,对准$n"+HIW+"脑门"NOR+"直插而下,正是暗杀第一招"+
               HIW+" 破首式"NOR,
                "dodge"      :    -25,
                "parry"      :    -25,
                "damage"     :    100,
                "damage_type":   "抓伤",
           ]),
([ "action" : "$N双爪交错而过,对准$n"+HIW+"胸口"NOR+"抓去,正是九阴白骨抓之第二招
"+
               HIW+" 开膛式"NOR,
                "dodge"      :      -5,
                "parry"      :     -15,
                "damage"     :     110,
                "damage_type":   "抓伤",
           ]),
([ "action" : "$N双爪穿过$n的防御圈,由下而上往$n之"+HIW+"喉咙"NOR+"抓去,正是九阴
白骨爪之"+
              "第三招"+HIW" 断喉式"NOR,
                "dodge"      :     30,
                "parry"      :     30,
                "damage"     :    100,
                "damage_type":   "抓伤",
            ]),
([ "action" : "$N一爪在前,一爪在后,迅急无比的往$n"+HIW+"心脏"NOR+"挖去,正是九阴
白骨爪之"+             "第四招"+HIW" 腕心式"NOR,
                "dodge"      :     5,
                "parry"      :     5,
                "damage"     :   130,
                "damage_type":   "抓伤",
            ]),
   });

void create()
{
        set_name(HIC+"军师"+NOR+"「智锦囊”司马刑",({"sin"}));
        set("long","他是一位绝情门的军师，智慧十分的高，是武林中的有名的书生。\n");
        set("gender","男性");
        set("combat_exp",600000);
        set("attitude","heroism");
        set("age",26);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("force",1400);
        set_skill("literate",80);
        set("max_force",1400);
        set("force_factor",10);
        set_skill("force",60);
        set_skill("stabber",70);
        set_skill("dodge",50);
        set_skill("knowpen",80);
        map_skill("stabber","knowpen");
        set_skill("parry",40);
        set_skill("poetforce",70);
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: perform_action, "stabber.movedown" :)
        }));
        setup();
        carry_object("/open/start/obj/ten_pen.c")->wield();
        carry_object("/open/love/obj/wrists.c")->wear();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void greeting(object ob)
{
    int exp,lv_1;
    string skill;
    object weapon;
    exp =ob->query("combat_exp",1);
      weapon = ob->query_temp("weapon");
      if( weapon ) skill = weapon->query("skill_type");
      else skill = "unarmed";
      lv_1 =(int) 1.8 * ob->query_skill(skill, 1);
    return;
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,kee;
 mapping exit;
 string *exit_name;

 mob = this_object();
 env = environment(mob);

 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.05;
    if( env == environment(target) )
    {
     message_vision(HIR+"$N看到军师苍惶的说道:$N你后面有鬼!!你惊讶的回头看，突然发现已经中计
，军师从$N背后狠狠的捅下去。\n"+NOR,target);
     target->receive_damage("kee",(int)kee,mob);
     COMBAT_D->report_status(target,0);
    }
	}
 }
 set_heart_beat(1);
  ::heart_beat();

}
