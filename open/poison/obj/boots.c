
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("ţƤСѥ",({"boots"}) );
	set_weight(2000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ˫���Ϻ�ţƤ�Ƴɣ���㸲��ëƤ��ѥ�ӣ�������ů�����ܱ����Ų�����
�˺���\n");
		set("unit","˫");
		set("value",170);
		set("armor_prop/armor",3);
		set("armor_prop/dodge",2);
		set("material","leather");
		set("armor_type","boots");
		setup();
	}
}
