//baby.c by chun

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("Ӥ��",({"baby"}));
	set("long","һ�����������С���������������Ŀ����ƺ�����\n�������������ϲ�á�\n");
	set("str",1);
	set("con",1);
	set("cor",1);
	set("int",1);
	set("max_kee",5);
	set("max_gin",5);
	set("max_sen",5);
	set("age",1);
	set("combat_exp",32);
	setup();
}

