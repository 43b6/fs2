inherit NPC;
#include <ansi.h>

void create()
{
	set_name("��կ����",({"snake-soldier","snake","soldier"}));
	set("age",20);
	set("gender","����");
        set("attitude","aggressive");
	set("long","
��կ�Ļ�����ר�ŵֵ�������կ���ˣ��ĺ��������������顣\n");
	set("max_gin",5000);
	set("max_kee",5000);
	set("max_sen",5000);
	set("max_force",7000);
	set("force",7000);
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
	carry_object(__DIR__"obj/whip")->wield();
	carry_object(__DIR__"obj/cloth")->wear();
}

void die()
{
object me,ob,obj;

	ob = this_object();
	me = ob->query_temp("last_damage_from");

	if( random(100) < 30 )
	{
		obj = new(__DIR__"obj/snake-key-1");
		message_vision(HIY"$N�ֵ���ס$n�Ĺ���������ææ������������...
�����ߵ�ʱ�򣬲�С�������˶�����\n"NOR,ob,me);
		obj->move(environment(me));
		destruct(ob);
	}
::die();
}