
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("��ͭ��", ({ "bronze blade","blade" }));
        set_weight(7500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ������ͭ������ɵĵ���������ϵ�Ż�ɫ�д����ǽ������ŵ��ӳ�ѧ
�������õı��С�\n");
set("value",400);
                set("value", 500);
                set("material", "steel");
                set("wield_msg", "�ƹ�һ����$N�ӵ����г��һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n���뱳��ĵ����\n");
        }
	init_blade(18);

	set("ski_type1", "blade");
	set("ski_level1", 10);
        setup();
}

