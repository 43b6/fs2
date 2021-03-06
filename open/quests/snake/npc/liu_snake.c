inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
	set_name("流蛇",({"hau snake","snake"}));
	set("age",30);
	set("title",HIC"蛇寨二寨主"NOR);
	set("gender","男性");
        set("attitude","aggressive");
	set("long","
蛇寨二寨主，本名万无流，因修练邪灵。蛇鞭，走火入魔，误入
邪道，全身不幸长满蛇鳞，却也因此功力大进，成为蛇寨二寨主
，奸淫掳掠，无恶不作。\n");
	set("max_gin",10000);
	set("max_kee",12000);
	set("max_sen",9000);
	set("max_force",15000);
	set("force",15000);
	set("force_factor",15);
	set("combat_exp",450000);
	set_skill("whip",120);
	set_skill("snake-whiper",120);
	set_skill("parry",120);
	set_skill("dodge",120);
	set_skill("move",120);
	set_skill("black-steps",120);
	set_skill("force",120);
	set_skill("snowforce",120);
	map_skill("whip","snake-whiper");
	map_skill("parry","snake-whiper");
	map_skill("dodge","black-steps");
	map_skill("move","black-steps");
	map_skill("force","snowforce");
	setup();
	carry_object(__DIR__"obj/p_whip")->wield();
	carry_object(__DIR__"obj/p_cloth")->wear();
	carry_object(__DIR__"obj/helmet")->wear();
	carry_object(__DIR__"obj/snake_gem")->wear();
}

void heart_beat()
{
object ob,env,target;
int i,j,k,kee,eff,max;

	ob = this_object();
	env = environment(ob);
	target = offensive_target(ob);

	if( !target )
		return ::heart_beat(1);

	max = (int)ob->query("max_kee");
	eff = (int)ob->query("eff_kee");
	kee = (int)ob->query("kee");

	if( ob->query_busy() && random(100) < 30 )
	{
		message_vision(HIW+"$N大喝一声～破～!!$N的奇经六脉回覆了正常!!\n"NOR,ob);
		ob->delete_busy();
	}

	if( random(100) < 50 )
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
		
		if( random(i) > random(j) )
		{
			message_vision(HIY"
$N领略到"+NOR+YEL+"〔"+MAG+"邪灵"+WHT+"。"+CYN+"蛇鞭"+YEL+"〕"+HIY+"之奥义

			"+HIW+"～　"+HIC+"万　鞭　归　一　"+HIW+"～"+HIY+"

鞭法幻化成无数多条，以左右夹击之势，攻向$n。\n"NOR,ob,target);
			if( random(100) < 50 )
			{
				message_vision(HIY"$N闪避不及，只好正面抵挡$n的攻势～\n"NOR,target,ob);
				target->receive_wound("kee",800);
                COMBAT_D->report_status(target,1);
			}
			else
				message_vision(HIY"所幸鞭法并不成熟，$N轻易的躲过了。\n"NOR,target);
		}
	}
set_heart_beat(1);
::heart_beat();
}

