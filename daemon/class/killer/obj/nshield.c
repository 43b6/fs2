#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object me=this_player();
void create()
{
        set_name(MAG"���߻���"NOR,({"ninja shield","shield"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�����������������ҷ��������ߵķ�ӡ���ơ�\n");
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
        this_object()->set("armor_prop/armor",15);
        this_object()->set("armor_prop/parry",10);
        this_object()->set("armor_prop/dodge",10);
        this_object()->set("armor_prop/defense",30);
}
