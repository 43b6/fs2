//  made by xman

#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
void create()
{
        object me=this_player();
        set_name(HIB"��ָ��ץ"NOR, ({"ghost-claw", "claw"}) );
        set_weight(6000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","һ�����ű���, ���͹Ź��ޱ�, �������к���ϲ����������\n");
        set("wield_msg", HIB"$N��$n"HIB"�������ϣ�һ�ɹ������Ϣ¢�������ܡ�\n"NOR);
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_unarmed(80);
        setup();
}

