//  made bye adam..
#include <weapon.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name("��Ӱ��", ({"ghost needle", "needle"}) );
        set_weight(5000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","�ഫ��һ����ҽ�Դ�����ɱ�����Ǹ������ϡ�\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_stabber(40);
        setup();
}


