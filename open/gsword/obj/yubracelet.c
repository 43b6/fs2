#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("��������" , ({"bracelet"}) );
     set_weight(200);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "һ�������鴮�ɵ����������������\n");
            set("unit", "��");
            set("armor_type", "wrists");
            set("value", 10000);
            set("armor_prop/dodge",1);
            set("armor_prop/parry",3); 
            set("armor_prop/armor",4);
            set("wear_msg", "$N��$n�������ϡ�\n");
     }
}
