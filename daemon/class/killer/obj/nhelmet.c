#include <ansi.h>
#include <armor.h>
inherit HEAD;
object me=this_player();
void create()
{
        set_name(MAG"��������"NOR,({"ninja helmet","helmet"}));
        set_weight(1000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("value",0);
        set("long","����ʹ�õ�����, �������ߵ������ڱ�������\n");
        set("material","steel");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/armor", 5);
        this_object()->set("armor_prop/defense", 5);
        this_object()->set("armor_prop/dodge",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/dagger",10);
        this_object()->set("armor_prop/throwing",10);
}