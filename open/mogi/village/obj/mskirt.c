#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name( "ħ��ȹ" , ({ "daemon skirt" ,"skirt" }) );
        set_weight(200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 4000);
                set("material", "cloth");
                set("armor_type", "pants");
                set("armor_prop/armor", 5);
        }
        setup();
}
                        
