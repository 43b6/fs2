#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
    set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33mP[1;31m��[1;33m��[0m", ({"gold neck","neck"}) );
     set_weight(5000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
   set("long",HIW"����һ���ɴ�˵�������������ǻ�ʯ���Ͻ����ߵ�������\n"NOR);
   set("wear_msg", "$N��$n���ϣ����Ϸ���"HIW"�ǻ�"NOR"��Ĺ�â��\n");
   set("unequip_msg", "$N��$n�ѵ������ϵĹ�â��֮��ȥ��\n");
      set("armor_prop/armor",7);
   set("armor_prop/dodge",3);
            set("unit", "��");
            set("armor_type", "neck");
            set("value", 30000);
     }
}

