// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
  set_name(HIB"������" NOR,({"heaven sword","sword"}));
	set_weight(13000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
set("long","һ�Ѻ�����ı��� ,�ƺ���Ϊ���� .\n");
		set("value",10000);
		set("material", "steel");
	set("wield_msg", "$N�ӱ�����$n,��ʱȫ�����������\n");
	set("unwield_msg", "$N������$n�ջء�\n");
	}
	init_sword(80);
	setup();
}
