#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIB"����ս������"NOR,({"fiend hands","hands"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
ڤ������ר�õ�����, �ܴ�����߱���Ĺ�������˫�ֵļ���!!
");
        set("unit", "˫");
        set("value",10000);
        set("material","leather");
        set("armor_type", "hands");
        set("armor_prop/armor",5);
        set("armor_prop/attack",5);
        }
        setup();
}


