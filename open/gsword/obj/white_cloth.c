// by roger
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( "����֮��",({"white cloth","cloth"}));
        set("long","����ң���������ӣ����������İ׹⡣\n");
	set_weight(1000);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",30000);
                set("material","cloth");
                set("armor_prop/armor",14);
               set("armor_prop/dodge",3);
                set("armor_prop/move",3);
        }
        setup();
}
