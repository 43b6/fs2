//shun.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N连环出招,一招‘梅开随风飘’左攻右击,如狂风般的飘流,
$n似乎无法避开这柔刚并进的一击.",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    180,
                "force"      :    200,
                "damage_type":   "割伤",
           ]),
([     "action"     :   "$N倒举妖刀,以极美妙的姿势持刀向前,正是四季花舞刀法中
最柔美的招式‘兰香传四方’,$n已被这美丽的景像
给吸引而忘了攻击",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    200,
                "damage_type":   "砍伤",
           ]),
([    "action"     :   "$N刀起斜放,动作清雅脱俗正是‘竹出百花残’刀诀的主要宗旨
$n看到这刀招一出觉的相行见惭,竟然有自废武学而拜$N为师的念头.",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    180,
                "damage_type":   "砍伤",
            ]),
([    "action"     :    "$N持刀划半弧成半圆,欺敌之招‘菊语采人心’自然而生,$n
被$N看破心意强得先机,$n已陷入一阵刀网之中..",
                "dodge"      :  -35,
                "parry"      :  -35,
                "force"      :   200,
                "damage"     :   200,
                "damage_type":   "破体之伤",
            ]),                
   });

void create()
{
        set_name("河内美加", ({"girl"}));
        set("age",15);
        set("long","她是女影门传人的师妹,与旁边的田中惠子是銮生姊妹,两姊妹分别\
练了‘四季花舞刀法’的上半部与下半部,妹妹河内美加练的是下半部刀法\n");
        set("title",HIM"女影门究极奥义流第四代弟子"NOR);
        set("gender","女姓");
        set("class","killer");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",1000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",1000);
        set("sen",1000);
        set("combat_exp",500000);
        set("max_force",1000);
        set("force",1000);
        set("max_atman",1000);
        set("max_mana",1000);
        set("atman",1000);
        set("mana",1000);
        set("force_factor",10);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        map_skill("dodge","nine-steps");
        set_skill("unarmed",70);
        set("chat_chance_combat",15);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",100);
        set_temp("apply/damage",78);
        setup();
        carry_object("/open/japan/obj/super-cloth.c")->wear();
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
HIW "\n美加使出四季花舞刀法中最强的秘招,随着刀法的变换演化出‘四花齐飞放’的超强特攻\n",target);
                message_vision(
HIY "\n四季刀法不断变化,$N已被四周群花奔放之景给吸引,不知不觉已身受中伤
\n"NOR,target);
                target->receive_wound("kee",random(50+150));
                COMBAT_D->report_status(target);

  }
