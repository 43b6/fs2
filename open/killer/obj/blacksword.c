//black sword by urd for avatar
#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�ڽ�", ({"black sword","black","sword"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","��");
	set("long","����ʥ�ߴ��������������շ��Ķ�ħ����ɵĽ�������һ����\nӢ��������
�Ľ���\n");
	set("material","crimsonsteel");
	set("value",5000000);
}
	init_sword(99);
	set("wield_msg","$N�����ȡ��$n����\n");
	set("unwield_mag","$N��$n�ŵ����Ľ���С�\n");
	setup();
}

init wield()
{
	if ((string)this_player()->query("class") != "avatar")
		return notify_fail("$N����ʥ���ŵĳ�Ա����\n");
	else {
		::wield();
	}
	return 1;
}

