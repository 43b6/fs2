// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit BOOTS;
object me=this_player();
void create()
{
        set_name(HIB"ħ��Ƥѥ" NOR,({"mdragon boots","boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","˫");
                set("value",0);
                set("armor_prop/armor",9);
                set("armor_prop/dodge",10);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
                set("armor_prop/move",10);
                set("armor_prop/force",3);
                set("material","steel");
                set("long","��ЬΪħ��Ƥ�����ơ�\n");
                set("wear_msg","$N����$n�е�����ħ���������ӯ��\n");
                setup();
        }
}
