inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ���"NOR,({"rose finch's crest","crest"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ����ڣ�ͷ������һ����ȸģ���\n");
		set("unit","˫");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"��ͷ���ϵ���ȸģ��ת���ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸģ�ͻ��������ˡ�\n"NOR);
		set("armor_prop/force",5);
		set("armor_prop/armor",-20);
	        set("armor_type","head");
	}
	setup();
}