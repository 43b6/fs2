// ���۽�Ʒby cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object me=this_player();
void create()
{
        set_name(HIY"��������������"NOR,({"Cgy_shield","shield"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����һ��������ѹ���Ľ��ܣ����Է����κεĹ���(��ǿװ��..���˼ǵô�hp����)��\n");
        set("unit","��");
        set("value",0);
        set("material","steel");
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
        this_object()->set("armor_prop/armor",15);
        this_object()->set("armor_prop/parry",10);
        this_object()->set("armor_prop/force",10);
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{    ::wear();
     if( query("equipped") )
     {
        
message_vision(HIC"ֻ��$N����ȫ����������ǰ����һ�������������硯������˸������������ܡ�\n"NOR,me);
me->set_temp("ref_shield",1);
     }
}
int do_remove(string str)
{
   if(str=="Cgy_shield" || str=="all"||str=="shield")
     if( query("equipped") )
     {
message_vision(HIC"һ��������ɢ����������������ʧȥ����Ӱ��\n"NOR,me);
me->delete_temp("ref_shield");
     }
}
