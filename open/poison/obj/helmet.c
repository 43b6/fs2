
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("ҫ��������",({"helmet"}) );
	set_weight(5000);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�����Ϻþ��ִ�����ɵ�ͷ�������չ����ҫ��ɢ����ҫ�۵Ĺ�â��\n");
		set("armor_type","head");
		set("material","blacksteel");
		set("unit","��");
		set("armor_prop/armor",5);
		set("value",350);
		set("armor_prop/dodge",-1);
		setup();
	}
}
