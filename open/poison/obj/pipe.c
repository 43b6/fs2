
#include <ansi.h>
#include <weapon.h>
inherit STICK;

void create()
{
	set_name("�̹�",({"pipe"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","
����ʱ���õ��̹ܣ������ǿ����������ʹ�á�\n");
	set("material","iron");
	set("value", 10);
	set("unit","��");
	}
	init_stick(1);
	setup();
}

