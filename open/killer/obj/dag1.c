#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIC "ذ��" NOR,({"dagger","dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",100);
                set("material", "steel");
        }
        init_dagger(10);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n���뻳�С�\n");

// The setup() is required.
        setup();
}