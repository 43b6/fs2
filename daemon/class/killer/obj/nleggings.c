#include <ansi.h>
#include <armor.h>
inherit LEGGINGS;
object me=this_player();
void create()
{
        set_name(MAG"���߻�ϥ"NOR,({"ninja legging","legging"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",0);
        set("material","steel");
        set("long","Ϊ������˿�Ƴɣ��кܸߵķ�����\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/armor", 10);
        this_object()->set("armor_prop/move",15);
        this_object()->set("armor_prop/dodge",15);
        this_object()->set("armor_prop/dagger",20);
        this_object()->set("armor_prop/throwing",20);
}
