#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("��Ƥ����", ({"snake armband","armband"}) );
	set_weight(1000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long", "
����һ������Ƥ���ƳɵĻ��ۣ���Ե����ͭƬ��֯���ܵؽ�ϡ�\n");
		set("unit", "��");
		set("value", 1000);
		set("material", "leather");
		set("armor_prop/armor",7);
		set("armor_type","armbands");
		set("armor_prop/dodge", 5);

		}
		setup();
}
