#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIB"����ս��ѥ"NOR,({"fiend boots","boots"}) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","ڤ������ר�õ�ս��ѥ�������޽�.ľ.ˮ.��.������֮�׾�����֯���ɡ�\n");
        set("unit","˫");
        set("value", 50000);
        set("material","leather");
        set("armor_type","boots");
        set("wear_msg",HIC"����$n֮��$N�������ʱ�ܵ�ڤ��֮����ǣ������������\n"NOR);
        set("armor_prop/move", 5);
        set("armor_prop/dodge", 5);
        set("armor_prop/armor", 5);
        }
        setup();
}


