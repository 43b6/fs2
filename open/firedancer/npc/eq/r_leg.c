inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸϥ��"NOR,({"rose finch's leggings","leggings"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ�׻�ϥ���ڻ����ϴ�����ȸ�ĵ�̡�\n");
		set("unit","��");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"�������ϵ���ȸ���񷺺��ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸ���񻺻������ˡ�\n"NOR);
		set("armor_prop/force",3);
		set("armor_prop/armor",-12);
	        set("armor_type","leggings");
	}
	setup();
}