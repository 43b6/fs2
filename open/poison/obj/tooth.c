#include <ansi.h>
inherit ITEM;

void create()
{
	set_name("������",({"serpent tooth","tooth"}));
	set_weight(100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit","��");
		set("value",0);
		set("long","һ���ɾ������аγ��Ķ���.\n");
	}
		setup();
}
