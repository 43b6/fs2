#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("��ɲŮ��" , ({"gem"}) );
     set_weight(500);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", 
		"��ɲŮ����Я���ı����ʮ����ħ����ʯ�Ƴ�\n");
            set("unit", "��");
            set("armor_type", "neck");
            set("value", 50000);
            set("armor_prop/force",10);
            set("armor_prop/armor",6);
            set("wear_msg", HIY"$N��$n���ڲ����� ,���϶�ʱ����һ�㺮˪��\n");
     }
}

