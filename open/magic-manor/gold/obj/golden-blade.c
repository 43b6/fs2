#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name(HIY"��ɫ�鵶"NOR,({"golden blade","blade"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","��Ʈ��ʹ�õı�������������ģ������޷�ֱ�ӡ�\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "����$n,$N������һ�����ע����������\n");
                set("unwield_msg", "$N�����е�$nС�ĵ�����\n");
        }
        init_blade(100);

        setup();
}
