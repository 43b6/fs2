#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIC"ˮɫ���"NOR,({"water ribbon","ribbon"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","ˮԨ����ʹ�õ������ˮ��������Ŀ�������޷�ֱ�ӡ�\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "����$n,$N������һ�����ע����������\n");
                set("unwield_msg", "$N�����е�$nС�ĵ�����\n");
        }
        init_unarmed(100);

        setup();
}
