#include <weapon.h>
#include <ansi.h>

inherit DAGGER;

void create()
{
        set_name("ħذ",({"daemon dagger","dagger"}));
        set_weight(1000);       
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 500);
                set("material", "steel");
                set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���뻳�С�\n");
        }
        init_dagger(30);
        setup();
} 
