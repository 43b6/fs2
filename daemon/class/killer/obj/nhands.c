#include <ansi.h>
#include <armor.h>
inherit HANDS;
object me=this_player();
void create()
{
        set_name(MAG"����Ѫ��"NOR,({"ninja hands","hands"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "˫");
        set("value",0);
        set("long","��˵�л���ȡ����������Ѫ���ס�\n");
        set("material","steel");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/armor", 15);
        this_object()->set("armor_prop/attack", 15);
        this_object()->set("armor_prop/dodge",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/dagger",20);
        this_object()->set("armor_prop/throwing",20);
        set_heart_beat(1);
}
void heart_beat()
{
 if( me->is_fighting() && query("equipped"))
{
 if(random(100) > 85)
   {
message_vision(RED"\n$N���е�Ѫ�ַ������, $N˲ʱ����һ��, ȫ�����ɱ����\n"NOR,me);
me->receive_curing("kee",100);
me->receive_heal("kee",100);
me->add("bellicosity",50);
}}}
