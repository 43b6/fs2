// ph_hat.c
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("��÷����",({"yu surcoat","surcoat"}));
	set_weight(1000);
	set("armor_type","cape");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","���ڵ����磬��÷Ӱ����\n");
		set("value",30000);
		set("material","leather");
		set("armor_prop/armor",10);
                set("armor_prop/dodge", 5);
                set("armor_prop/move", 5);
        }
        setup();
}
