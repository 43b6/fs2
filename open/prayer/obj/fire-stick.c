#include <weapon.h>
#include <ansi.h>

inherit STICK;

void create()
{
        set_name( HIR"ʥ����"NOR,({"Fire-stick"}) );
     set_weight(20000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","ʥ������֮����һ������ֻ��ÿֻ��͸������İ����â��\n");
            set("unit", "��");             
            set("value",300000);
            set("material","crimsonsteel");
            set("no_give",1);
            set("no_drop",1); 
            set("no_sell",1);
            set("armor_prop/attack", 5);
            set("armor_prop/force", 10);
            set("armor_prop/stick", 10);
            set("armor_prop/move", -10);
        }
        init_stick(120);

        set("wield_msg", "$N�о���ʥ��������������Ĺ�����ԴԴ���ϵ�ӿ��$N��˫��\n");
        set("unwield_msg", "$nһ�����֣����е�����������$N�ĵ�����ʧ��\n");

        setup();
}                   
