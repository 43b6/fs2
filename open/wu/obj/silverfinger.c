// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIB"���սצ"NOR,({"wind claws","claws"}));
set_weight(6000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","����һֻ�ɴ�˵�еġ�����ʯ����������ɵ�������\n");

set("value",15000);
                set("material", "steel");
set("wield_msg","$N����$n������ӿ���˷������\n");
set("unwield_msg","$N��$nȡ�£����������֮���š�\n");
        }
init_unarmed(40);
        setup();
}
