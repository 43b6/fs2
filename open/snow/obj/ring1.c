// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIR"ѩ��צ"NOR,({"snowfire ring","ring"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","������������ѩ�Ժ�ɽ��������ģ�צ������..һ����ǧ�겻��֮ѩ����,һ�����ð��겻��֮�۽������Ƶġ�\n");

                set("value",10000);
                set("material", "gem");
set("wield_msg","$N����$n�����ĸо���һ����Ϳ���,$N����ȫ������һӿ���ϡ�");
set("armor_prop/unarmed",3);
        }
        init_unarmed(35);
        setup();
}
