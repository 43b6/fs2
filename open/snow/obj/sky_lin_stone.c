// Room: /open/snow/obj/sky_lin_stone
// ����ʯ
#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIM"����ʯ"NOR, ({ "sky_lin_stone"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","���Ǵ�˵�����������칦�ܵ�ʯͷ.\n");
                set("value", 10000);
             }
      setup();
}

