inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mR[1;33m��[1;37mc[0m" , ({"purple boots","boots"}));
         set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",110000);
        set("material","cloth");
        set("armor_type", "boots");
          set("armor_prop/armor",6);
   set("long","����һ������������ɼ�����������������ɵ���ѥ��\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("wear_msg", "$N��$n���ϣ�$N���ϵ�$nɢ����������$N��Χ��\n");
   set("armor_prop/dodge",2);
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
