// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
       set_name("���̽�",({"son sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",10000);
		set("material", "steel");
                set("long","�ɽ����������ڵ��佣���ķ�������������صĸ��ԡ�\n");
                set("wield_msg", "����$n,$N���Ļ������������.\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_sword(60);
	setup();
}
