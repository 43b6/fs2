//made by smirk
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("ɨ��",({"broom","broom"}) );
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("long","����һ֧����ɨ�ص�ɨ�㣬��̿ɿ���\n");
                set("value",100);
                set("material", "wood");
                set("wield_msg", "$N�����ذ�$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���ַ������\n");
        }
        init_blade(4);
        setup();
}
