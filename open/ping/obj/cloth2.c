// make by Onion
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name("����ձш", ({ "green cloth", "cloth" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "���̳��ð׵�ɫ��, ����һ�����Ĳ�˿��\n");
		set("unit", "��");
		set("value", 1000);
		set("material", "cloth");
		set("armor_prop/armor", 4);
                set("gender_only", "Ů��");
	}
	setup();
}

