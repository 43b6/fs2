#include <weapon.h>

inherit STAFF;

void create()
{
        set_name( "������׹�" , ({ "club"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ������������ͨͨ�Ĺ��ӡ�\n");
                set("value", 300);
                set("material", "wood");
        }
        init_staff(20);

        set("wield_msg", "ֻ����$N����һ�Σ����϶�ʱ����һ��$n��\n");
        set("unwield_msg", "$N����һ��������$n���ڱ��ϡ�\n");

        setup();
}

