inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
        set_name("[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[1;31m��[1;33mu[0m",({"gold boots","boots"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long",HIW"����һ���ɴ�˵����������Ͻ���������ɵ�ѥ�ӡ�\n"NOR);
   set("wear_msg", "$N��$n���ϣ�"HIY"������ѥ"NOR"�������ʹ$N���Ϸ���ǿ��Ĺ�â��\n");
   set("unequip_msg", "$N��$n�ѵ���"HIY"������ѥ"NOR"��������֮��ȥ��\n");
        set("unit", "˫");
        set("value",110000);
        set("material","cloth");
        set("armor_type", "boots");
        set("armor_prop/armor",15);
        set("armor_prop/move",3);
        set("armor_prop/dodge", 3);
        }
        setup();
}
