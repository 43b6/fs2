#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("��", ({ "blade" }));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
����һ�������õĲ񵶣�����Ϊ�Ͼɶ����ż�����ߣ���������о�����
���������Ƶġ�
\n");
                set("value", 90);
                set("material", "iron");
                set("wield_msg", "$N��׾�ش�������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n������䡣\n");
        }
        init_blade(3);
        setup();
}
