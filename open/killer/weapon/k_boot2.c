//dancerboots//
#include <ansi.h>
inherit EQUIP;
void create()
{
        set_name(MAG "����Ь" NOR,({"boots"}) );
        set_weight(1000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
        set("long","��Ϊ����������ƵĹ���Ь��Ч���ǳ��ر�\n");
        set("unit","˫");
        set("value",20000);
        set("armor_prop/armor",3);
        set("armor_prop/dodge",3);
        set("armor_prop/parry",2);
        set("material","leather");
        set("armor_type","boots");
        setup();
        }
}