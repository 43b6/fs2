#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("����׹��" , ({"gem"}) );
     set_weight(500);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", 
		"һ�����ѵ�һ����"+HIR"�챦ʯ"NOR+"�������ϵ����� ,\n"
		"��˵�챦ʯ�����������Ĺ�Ч\n");
            set("unit", "��");
            set("armor_type", "neck");
            set("value", 10000);
            set("armor_prop/force",3);
            set("armor_prop/armor",4);
            set("wear_msg", "$N��$n���ڲ����� ,��Ȼһ������ע��$N�����ϡ�\n");
     }
}

