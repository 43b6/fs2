//green-blade.c
//Я��mob exp180��;kee 5000;dragon-blade 120;��master��ǿ
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name(HIG"�̲���¶��"NOR,({"green-blade","blade"}));
	set_weight(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�ѷ��ŵ����̹⴫˵�еı�����\n");
		set("value",100000);
		set("material", "steel");
                set("wield_msg", HIG"����$n"HIG",$N���ֱ��Ϸ����̹�\n"NOR);
		set("unwield_msg", "$N����$n"HIG",�ֱ��ϵ��̹�Ҳ��ʧ�ˡ�\n");
	}
	init_blade(65);

	setup();
}
