
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("������", ({ "silver blade","blade" }));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ���ɰ���������ɵĵ�������ϵ��������������������Ű׹⣬��
�ǽ��ŵ����໥������ʽʱ��ʹ�õı��С�\n");
		set("value", 2000);
                set("material", "steel");
                set("wield_msg", "����һ����$N�ӵ����г��һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���뱳��ĵ����\n");
        }
	init_blade(30);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 30);
	set("ski_level2", 20);
        setup();
}

