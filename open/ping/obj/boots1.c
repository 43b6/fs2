// by onion
#include <armor.h>

inherit BOOTS;

void create()
{
	set_name("����ѥ", ({ "cloud boots", "boots" }) );
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "��������ʵ�ѥ��, ���Ը�����һ���Ʋʡ�\n");
	  set("unit", "˫");
	  set("value", 2000);
	  set("material", "linen");
          set("armor_prop/armor", 4);
	}
	setup();
}

