inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸָ��"NOR,({"rose finch's finger","finger"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ˫ָ�ף���ÿ��ָ�䴦������ȸ��ͼ����\n");
		set("unit","˫");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"��ָ���ϵ���ȸͼ��ת���ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸͼ�����������ˡ�\n"NOR);
		set("armor_prop/force",4);
		set("armor_prop/armor",-16);
	        set("armor_type","finger");
	}
	setup();
}