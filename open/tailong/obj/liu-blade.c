//  made by xman

#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
        object me=this_player();
        set_name(HIG"��Ҷ��"NOR, ({"liu-blade", "blade"}) );
        set_weight(3000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","�Ա�������Ҷ, ������ë�ĵ�, �����и߳��ĵ�������ʹ������\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_blade(80);
        setup();
}

