#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("������",({"chu needle","needle"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "��������ȡ�Ϻ��������ƣ��������˹��ܣ��������ϲ����뵽��������������ʹ�ô��룡\n");
                set("unit", "֧");
                set("value",500);
                set("material", "steel");
                set("wield_msg", "$N���������һ�ͣ���Ȼһ֧$n������ָ�䣡\n");
                set("unwield_msg", "$N�����е�$n��������С�\n");
        }
init_stabber(70);
        setup();
}

