#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("�ͽ�", ({ "gold blade","blade" }));
        set_weight(9500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ���ɴ���������ɵĵ��������˱���������ʵ������һ��ϵ��һ����˿
����ͨ����ҫ�ۣ���Ŀ���š�
\n");
		set("value", 5000);
                set("material", "gold");
                set("wield_msg", "���һ����$N�ӵ����г��һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���뱳��ĵ����\n");
        }
        init_blade(40);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 40);
	set("ski_level2", 30);
        setup();
}

