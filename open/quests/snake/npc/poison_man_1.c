inherit NPC;
#include <ansi.h>
inherit SSERVER;

void create()
{
	set_name("响尾蛇",({"poison-soldier","snake-soldier","soldier"}));
	set("age",20);
	set("title",HIC"毒将领"NOR);
	set("gender","男性");
        set("attitude","aggressive");
	set("long","
蛇寨的护卫，专门抵挡闯入蛇寨的人，心狠手辣，毫不留情。\n");
	set("max_gin",7000);
	set("max_kee",7000);
	set("max_sen",7000);
	set("max_force",9000);
	set("force",9000);
	set("force_factor",10);
	set("combat_exp",400000);
	set_skill("whip",100);
	set_skill("snake-whiper",100);
	set_skill("parry",100);
	set_skill("dodge",100);
	set_skill("move",100);
	set_skill("black-steps",100);
	set_skill("force",100);
	set_skill("snowforce",100);
	map_skill("whip","snake-whiper");
	map_skill("parry","snake-whiper");
	map_skill("dodge","black-steps");
	map_skill("move","black-steps");
	map_skill("force","snowforce");
	setup();
	carry_object(__DIR__"obj/s_whip")->wield();
	carry_object(__DIR__"obj/p_cloth")->wear();
	carry_object(__DIR__"obj/snake-1");
}

void heart_beat()
{
object ob,env,target;
int i,j,eff,max,kee;

	ob = this_object();
	env = environment(ob);
	target = offensive_target(ob);

	if( !target )
		return ::heart_beat(1);

	max = (int)ob->query("max_kee");
	eff = (int)ob->query("eff_kee");
	kee = (int)ob->query("kee");

	if( random(100) < 40 )
	{
		if( eff < max || kee < eff )
		{
			message_vision(HIY"$N服下一贴毒药，以毒攻毒，将体内的瘀伤逼出～\n"NOR,ob);
			ob->receive_curing("kee",500);
			ob->receive_heal("kee",500);
			COMBAT_D->report_status(ob,1);
		}
	}

	if( env == environment(target) )
	{
		i = (int)ob->query_skill("dodge");
		j = (int)target->query_skill("dodge");
		
		if( random(i) > random(j) && random(100) < 75 )
		{
			message_vision(HIG"$N左手一抛，一包灰色的纸包飞向$n，$n脸色突然一绿，似乎中毒了～\n"NOR,ob,target);
			target->apply_condition("spring",3);
			target->apply_condition("snake_poison",3);
		}
	}
set_heart_beat(1);
::heart_beat();
}