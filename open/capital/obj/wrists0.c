// by onion
#include <armor.h>
inherit EQUIP;
void create()
{
	set_name("����", ({ "chainlet" }));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "��ϸ��һ��С����, ���Խ���˫�ֵ����ϡ�\n");
	  set("unit", "��");
	  set("value", 300);
	  set("material", "iron");
	  set("armor_type","wrists");
	  set("armor_prop/armor", 2);
	}
	setup();
}

