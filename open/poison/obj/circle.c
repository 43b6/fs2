
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("��Ȧ",({"golden circle","circle"}));
	set_weight(5000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�Զ��Դ��������ɵĽ�Ȧ������С���������ֿ���������ԣ�����·������
��ϣ�ʮ�ֶ�����\n");
		set("unit","��");
		set("value",1000);
		set("armor_prop/armor",9);
		set("armor_prop/parry",6);
		set("material","gold");
		set("armor_type","boots");
		setup();
	}
}
