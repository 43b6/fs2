// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIC "���ָ��" NOR,({"figring"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","����һֻ�Խ��ʯ���Ƴɵ�ָ���������������ֵ��˺�����\n");

                set("value",10000);
                set("material", "steel");
        set("wield_msg", "$N����$n����ʱ���������������������  \n");
        set("unwield_msg", "$N�㽫���ϵ�$nж������ ��\n");
        }
	init_unarmed(45);
        setup();
}
