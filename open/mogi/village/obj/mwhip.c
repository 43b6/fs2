#include <weapon.h>
#include <ansi.h>

inherit WHIP;

void create()
{
        set_name("ħ��",({ "daemon whip","whip"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("value",10000);
                set("material","iron");
                set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���뻳�С�\n");
        }
        init_whip(35);
        setup();
}                             
