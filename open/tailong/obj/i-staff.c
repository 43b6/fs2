#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name(HIB"������"NOR, ({"havey-staff", "staff"}) );
        set_weight(20000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","һ��ʮ�����ص�����, ����͸������Ѫ�⡣\n");
        set("wield_msg", HIR"$N��$n"HIR"�������ϣ�ȫ���ʱ������а���������\n"NOR);
          set("value", 30000);
          set("material", "crimsonsteel");
         }
        init_stabber(120);
        setup();
}

