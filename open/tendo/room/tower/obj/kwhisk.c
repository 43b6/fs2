#include <weapon.h>
#include <ansi.h>
inherit WHIP;

void create()
{
        set_name(MAG"������˿����"NOR,({"dragon whisk","whisk"}) );
        set_weight(1500);
        set("value",5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material","leather");
        set("wield_msg","$N�ӱ���γ�$n�������С�\n");
                set("unwield_msg","$N�����е�$n�һر���\n");
        }
        init_whip(60);
        setup();
}


