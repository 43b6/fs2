inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ����"NOR,({"rose finch's belt","belt"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ���������ڿۻ�������ȸ�����ͭ�ۡ�\n");
		set("unit","��");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"���ۻ��ϵ���ȸ�������ˡ�\n"NOR);
		set("unequip_msg",HIR"$N�⿪��$n"HIR"����ɫ����ȸ���񻺻������ˡ�\n"NOR);
		set("armor_prop/force",2);
		set("armor_prop/armor",-8);
	        set("armor_type","waist");
	}
	setup();
}