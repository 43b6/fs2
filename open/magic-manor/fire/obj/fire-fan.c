#include <weapon.h>
#include <ansi.h>

inherit STABBER;

void create()
{
        seteuid(getuid());
        set_name(HIR"��������"NOR,({"fire fan","fan"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","�������ʹ�õı��ȣ���������ģ������޷�ֱ�ӡ�\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "����$n,$N������һ�����ע����������\n");
                set("unwield_msg", "$N�����е�$nС�ĵ�����\n");
		set("magic-manor-obj",1);
        }
        init_stabber(100);

        setup();
}
