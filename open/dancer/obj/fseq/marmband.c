// ���۽�Ʒby cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit ARMBANDS;
object me=this_player();
void create()
{
        set_name(HIR"Ů����ķ�����ۻ� "NOR,({"Lum_armband","armband"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",0);
        set("long","����һ����ķƤ�޻û��ıۻ���ӵ�г�������Ĺ�Ч��\n");
set("wear_msg","$N��$n���ֱ�һ�ף���ʱһ��ǿ�����������ֱۡ�\n");
set("remove_msg","$N������$n���·𿴵���ķ���������Ƥ�޴�����$n��\n");
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
        this_object()->set("armor_prop/armor", 10);
        this_object()->set("armor_prop/force", 6);
        this_object()->set("armor_prop/parry", 6);
        this_object()->set("armor_prop/dodge", 6);
}

