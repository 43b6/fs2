//book.c

#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIC"����ʫ�ļ�"NOR,({"poet book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
	"�Ȿ���Ƕ��³���ƽ��д��ʫ���ܼ���\n");
		set("value",800);
		set("material", "paper");
		set("skill", ([
			"name" : 		"literature",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
			"max_skill":	40,
											// from this object.
		]) );
	}
        setup();
}
