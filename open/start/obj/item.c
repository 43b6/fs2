#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("�Ӱ�",({"item","item"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("long","����һ֧��ͨ�ĠӰѣ�ר������ţ�������������õġ�\n");
                set("value",100);
                set("material", "wood");
                set("wield_msg", "$N�����ذ�$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���ַ������\n");
        }
        init_blade(5);
        setup();
}
