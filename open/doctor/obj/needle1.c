#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("����" ,({"chhu needle","needle"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("long", "�������ϵ��������ƶ��ɵģ�\n");
                set("value",50);
                set("material", "iron");
                set("wield_msg", "$N���������һ�ͣ���Ȼһ֧$n������ָ�䣡\n");
                set("unwield_msg", "$N�����е�$n��������С�\n");
        }
        init_stabber(10);
        setup();
}


