#include <ansi.h>
inherit EQUIP;
void create()
{
  set_name("��������" , ({"stargem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long",
"����������ʱ, �������ʯ���õ�֮ʯ, ����"+HIB"����֮ʯ"NOR+"���ڴ����� ,\n"
"��˵����ʱ��ɢ���ڶ಻ͬ����, ������֮ʯ����������ʱ��ɢ��������\n");
            set("unit", "��");
            set("armor_type", "neck");
            set("value", 10000);

		set("armor_prop/armor",3);
            set("armor_prop/parry",2);
            set("armor_prop/force",2);
set("wear_msg", "$NС�ĵ�$n���ڲ����� ,һ������֮��ԴԴ����ע��$N�����ϡ�\n");
     }
}
