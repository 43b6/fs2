//���� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIY"���"HIM"����"NOR, ({ "king belt" ,"belt" }) );
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","��۴͸����ӵ�������\n");
                set("unit", "��");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",7);
                set("armor_prop/dodge",3);
                set("armor_prop/move",3);
                setup();

        }
}

