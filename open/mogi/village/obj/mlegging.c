#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("��ħ��ϥ",({"daemon legging","legging"}) );
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 2000);
        set("material","steel");
        set("armor_type","leggings");
        set("armor_prop/armor", 20);
        }
        setup();
}
