#include <ansi.h>
inherit EQUIP;

void create()
{
  set_name(  "�ǹ�֮��"  ,({"star cloth","cloth"}));
        set_weight(1000);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value",2000);
                set("material","cloth");
                set("armor_prop/armor",15);
                set("armor_prop/dodge", 3);
                set("armor_prop/move", 2);
                set("armor_prop/sword",2);         
}
        setup();
}
