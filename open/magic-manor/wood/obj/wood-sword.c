#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name(HIG"��ɫ�齣"NOR,({"wood sword","sword"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","ľȼ����ʹ�õı������̹�������Ŀ�������޷�ֱ�ӡ�\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "����$n,$N������һ�����ע����������\n");
                set("unwield_msg", "$N�����е�$nС�ĵ�����\n");
        }
        init_sword(100);

        setup();
}

