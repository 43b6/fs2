#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
        set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[0m",({"gold legging","legging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵĻ�ϥ��\n"NOR);
   set("wear_msg", "$N��$n���ϣ�"HIY"����սϥ"NOR"����������ʹ$N�о��������衣\n");
   set("unequip_msg", "$N��$n�ѵ���"HIY"����սϥ"NOR"������������$N����ȥ��\n");
        set("unit","��");
        set("value",70000);
        set("material","cloth");
        set("armor_type","leggings");
      set("armor_prop/armor",6);
        set("armor_prop/move",3);
        }
        setup();
}
