// ice-needle.c
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name(HIW "���Ϻ�˿��" NOR,({"ice needle","needle"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("long", "���Ϻ�˿���˗���ɽ��������˿����֯����˿ǿ�ͣ����䣬���������������ɳ��У�\n");
                set("value",50000);
                set("rigidity", 30);
                set("material", "crimsonsteel");
                set("wield_msg", "$N���������һ�ͣ���Ȼһ֧$n������ָ�䣡\n");
                set("unwield_msg", "$N�����е�$n��������С�\n");
        }
        init_stabber(80);
        setup();
}


