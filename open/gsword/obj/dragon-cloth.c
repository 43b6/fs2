
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( HIW "������" NOR ,({"dragon cloth","cloth"}));
	set_weight(1000);
	// ������� do_drop? ���õ���.
        // set("no_drop",1);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",100000);
                set("material","cloth");
		set("armor_prop/armor",22);
               set("armor_prop/dodge", 10);
                set("armor_prop/move", 10);
        }
        setup();
}
