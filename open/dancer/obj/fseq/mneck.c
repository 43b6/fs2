// ���۽�Ʒby cgy(22/10/00)
#include <ansi.h>
#include <armor.h>
inherit NECK;
object me=this_player();
void create()
{
     set_name(HIB"����С���ü����"NOR , ({"Anmy_gem","gem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 0);
            set("material","steel");
            set("long","����һ������С���ü�����������ɢ��������Ĺ�â��\n");
set("wear_msg","$N����$n���������������â��$n��ʼ����Ч�á� \n");
set("remove_msg","$N������$n,���ϵĹ�âҲ��֮���������� \n");
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
            this_object()->set("armor_prop/parry",5);
            this_object()->set("armor_prop/force",3);
            this_object()->set("armor_prop/attack",5);
            this_object()->set("armor_prop/armor",9);
}

