//����ħ�� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIR"����ѥ"NOR, ({ "fire cloud boots" ,"boots" }) );
        set_weight(500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);   
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","һ˫��ͣȼ���Ż����ѥ�ӣ���������֮˿�Ƴɡ�\n");
                set("unit", "˫");
                set("value", 80000);
                set("material","leather");
                set("material", "boots");
                set("armor_type", "boots");
                set("armor_prop/armor",6);
                set("armor_prop/dodge",6);
                set("armor_prop/move",6);
				set("need_exp",1000000);
      set("wear_msg", HIY"$N����$n"HIY"���һ�$N����������������\n"NOR);
      set("remove_msg", HIY"$N��$n��������"HIY"���е�����һ�������µ��һ�Ҳ��ʧ�ˡ�\n"NOR);
                setup();

        }
}
int query_autoload()
{
 return 1;
}
