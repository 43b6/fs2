//����ħ�� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIY"ף"HIR"��"HIY"��"HIR"��"NOR, ({ "fire belt" ,"belt" }) );
        set_weight(300);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);   
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","����ף�ڹ��õ�����������ǰ������ħ�����������\n");
                set("unit", "��");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",7);
                set("armor_prop/dodge",3);
                set("armor_prop/move",3);
				set("need_exp",2000000);
                setup();

        }
}

int query_autoload()
{
 return 1;
}