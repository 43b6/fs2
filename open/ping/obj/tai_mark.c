//  made by xman

#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name(HIY"������"NOR, ({"tai mark", "mark"}) );
        set_weight(6000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","һ�����쾫�ɵ����ƣ����ϵ���צ������������������\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_stabber(10);
        setup();
}

