#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("ѩ������",({"li needle","needle"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "ѩ�������Ǵ���ɽ�����е�ѩ�����ϵ���Ƭ�����ơ�/n");
                set("unit", "֧");
                set("value",1000);
                set("rigidity", 30);
                set("material", "ironsteel");
                set("wield_msg", "$N���������һ�ͣ���Ȼһ֧$n������ָ�䣡\n");
                set("unwield_msg", "$N�����е�$n��������С�\n");
        }
        init_stabber(50);
        setup();
}


