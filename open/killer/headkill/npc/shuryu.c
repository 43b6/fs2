//shuryu.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N大叫：‘卢  山  龙  飞  翔’，$n感到一条青龙飞过$n的身边。",
                "dodge"      :   -35,
		"parry"      :   -35,
                "damage"     :    140,
                "force"      :    100,
                "damage_type":   "内伤",
           ]),
([     "action"     :   "$N的身后突然浮现了龙，$N大喝：‘卢  山  升  龙  霸’，$n只看到一条巨
龙从$N的身后带着一股大力向$n这袭卷而来！！",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    300,
                "force"      :    200,
                "damage_type":   "内伤",
           ]),
([    "action"     :   "$N将从山羊座黄金圣斗士阿修罗那学来的技巧默想了一次，集中全身的小宇
宙，使出了‘黄  金  圣  剑’！！！把$n的身影几乎要砍成两半了。",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    270,
                "force"      :    300,
                "damage_type":   "砍伤",
            ]),
   });

void create()
{
        set_name("紫龙", ({"shuryu"}));
        set("age",15);
        set("long","他是属于青铜级的圣斗士，在三大圣战中一直是护卫着雅典娜女神。\n"
        "而现在的实力是远超过黄金圣斗士，是雅典娜忠心的护卫。\n");
        set("title",HIG"青龙座圣斗士"NOR);
        set("gender","男性");
        set("class","圣斗士");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",2000);
        set("kee",3000);
        set("sen",2000);
        set("combat_exp",1450000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
	set("chat_chance_combat",30);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",390);
        set_temp("apply/damage",100);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIG "\n紫龙想了一会，大喝一声：看我的‘卢  山  亢  龙  霸’～～～\n",target);
                message_vision(
HIR "\n紫龙的身影突然在$N身后出现，双手架着$N，直向宇宙飞去！！\n"NOR,target);
                target->receive_wound("kee",random(300+350));
                COMBAT_D->report_status(target);
  }
