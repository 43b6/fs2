#include <weapon.h>

inherit STAFF;

void create()
{
        set_name("а��", ({ "evil staff","staff" }));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
��а�����۳��εĸ��ȣ���Լ��ɸо���а����ɱ�ĺ�����
\n");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N�����ʳ��$n��������.\n");
                set("unwield_msg", "$N�����е�$n�������.\n");
        }
        init_staff(30);
        setup();
}
