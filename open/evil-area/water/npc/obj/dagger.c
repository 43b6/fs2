#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIW"��"HIC"��"HIG"ذ"HIM"��"NOR,({"cloud dagger","dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else
	{
                set("unit", "��");
                set("long","\n");
                set("value",1000000);
                set("material", "iron");
        }
        init_dagger(1);


        set("wield_msg", HIY"$N����$n"HIY"����ʱ���ƴ���������������\n"NOR);
        set("unwield_msg", HIW"$N�����е�$n"HIW"�պã����������䡣\n"NOR);
        setup();
}

