
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIG"������"NOR,({"steel cloth","cloth"}) );
        set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
else	{
        set("meterial","gold");
	set("unit","��");
        set("value", 10000);
	set("armor_type","cloth");
	set("armor_prop/armor", 50);
		set("armor_prop/parry",10);
	set("armor_prop/dodge",-7);
	set("long","
�������ǧ����������ı��ģ���������ߵ�ȴ�쳣���ء�
");
	}
	setup();
}
