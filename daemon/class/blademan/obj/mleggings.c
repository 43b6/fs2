// Qc by anmy (98/3/3)
#include <ansi.h>
#include <armor.h>
inherit LEGGINGS;
object me=this_player();
void create()
{
        set_name(HIB"ħ���ּ�"NOR,({"mdragon legging","legging"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",0);
        set("material","steel");
        set("long","Ϊħ���ۼ��Ƴɣ��кܸߵķ�����\n");
set("wear_msg","����$n�󣬶�ʱ�������ӡ�\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
        this_object()->set("armor_prop/armor", 9);
        this_object()->set("armor_prop/move",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/force",2);
}

