// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
        set_name("��������", ({ "jade amulet", "amulet" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "��״������ϵ����������Ƶ���צ����, ��̬����, �������������\n");
	  set("unit", "��");
	  set("value", 2300);
          set("material", "gem");
	  set("armor_type","neck");
	  set("armor_prop/armor", 5);
          set("armor_prop/stabber", 10);
          set("armor_prop/parry", 5);
	}
	setup();
}

