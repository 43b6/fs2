//sky-blade.c
//Я��mob exp:175��
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name("��а��",({"sky-blade","blade"}));
	set_weight(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�ѿ�������Ϊа��ĵ� .\n");
		set("value",50000);
		set("material", "steel");
                set("wield_msg", "����$n,$N����ֻ��ɱ��ɱ��ɱ��\n");
		set("unwield_msg", "$N����$n,��ɫ���Ͷ��ˡ�\n");
	}
	init_blade(60);

	setup();
}
