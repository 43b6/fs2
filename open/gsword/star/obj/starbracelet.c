#include <ansi.h>
inherit EQUIP;
void create()
{
 set_name("�ǿ�����" , ({"starbracelet"}) );
     set_weight(200);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "����ʯ������֮����, ɢ������ʯ֮�ܡ�\n");
            set("unit", "��");
            set("armor_type", "wrists");
            set("value", 10000);
            set("armor_prop/parry",2);
		set("armor_prop/armor",3);
            set("armor_prop/sword",2);
            set("wear_msg", "$NС������$n�����ϴ�ȥ��\n");
     }
}
