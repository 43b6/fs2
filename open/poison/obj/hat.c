
#include <ansi.h>

inherit EQUIP;

void create() 
{
	set_name("����",({"hat"}) );
	set_weight(1100);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ����ϸ��֦��ɹ�ɵ���Ҷ��ɵĶ��ң��ȿ���������ɵ��ꡣ\n");
		set("material","plant");
		set("value",15);
		set("unit","��");
		set("armor_type","head");
		set("armor_prop/armor",2);
		setup();
	}
}
