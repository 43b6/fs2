inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIY"��֯����"NOR,({"golden hands","hands"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�Խ�˿֯�ɵ�������ף������ƺ�������ĳ��ħ����
");
        set("unit", "˫");
        set("value",100000);
        set("material","cloth");
        set("armor_type", "hands");
        set("armor_prop/armor",5);
        set("armor_prop/attack", 5);
        set("armor_prop/dodge",3);
        }
        setup();
}

