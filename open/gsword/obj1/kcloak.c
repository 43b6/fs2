
#include <ansi.h>
#include <armor.h>
inherit CAPE;
object me=this_player();
void create()
{
        set_name(HIY"��ʥ����"NOR,({"kensai cloak","cloak"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("value",0);
        set("material","linen");
        set("long","��һ�����粻ͬ.Ϊʹ����ӵ�и�ǿ���ж���..�ʴ�������������ʱ�����ᱡ���ʹ��ʥ����������˳�֡�\n");
set("wear_msg","[1;31m����$n[1;31m��$N���ж�Խ��Խ˳����[0m\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/sword",5);
        this_object()->set("armor_prop/armor",5);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/dodge",5);
        this_object()->set("armor_prop/move",5);

}
