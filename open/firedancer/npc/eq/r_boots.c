inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ��ѥ"NOR,({"rose finch's boots","boots"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ˫��ѥ����ѥ�����Ը�����ȸ��ͼ����\n");
		set("unit","˫");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"����ѥ���Ե���ȸͼ�������ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸͼ�����������ˡ�\n"NOR);
		set("armor_prop/force",3);
		set("armor_prop/armor",-12);
	        set("armor_type","boots");
	}
	setup();
}