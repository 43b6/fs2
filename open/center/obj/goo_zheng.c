// torch
#include <weapon.h>

inherit STABBER;

void create()
{
        set_name("����", ({ "goo-zheng", "goo", "zheng" }) );
        set_weight(300);
        if( clonep() )
          set_default_object(__FILE__);
        else {
          set("unit", "ֻ");
          set("long", "һֻ�ںڵĹ���, �ɼ����ֵ��ǳ, ����Ҳֻ�ж����ɵ��˲�ʶ����\n");
          set("value", 30);
          set("material", "��ľ");
          set("wield_msg", "$N��׾������$n��\n");
          set("unwield_msg", "$N�ֵ�һ���������е�$n��\n");
        }
        init_stabber(10);
        setup();
}
