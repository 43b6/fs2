#include <armor.h>
#include <ansi.h>
inherit WRISTS;
object me=this_player();
void create()
{
    set_name(MAG"����ɱ���ֻ�"NOR, ({"ninja bracelet","bracelet"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("material", "steel");
            set("value", 0);
            set("long","��˵��ɱ�⵽��һ���̶ȱ��ܷ��������������ֻ���\n");
            set("no_auc",1);
            set("no_sell",1);
            set("no_give",1);
            set("no_put",1);
            set("no_drop",1);
            set("no_get",1);
     }
            setup();
            this_object()->set("armor_prop/armor",10);
            this_object()->set("armor_prop/dagger",20);
            this_object()->set("armor_prop/throwing",20);
            set_heart_beat(1);
}
void heart_beat()
{
 if( me->is_fighting() && query("equipped"))
{
 if(random(100) > 55 && me->query("bellicosity") > 5000 && me->is_busy())
{
message_vision(MAG"\n$Nƾ��ǿ��Ķ�����������������, �ж��ָ�������\n"NOR,me);
me->delete_busy();
}
}
}