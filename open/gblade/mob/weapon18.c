#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("���н�", ({ "wide sword","sword" }));
        set_weight(11000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ�����صĽ������п����ʵ�����滹���Ű߰�����Ѫ����\n");
                set("value", 1500);
                set("material", "ironsteel");
                set("wield_msg", "$N�ӽ����г��$n��������.\n");
                set("unwield_msg", "$N�����е�$n��ؽ���.\n");
        }
	init_sword(60);
        setup();
}
