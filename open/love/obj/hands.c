// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit HANDS;
object user;
void create()
{
        set_name( HIW "ˮ������" NOR ,({"pebble hands","hands"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",1000);
                set("material","gem");
                set("armor_prop/armor",5);
        }
        setup();
}
