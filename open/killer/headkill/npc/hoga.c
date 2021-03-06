//made by carol
#include <ansi.h>
inherit NPC;
inherit SSERVER;
void do_special();
void freeze(object me, object victim);

mapping *action = ({
([     "action"     :   "$N大叫：‘钻  石  星  尘’，只见空气中凝结出无数的冰晶, 宛如风暴一般
地向$n袭来。",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    150,
                "force"      :    120,
                "damage_type":   "冻伤",
           ]),
([    "action"     :   "$N燃烧全身的小宇宙，对$n使出了‘钻  石  巨  拳’，只见到一阵阵的暴风
雪向着$n吹来。",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    180,
                "force"      :    180,
                "damage_type":   "冻伤",
	    "post_action": (:freeze:),
            ]),
   });

void create()
{
	set_name("冰河",({"ice river","ice"}));
        set("age",15);
        set("long","他是属于青铜级的圣斗士，在三大圣战中一直是护卫着雅典娜女神，\n"
        "而现在的实力是远超过黄金圣斗士，是雅典娜忠心的护卫。\n");
        set("title",HIW"白鸟座"NOR+ HIG"圣斗士"NOR);
	set("class","圣斗士");
        set("gender","男性");
        set("str",30);
        set("cps",29);
        set("kar",30);
        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",2000);
        set("sen",1000);
        set("combat_exp",1400000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",50);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",380);
        set_temp("apply/damage",80);
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
        HIY "\n冰河大喝一声：看我的‘曙  光  女  神  之  宽  恕’～～～\n",target);
                message_vision(
        HIW "\n冰河的身后出现了曙光女神，而曙光女神手中的水瓶发出光茫！！光茫过后，冰
河的身影已在$N的身后了。\n"NOR,target);
                target->receive_wound("kee",random(170+220));
                COMBAT_D->report_status(target);
}
void freeze (object me, object victim)
{
  object *enemy,target;
  int i;
   enemy=this_object()->query_enemy();
    i=random(sizeof(enemy));
    target=offensive_target(this_object());
    if(!target) return ;

   message_vision(HIC+"从冰河的拳影夹带着一股风雪，霎那间把$N冻结了!",target);
    target->start_busy(2);

  return;
}
