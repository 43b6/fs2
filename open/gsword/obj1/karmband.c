#include <armor.h>
#include <ansi.h>
inherit ARMBANDS;
object me=this_player();
void create()
{
        set_name("[1;33m��ʥ�ּ�[0m",({"kensai armband","armband"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",0);
        set("long","��֪���Ĳ����Ƴ�..�ƺ�רΪ����������\n");
set("wear_msg","$N����$n��$n[1;36mɢ�����������⡣\n");
        set("material","steel");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);

        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
this_object()->set("armor_prop/sword",5);
this_object()->set("armor_prop/armor", 10);
this_object()->set("armor_prop/parry", 5);
this_object()->set("armor_prop/dodge", 5);
}
