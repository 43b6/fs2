//���� eq
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIY"�鹫����"NOR, ({ "houng belt" ,"belt" }) );
        set_weight(300);
        set("no_sell",1);
        set("no_auc",1);
set("no_get",1);
set("no_give",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","��ؤ���õ�������Ϊ��ҵĴ���֮����\n");
                set("unit", "��");
                set("value", 70000);
                set("material","leather");
                set("armor_type", "waist");
                set("armor_prop/armor",10);
                set("armor_prop/dodge",2);
                set("armor_prop/move",2);
                setup();

        }
}

