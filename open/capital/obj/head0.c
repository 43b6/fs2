// by onion
#include <armor.h>
inherit EQUIP;
void create()
{
	set_name("�ڽ�", ({ "hood" }));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "������ͷ��, �������ı�׼װ��\n");
	  set("unit", "��");
          set("value", 30);
	  set("material", "cloth");
	  set("armor_type","head");
	  set("armor_prop/armor", 2);
	}
	setup();
}

