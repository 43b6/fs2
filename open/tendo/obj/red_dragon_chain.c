#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name(HIR "��������" NOR,({"red_dragon_chain","chain"}));
        set_weight(6500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("value",30000);
                set("material","crimsonsteel");
                set("rigidity",70);
                set("long","һ��"HIR"���"NOR"������,����"HIY"½���"NOR"����Ϲ��������,�������������ɵġ�\n");
        set("wield_msg", "$N��$n��������,һ��"MAG"����"NOR"��������ֱ�ֱ�����ϡ�\n");
        set("unwield_msg","$N���ϵ�"MAG"����"NOR"Ѹ�ٴ���"HIR"����"NOR"�С�\n");
        }
        init_whip(90);
        setup();
}
