#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("�͵�",({"lamp"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һյ�͵ƣ���Ϊ������ÿ��ںڰ��д���������\n");
		set("unit","յ");
		set("burned","һյ�����Ѻľ���");
		set("light_up", 40);
		set("value",50);
		setup();
    	}
}
