#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        set_name("����",({"daemon blade","blade"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",50000);
                set("material", "steel");
                set("wield_msg", "$N��������һ��$n�������С�\n");
                set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
        }
        init_blade(40);
        setup();
}  
                        
