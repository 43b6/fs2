#include <ansi.h>
#include <armor.h>
inherit HANDS;
void create()
{
        set_name("��������",({"dragon_hands","hands"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",5000);
        set("long","�����ÿ���֮Ƥ�Ƴ�, ���൱�ķ�������\n");
        set("material","cloth");
// Swy QC 98/3/16
        set("armor_prop/armor", 4);
        set("armor_prop/dodge",3);
        set("armor_prop/parry",2);
        set("armor_prop/move",1);
        }
        setup();
}

