// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIY"�ƽ�����"NOR,({"gold star","star"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","����һֻ�Իƽ������ɵ��ֻ�\n");

set("value",80000);
                set("material", "steel");
set("wield_msg","$N����$n�����Ϸ�������˼��Ļƽ��â\n");
set("unwield_msg","$N�㽫$nж����������â��֮��ȥ��\n");
        }
init_unarmed(20);
        setup();
}
