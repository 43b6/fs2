#include <weapon.h>

inherit STICK;

void create()
{
        set_name("�޺���", ({ "lohan stick","stick" }));
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
�������ɣ�����һ�������ߣ�ͨ���ں��Ҵ���īɫ�Ĺ����䲻ҫ��ȴ
��Ȼ������
\n");
                set("value", 1000);
                set("material", "ironsteel");
                set("wield_msg", "$N��$n������������.\n");
                set("unwield_msg", "$N�����е�$n����.\n");
        }
	init_stick(50);
        setup();
}
