// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("����������", ({ "morning jade", "jade" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "����������һ��������, ��ͷ�����Ŷ���Ʋ�, �����г���ɲ�ֵ����ӡ�\n");
	  set("unit", "��");
          set("value", 1000);
          set("material", "gem");
	  set("armor_type","neck");
	  set("armor_prop/armor", 5);
	}
	setup();
}

