
#include <ansi.h>

inherit EQUIP;

void create()
{
     set_name(HIW"ʥ��ս��"NOR,({"Holy Ghost Plate","plate"}) );
     set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
else	{
     set("meterial","steel");
	set("unit","��");
	set("value", 1000);
	set("armor_type","cloth");
	set("armor_prop/armor", 45);
      set("armor_prop/dodge", 8);
      set("armor_prop/parry", 8);
      set("armor_prop/move", 8);
      set("armor_prop/attack", 3);
	set("armor_prop/force", 3);
	set("long","
����ս�����ɲ�˹�������ƣ��ܹ���˹������Ѫ�Ĺ�ȣ����¶�ɢ����
һ�ɰ�������˵����֮�˿��Ժ�ɨս�����������ҡ�\n");
	}
	setup();
}
