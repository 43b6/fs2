// By onion
#include <weapon.h>
inherit SWORD;

void create()
{
	set_name("������", ({ "black sword","sword" }) );
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "�������һ������, ��֪������ʲô�����Ƴɵġ�\n");
	  set("unit", "��");
	  set("value", 8000);
	  set("material", "blacksteel");
	}
	init_sword(50);
	setup();
}
