// ���۽�Ʒby cgy(22/10/00)
#include <ansi.h>
#include <armor.h>
inherit HANDS;
object me=this_player();
void create()
{
        set_name(HIB"��Զ���Ż�����"NOR,({"Wataru_hands","hands"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",0);
        set("long","����һ˫��ԶɵĻ������ף������ƺ�������ĳ�����ܡ�\n");
set("wear_msg","$N��$n��˫��һ�ף��ƺ�Ҫ���������ڵĻ��ء�\n");
set("remove_msg","$N������$n���·𿴵���Զ���������Ƣ����\n");
        set("material","steel");
        set("armor_prop/armor", 9);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 6);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",6);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",6);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",6);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",6);
        this_object()->set("armor_prop/attack", 5);
        this_object()->set("armor_prop/dodge",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/move",5);
        this_object()->set("armor_prop/force",5);
}

