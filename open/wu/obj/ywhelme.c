#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
        set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33mY[1;31m��[1;33ma[0m", ({"gold helmet", "helmet"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵ�ͷ����\n"NOR);
   set("wear_msg", "$N��$n���ϣ�"HIY"����ͷ��"NOR"������ʹ������ͨ����\n");
   set("unequip_msg", "$N��$n���£�"HIY"����ͷ��"NOR"�����л��ֵ�������֮��ȥ��\n");
   set("armor_prop/armor",15);
   set("armor_prop/force",2);
        set("unit", "��");
        set("value", 30000);
        set("material", "steel");
        }
        setup();
}
