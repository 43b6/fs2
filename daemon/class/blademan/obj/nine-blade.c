//nine-blade.c
#include <weapon.h>
#include <ansi.h>


   inherit BLADE;
void create()
{
	seteuid(getuid());
set_name(HIB "�Ż�����" NOR,({"nine blade","blade"}));
	set_weight(13000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
   set("long","һ�ѳ��صľ޵� ,�����оŸ����� .\n");
		set("value",10000);
		set("material", "steel");
	set("wield_msg", "$N�ӱ�����$n,��ʱȫ�����������\n");
	set("unwield_msg", "$N������$n�ջء�\n");
	}
	init_blade(80);

/*
	set("ski_type1", "blade");
	set("ski_level1", 75);
*/

	setup();
}
