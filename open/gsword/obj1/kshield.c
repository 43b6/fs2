#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object me=this_player();
void create()
{
        set_name(HIY"ʥ��֮��"NOR,({"kensai shield","shield"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ɴ�ʦ�����Բ�֪����������֮ʥ����,,�Խ���ӵ��Ī����Ӱ������\n");
        set("wear_msg","[1;32m$Nװ����$n[1;32m�󣬶�ʱ�����к�ǿ�ķ�������[0m\n");
        set("unit","��");
        set("value",0);
        set("material","blacksteel");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/sword",8);
        this_object()->set("armor_prop/armor",12);
        this_object()->set("armor_prop/parry",10);
        this_object()->set("armor_prop/force",10);
}
