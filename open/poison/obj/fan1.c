#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        set_name(MAG"����ߡ��"NOR,({"beauty fan","fan"}) );
        set_weight(25000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����һ�Ѳ������������ ,��������Ů .\n");
        set("unit","��");
        set("value",10000);
        set("material","steel");
        }
        init_stabber(75);
        set("wield_msg", "$N�ӻ����ͳ�һ������ߡ��.\n");
        set("unwield_msg", "$N�����е�����ߡ�ȷ��뻳��.\n");
        setup();
}
