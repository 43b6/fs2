inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37mu[0m" , ({"wind boots","boots"}));
         set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",110000);
        set("material","cloth");
        set("armor_type", "boots");
          set("armor_prop/armor",6);
   set("long","����һ������������ʹ�÷���ʯ�������սѥ��\n");
   set("wear_msg", "$N��$n���ϣ�"HIW"���սѥ"NOR"�ķ����Ĺ�âע��$N���С�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"���սѥ"NOR"�Ĺ�â������֮��ȥ��\n");
   set("armor_prop/stabber",2);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
