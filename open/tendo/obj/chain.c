// chain.c
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name(HIG "����������" NOR,({"dragon chain","chain"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
                set("value",30000);
		set("material","blacksteel");
		set("rigidity",60);
		set("long",
	"\nһ�����ε��������ഫ����������ص����֮�\n");
	set("wield_msg", "$n��Ӧ��$N���ǻۣ�һ��������$N���дܳ���\n");
	set("unwield_msg","$n�ϵ���⽥������������\n");
	}
	init_whip(90);
	setup();
}




