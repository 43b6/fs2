// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIW"�׽�ָ��"NOR,({"platinum ring","ring"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","���Ǵ�ѩȪ������ұ����ڳ���һ�����׽����������������ָ����\n");

                set("value",10000);
            set("material","gold");
set("wield_msg","$N����$nͻȻ���Ǽ����������˲���!!");
set("armor_prop/unarmed",5);
        }
        init_unarmed(40);
        setup();
}
