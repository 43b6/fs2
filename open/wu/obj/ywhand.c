inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
        set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m@[1;31m��[1;33m��[0m",({"gold hands","hands"}));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵ����ס�\n"NOR);
        set("wear_msg", "$N��$n���ϣ�"HIY"��������"NOR"������������ҫ�۹�â��\n");
        set("unequip_msg", "$N��$n�ѵ���"HIY"��������"NOR"��������������ȥ��\n");
        set("unit", "˫");
        set("value",90000);
        set("material","cloth");
        set("armor_type", "hands");
        set("armor_prop/armor",15);
        set("armor_prop/unarme",2);
        set("armor_prop/attack",10);
        }
        setup();
}
