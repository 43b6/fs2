#include <ansi.h>
#include <armor.h>
inherit EQUIP;

void create()
{
        set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[0m",({"gold surcoat","surcoat"}));
        set_weight(10000);
        set("armor_type","cape");
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("material","leather");
        set("value",100000);
   set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵ����硣\n"NOR);
   set("wear_msg", "$N��$n���ϣ�"HIY"��������"NOR"�����������ע��$N���У�ʹ$N���ı�����\n");
   set("unequip_msg", "$N��$n��ȥ��"HIY"��������"NOR"��������֮���š�\n");
   set("armor_prop/armor",20);
   set("armor_prop/parry",3);
        }
        setup();
}
