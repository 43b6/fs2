// cloth.c
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( HIW"̤��ѥ"NOR  ,({"cloud boot","boot"}));
	set("long","һ˫��������������ɫ��ѥ����\n");
	set_weight(2000);
        set("armor_type","boots");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "˫");
		set("value",50000);
                set("material","cloth");
		set("armor_prop/armor",4);
		set("armor_prop/magic",5);
        set("gender_only","����");
        }
        setup();
}
