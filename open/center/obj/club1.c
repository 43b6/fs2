#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("ľ��",({"club","club"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","����һ��ľ�ƵĹ��ӣ�ƽ�������������ˣ�\n"
                           "����״���»�������������ѡ�\n");
                set("light_up", 15);
                set("value",60);
                set("material", "wood");
                set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���������������\n");
        }
        init_blade(10);
        setup();
}

