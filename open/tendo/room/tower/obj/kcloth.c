#include <ansi.h>
inherit EQUIP;

void create()
{
 set_name( HIY "������˿��" NOR,({"dragon cloth","cloth"}));
        set_weight(1000);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",4000);
                set("material","leather");
 set("armor_prop/armor",8);
 set("armor_prop/dodge",2);
 set("armor_prop/move",2);
}
        setup();
}


