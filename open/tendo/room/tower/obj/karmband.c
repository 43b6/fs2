#include <ansi.h>
inherit EQUIP;

void create()
{
 set_name(HIR"������˿�ۻ�"NOR,({"dragon armband","armband"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",4000);
        set("material","crimsonsteel");
        set("armor_type","armbands");
        set("armor_prop/armor",7);
        set("armor_prop/force", 2);
        set("armor_prop/dodge", 2);
        }
        setup();
}


