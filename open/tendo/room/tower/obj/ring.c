
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIB "����ս��ָ��" NOR,({"fiend ring","ring"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",10000);
                set("material", "steel");
        }
        init_unarmed(40);
        setup();
}


