// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("����ն",({"fon sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","�ɽ�����֮���ų˷���佣\n");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "����$n,$N���Ļ������������.\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_sword(60);
	setup();
}
