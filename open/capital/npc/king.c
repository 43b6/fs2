#include <ansi.h>

inherit NPC;
int accept_kill(object who);
void create()
{
        set_name(HIM "天子" NOR, ({ "king" }) );
        set("title","当今皇上");
        set("gender", "男性" );
        set("age",50);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "一位高大英挺的男人，言行举止中有着令人无法抗拒的威严。\n"
            "但似乎有些事困扰着他，因而显的有点郁郁寡欢。\n");
        set("combat_exp",10000000);
        set("attitude", "heroism");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
            (: exert_function, "recover" :)
            }) );
        set_skill("dodge",150);
        set_skill("unarmed",150);
        set_skill("kingfist",150);
        set_skill("parry",150);
        set_skill("force",150);
        set_skill("fireforce",150);
        set_skill("bss-parry",150);
        set_skill("bss-steps",150);
        map_skill("force","fireforce");
        map_skill("unarmed","kingfist");
        map_skill("dodge","bss-steps");
        map_skill("parry","bss-parry");
        set("force",50000);
        set("max_force",10000);
        set("force_factor",80);
        set("max_gin",30000);
        set("gin",30000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_sen",30000);
        set("sen",30000);
        set("chat_chance", 15);
        set("chat_msg", ({
              "天子说: 朕最近心情很差。\n",
              "天子说: 后宫佳丽三千，各各争宠，叫朕怎忙得过来。\n",
              "天子说: 真该去练练帝王神功了。\n",
              (: this_object(),"random_move" :),
        }) );
        setup();
        add_money("gold",25);

}

void init()
{
        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
}

int do_fight(string arg)
{
        object who;
        who = this_player();

        if( !arg || (arg!="guard" && arg!="king") )
                return notify_fail("你想攻击谁？\n");
        else {
                kill_ob(who);
                accept_kill(who);
        }

        return 1;
}

int accept_kill(object who)
{
        int i;
        object ob, guard;
        ob = this_object();

        if( !present("king guard", environment(ob)) ) {
        tell_room(environment(ob),HIW"\n突然！冲出五位御前护卫！\n\n"NOR);
     for(i=0;i<5;i++)
     {
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king");
        guard->command("follow king");
        guard->kill_ob(who);
        }
        }
     tell_object(users(),HIR "御前护卫大叫：有刺客！快保护殿下！！\n" NOR);
        return 1;
}

void die() // by ACKY

{
	object winner = query_temp("last_damage_from");

winner->set("secret_book",1);
	if( winner->query("clan/id") && userp(winner) )
		CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 15 );
	:: die();
}
