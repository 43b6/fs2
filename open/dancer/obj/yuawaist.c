//yuawaist.c//
#include <ansi.h>
inherit EQUIP;
object me=this_player();
void create()
{
    set_name(HIY"���˿��"NOR, ({"belt"}) );
     set_weight(100);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "�����˿���Ƴ�֮��������ȴ�������\n");
            set("unit", "��");
            set("armor_type", "waist");
            set("material", "leather");
            set("value", 50000);
            set("armor_prop/armor",15);
            set("wear_msg", "$N��$nϵ�����ϣ�һ����ů�ĸо�ӿ����ͷ��\n");
            set("remove_msg", "$N��$nж�����������ие�һ��ʧ��С�\n");
     }
	 setup();
     if(me->query("class")=="dancer")  this_object()->set("armor_prop/unarmed",15);
}
