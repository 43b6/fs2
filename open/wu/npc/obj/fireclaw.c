// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIR"������צ"NOR,({"fire claw","claw"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","����һ���á����ҡ���������������\n");

                set("value",10000);
                set("material", "steel");
set("wield_msg","$N��$n���ϣ�����ӿ�����۵����档\n");
set("unwield_msg","$N��$nж��������������֮��ȥ��\n");
set("armor_prop/unarmed",5);
        }
        init_unarmed(50);
        setup();
}
