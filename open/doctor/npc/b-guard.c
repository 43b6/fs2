#include <ansi.h>
inherit NPC;

void create()
{
        set_name("护阁守卫",({"book guard","guard"}));
        set("long","他是守护藏经阁的守卫，从眼睛散发出一股不容侵犯的威严。");
        set("gender","男性");
        set("attitude","heroism");
        set("con",35);
        set("spi",35);
        set("cps",35);
        set("kar",35);
        set("age",27);
        set("combat_exp",500000);
        set("kee",12000);
        set("max_kee",3000);
        set("force",3000);
        set("max_force",3000);
        set("force_factor",15);
        set_skill("seven-steps",100);
        set_skill("shinnoforce",80);
        set_skill("yu-needle",100);
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set_skill("force", 80);
        map_skill("force", "shinnoforce");
        map_skill("stabber", "yu-needle");
        map_skill("parry", "yu-needle");
        map_skill("move", "seven-steps");
        map_skill("dodge", "seven-steps");
        set("functions/gold-needle/level",100);
        set("functions/break-kee/level",100);
        set("chat_chance_combat",70);
        set("chat_msg_combat",({
        (: perform_action,"yu-needle.gold-needle" :),
        (: perform_action,"yu-needle.break-kee" :),
        }));
        setup();
        carry_object("/open/doctor/obj/gneedle")->wield();
        carry_object("/open/doctor/obj/gneedle")->wield();
        add_money("gold",50);
}
int accept_fight(object me)
{
	command("shake "+me->query("id"));
	command("say 华神医希望此地没有任何的争斗与杀戮，恕难奉陪！");
	return 0;
}
