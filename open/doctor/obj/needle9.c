//  made bye adam..
#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name(HIW"��ѩ��˿��"NOR, ({"cold needle", "needle"}) );
        set_weight(5000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","���ǻ���Ϊ���β����õ���,�ഫΪǧ�꺮���������ɡ�\n");
          set("value", 10000);
         }
        init_stabber(85);
        setup();
}


