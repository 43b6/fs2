#include <ansi.h>
#include <armor.h>
inherit NECK;
object me=this_player();
void create()
{
     set_name(MAG"���߻���ʯ"NOR , ({"ninja gem","gem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 0);
            set("material","steel");
            set("long","��ӡ��ǿ�������, ���Ը������Ī���ı��ӡ�\n");
            set("no_auc",1);
            set("no_sell",1);
            set("no_give",1);
            set("no_put",1);
            set("no_drop",1);
            set("no_get",1);
     }
            setup();
            this_object()->set("armor_prop/dodge",15);
            this_object()->set("armor_prop/defense",30);
            this_object()->set("armor_prop/attack",15);
            this_object()->set("armor_prop/armor",20);
            set_heart_beat(1);
}
void heart_beat()
{
 if( query("equipped") && me->query("bellicosity") > 1000 )
{
 if(random(100) > 30)
   {
me->receive_curing("kee",2);
me->receive_heal("kee",2);
me->receive_curing("gin",2);
me->receive_heal("gin",2);
me->receive_curing("sen",2);
me->receive_heal("sen",2);
}}}