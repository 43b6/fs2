// kame_suit.c
#include <ansi.h>

inherit EQUIP;

void create()
{
      set_name(HIR"火鸟"HIW"胫甲"NOR,({"fire bird leggings","leggings"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","用狼皮制成的护膝 , 能提高双脚的敏捷度 .\n");
        set("unit","件");
	set("value",1500);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
         set("armor_prop/dodge",5);
	}
        setup();
}
