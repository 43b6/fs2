#include <weapon.h>
#include <ansi.h>

inherit STABBER;

void create()
{
        set_name("����",({"daemon pen","pen"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("value",1500);
                set("material", "steel");
                set("wield_msg", "$N�ӻ����ó�һֻ$n�������С�\n");
                set("unwield_msg", "$N�����е�$n�ս����\n");
        }
        init_stabber(30);
        setup();
} 
                        
