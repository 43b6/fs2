#include <ansi.h>

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("������",({"tie-guanin tea","tea"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ���Ѿ��������衣\n");
		set("unit","��");
		set("value",15);
		set("����", 10);
	}
	set("Һ��", ([
		"����" : "ˮ",
		"����" : "��ˮ",
		"ʣ" :  10,
		"drunk_apply" : -3,
]) );
		setup();
}
