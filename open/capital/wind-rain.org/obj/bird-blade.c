
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name(HIC"ҹǧ��"NOR,({"bird-blade","blade"}));
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",@LONG
  �鵶ҹǧ�񣬺��齣�������������������ơ�������������
  ������⣬����Ϯ�ˣ������ޱȡ�
                           LONG);
		set("value",5000000);
		set("material", "steel");
	}
	init_blade(80);

	setup();
}
