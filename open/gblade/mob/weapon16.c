#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("Ѫն", ({ "blood blade","blade" }));
        set_weight(11000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
һ����մѪ����ն����������ΪѪ�����ɣ����в���Ѫ����䣬���д�
ȴ��Ȼ����Ѫ���䡣
\n");
                set("value", 1200);
                set("material", "steel");
                set("wield_msg", "$Nմ����Ѫ��˫�ִӱ�����$n��������.\n");
                set("unwield_msg", "$N�����е�$n��ر���ĵ�����.\n");
        }
	init_blade(50);
        setup();
}
