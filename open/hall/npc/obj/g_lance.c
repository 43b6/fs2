#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("[1;34m����ǹ[0m", ({ "cloudy lance", "lance" }) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "ǹͷ����͸�����⣬�ǰѲ��ɶ�õ����������\n");
                set("value",10000);
                set("material", "blacksteel");
        }

        init_hammer(30);

        set("wield_msg", "$N��ɲ����һ����$n���������С�\n");
        set("unwield_msg", "$N�����е�$n�d�����\n");

        setup();
}
