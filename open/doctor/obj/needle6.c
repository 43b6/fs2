//  made bye adam..
#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name("夺命七绝针", ({"dead needle", "needle"}) );
        set_weight(5000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "柄");
          set("long","相传被此针扎到，走不到七步，必定气绝而死。\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_stabber(60);
        setup();
}
