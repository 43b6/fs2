#include <weapon.h>

inherit STICK;

void create()
{
        set_name("ɨ��", ({ "broom" }));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ����մ������ɨ�㣬�ǳ���������ɨ��Ժ�õġ�
\n");
                set("value", 95);
                set("material", "wood");
                set("wield_msg", "$N������һ�£���һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���¡�\n");
        }
        init_stick(1);
        setup();
}
