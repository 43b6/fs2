#include <armor.h>
#include <ansi.h>
inherit BOOTS;
object me=this_player();
void create()
{
        set_name(HIY"��ʥսѥ" NOR,({"kensai boots","boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","˫");
                set("value",0);
                set("armor_prop/armor",12);
                set("armor_prop/dodge",10);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);

        set("no_drop",1);
        set("no_get",1);
                set("armor_prop/move",10);
                set("material","steel");
                set("long","��ЬΪһ�ֲ�֪���Ĳ������Ƴɡ�\n");
                set("wear_msg","$N����$n[1;33m��ʱ�е���������������ࡣ[0m\n");
                setup();
        }
}
