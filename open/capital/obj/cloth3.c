// make by Onion
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name("�����", ({ "purple cloth", "cloth" }) );
	set_weight(3500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "���ư�������Ⱦ��������, ���������ϴ����ε�ɷ�Ǻÿ���\n");
		set("unit", "��");
		set("value", 2000);
		set("material", "cloth");
		set("gender_only", "Ů��");
		set("armor_prop/armor", 6);
	}
	setup();
}

