// By onion
#include <weapon.h>
inherit SWORD;

void create()
{
	set_name("������", ({ "white sword","sword" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "�ɴ����뾫�������������, ����ʱ���������Ĺ�ʡ�\n");
	  set("unit", "��");
	  set("value", 8000);
	  set("material", "silver");
	}
	init_sword(42);
	setup();
}
