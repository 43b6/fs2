#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("ħ��ѥ",({"daemon boots" ,"boots"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","��ħ������ѥ��.\n");
                set("unit", "��");
                set("value", 3000);
                set("armor_type", "boots");
                set("armor_prop/armor",15);
        }
        setup();
}
