#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object user;
void create()
{
        set_name(HIW "����۶�" NOR ,({"juka shield","shield"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",1000);
                set("material","gem");
                set("armor_prop/armor",10);
                set("armor_prop/parry",5);
                set("armor_prop/force",5);
                set("armor_prop/stabber",10);
                set("armor_prop/dodge",2);
                set("no_sell",1);
        }
        setup();
}
