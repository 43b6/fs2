#include <armor.h>
#include <ansi.h>
inherit WAIST;
object me=this_player();
void create()
{
    set_name(MAG"���߶�������"NOR, ({"ninja belt","belt"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("material", "steel");
            set("value", 0);
            set("long","��˵�п���Ѹ����������߶�����������\n");
            set("no_auc",1);
            set("no_sell",1);
            set("no_give",1);
            set("no_put",1);
            set("no_drop",1);
            set("no_get",1);
     }
            setup();
            this_object()->set("armor_prop/dodge",15);
            this_object()->set("armor_prop/attack",15);
            this_object()->set("armor_prop/armor",30);
            this_object()->set("armor_prop/dagger",20);
            this_object()->set("armor_prop/throwing",20);
            set_heart_beat(1);
}
void heart_beat()
{
 if( !me->is_fighting() && query("equipped"))
{
 if(random(100) > 55 && me->query("force") < me->query("max_force")*2 && me->query("class")=="killer")
{
me->add("force",2);
}
 if(random(100) > 55 && me->query("bellicosity") < me->query("max_force") && me->query("class")=="killer")
{
me->add("bellicosity",2);
}
}
}