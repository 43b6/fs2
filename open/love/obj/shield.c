// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object user;
void create()
{
        set_name( HIW "ˮ����" NOR ,({"pebble shield","shield"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",1000);
                set("material","gem");
                set("armor_prop/armor",10);
                set("armor_prop/parry",3);
        }
        setup();
}
