#include <armor.h>
#include <ansi.h>
inherit BOOTS;
void create()
{
set_name("Ѫ��\ѥ",({"boots"}));
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","˫");
                set("value",12000);
// Swy QC 98/3/16
                set("armor_prop/armor",4);
                set("armor_prop/dodge",2);
                set("armor_prop/move",3);
                set("material","leather");
                set("long","��Ьȡ��Ѫ��\ëƤ���ơ�\n");
                setup();
        }
}
