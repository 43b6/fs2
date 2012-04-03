inherit NPC;
#include <ansi.h>
inherit SSERVER;

void create()
{
	set_name("���߳���",({"snake elder","elder","snake-guard"}));
	set("age",20);
	set("title",HIW"�󻤷�"NOR);
	set("gender","����");
        set("attitude","aggressive");
	set("long","
��կ�Ļ�����ר�ŵֵ�������կ���ˣ��ĺ��������������顣\n");
	set("max_gin",7000);
	set("max_kee",7000);
	set("max_sen",7000);
	set("max_force",9000);
	set("force",9000);
	set("force_factor",15);
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
}

void heart_beat()
{
object ob,env,target;
int i,j,kee,eff,max;

	ob = this_object();
	env = environment(ob);
	target = offensive_target(ob);

	if( !target )
		return ::heart_beat(1);

	max = (int)ob->query("max_kee");
	eff = (int)ob->query("eff_kee");
	kee = (int)ob->query("kee");

	if( env == environment(target) )
	{
		i = (int)ob->query_skill("dodge");
		j = (int)target->query_skill("dodge");
		
		if( random(i) > random(j) && random(100) < 50 )
		{
			message_vision(HIR"$N��ʳ�߶������Դ󷢣�����һ������$n��ֻ�����ܾ��ˡ�\n"NOR,ob,target);
			target->receive_wound("kee",500);
			ob->receive_wound("kee",500);
			COMBAT_D->report_status(target,1);
			COMBAT_D->report_status(ob,1);
			message_vision(HIC"$N����л������Ƥ��...��Ҳ�����Ĵ����š�\n"NOR,ob);
			ob->start_busy(1);
		}
	}
	if( random(100) < 50 )
	{
		if( eff < max || kee < eff )
		{
			message_vision(HIY"$N����һ����ҩ���Զ������������ڵ����˱Ƴ���\n"NOR,ob);
			ob->receive_curing("kee",500);
			ob->receive_heal("kee",500);
			COMBAT_D->report_status(ob,1);
		}
	}
set_heart_beat(1);
::heart_beat();
}

void die()
{
object me,ob;

	ob = this_object();
	me = ob->query_temp("last_damage_from");

	message_vision(HIG"$N�󺰣�����Ҫ��ҲҪ��һ�����ᡫ

$N�عⷵ�յı�ס��$n��

һ˲�䣬$N�˹��ۼ����ж����ڿ��ڣ����$N���ھ綾���ԣ��Ա��ˡ�\n"NOR,ob,me);
	me->apply_condition("snake_poison",10);
	me->receive_damage("kee",800);
	COMBAT_D->report_status(me,1);
::die();
}

