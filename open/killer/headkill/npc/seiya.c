//seiya.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N大叫：‘天马流星拳’，刹那间拳影已拢罩$n的全身",
                "dodge"      :   -35,
                "parry"      :   -35,
		"damage"     :190,
                "force"      :    200,
                "damage_type":   "内伤",
           ]),
([    "action"     :   "$N集中全身的小宇宙，对$n使出了‘天马彗星拳’",
                "dodge"      :    40,
                "parry"      :   -50,
		"damage"     :240,
                "force"      :    180,
                "damage_type":   "内伤",
            ]),
   });

void create()
{
        set_name("星矢", ({"seiya"}));
        set("age",15);
        set("long","属于青铜级的圣斗士，在三大圣战中一直是护卫着雅典娜女神\n"
        "而现在的实力是远超过黄金圣斗士，是雅典娜忠心的护卫。\n"
        "梦幻的佩加索斯，传说的天马，展开他那雪白的羽翼迎向一切挑战。\n");
	set("title",HIW"天马座"NOR+ HIG"圣斗士"NOR);
        set("gender","男性");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",3000);
        set("sen",1000);
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
        set("chat_chance_combat",50);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set("inquiry",([
	    "雅典娜" : "她是圣域的守护者。\n",
	    "教皇" : "这可恶的教皇，其实是双子座黄金圣斗士。\n",
	    "双子座" : "十三年前的错误，倒制现在的情况。\n",
	    "情况" : "现在女神的性命有危险了，$N是来帮助我们的吗？\n",
            ]) );
	set_temp("apply/armor",400);
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
	HIY "\n星矢大喝一声：看我的「天  马  彗  星  拳”～～～\n"NOR,target);
                message_vision(
HIW"\n星矢的拳影突然一变，由流星融合成彗星了！！$N感到一股大力从彗星中传来，等$N回过神来时，星矢的身影已经在$N的身后了。\n"NOR,target);
                target->receive_wound("kee",random(200+250));
                COMBAT_D->report_status(target);

  }
