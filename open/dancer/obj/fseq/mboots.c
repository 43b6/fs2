// ���۽�Ʒby cgy(22/10/00)
#include <armor.h>
#include <ansi.h>
inherit BOOTS;
object me=this_player();
void create()
{
        set_name(HIR"������أ������ѥ" NOR,({"Urd_shoes","boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("unit","˫");
                set("value",0);
                set("armor_prop/armor",10);
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
                set("long","����һ˫أ���´����ѥ�ӣ���������ٶȴ�����\n");
                set("wear_msg","$N����$n�е����籩�߰㣬�ж����������Ӳ��١�\n");
				set("remove_msg","$N������$n�������ػӶ�˫��... ��... ��ô��ô��!\n");
                setup();
        }
}
