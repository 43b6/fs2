// kame_suit.c
#include <ansi.h>

inherit EQUIP;

void create()
{
      set_name(HIR"����"HIW"�ּ�"NOR,({"fire bird leggings","leggings"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","����Ƥ�ƳɵĻ�ϥ , �����˫�ŵ����ݶ� .\n");
        set("unit","��");
	set("value",1500);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
         set("armor_prop/dodge",5);
	}
        setup();
}
