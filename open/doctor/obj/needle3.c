//  made bye adam..
#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name("����", ({"silver needle", "needle"}) );
        set_weight(5000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","�ഫΪǧ�꺮���������ɡ�\n");
          set("value", 5000);
          set("material", "crimsonsteel");
         }

init_stabber(30);
        setup();
}


