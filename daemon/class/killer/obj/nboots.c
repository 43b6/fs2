#include <armor.h>
#include <ansi.h>
inherit BOOTS;
object me=this_player();
void create()
{
        set_name(MAG"�����䶷Ь" NOR,({"ninja boots","boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","˫");
                set("value",0);
                set("no_auc",1);
                set("no_sell",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
                set("armor_prop/move",10);
                set("armor_prop/dodge",15);
                set("armor_prop/defense",25);
                set("armor_prop/armor",10);
                set("armor_prop/parry",5);
                set("material","steel");
                set("long","����������Ь��, �����ڴ����ߵ��ж���\n");
                setup();
        }
}
