
#include <ansi.h>

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("������",({"wu-long tea","tea"}) );
	set_weight(500);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�������衣\n");
		set("unit","��");
		set("value", 20);
		set("����", 10);
		}
		set("Һ��",([
			"����" : "��",
		        "����" : "������",
			"ʣ" : 10,
			"ֹ��" : 30,
			"drunk_apply" : -5,
]) );
		setup();
}
