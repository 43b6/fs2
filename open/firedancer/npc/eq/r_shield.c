inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ���"NOR,({"rose finch's shield","shield"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һƬ���ܣ������봦������ȸ�ĸ���\n");
		set("unit","Ƭ");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"�����������ȸ����ת���ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸ���񻺻������ˡ�\n"NOR);
		set("armor_prop/parry",5);
		set("armor_prop/armor",-20);
	        set("armor_type","shield");
	}
	setup();
}