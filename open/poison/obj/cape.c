#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("���ʴ�",({"red cape","cape"}) );
	set_weight(3000);
	if ( clonep())
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("material","silk");
		set("value", 320);
		set("armor_type", "cape");
		set("armor_prop/armor", 9);
		set("armor_prop/whip", 5);
		set("long","
����������֮���˿��֯�ɵĲʴ�������ʱ���ҫ�ۣ������ۻ����ҡ�\n");

	}
	setup();

}
