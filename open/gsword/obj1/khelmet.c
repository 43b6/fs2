#include <armor.h>
#include <ansi.h>
inherit HEAD;
object me=this_player();
void create()
{
        set_name(HIY"ʥ��ͷ��"NOR, ({"kensai scarf", "scarf"}));
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("value", 0);
        set("material", "linen");
        set("long","��ʥר��֮ͷ��.��ʹ��ʥ��Ұ������\n");
        set("armor_prop/armor", 5);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("thunder",100);
        set("wear_msg", "$N����$n��[1;33m��������ɢ����������Ϣ��[0m\n");
        }
        setup();
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",6);
        this_object()->set("armor_prop/dodge", 6);
        this_object()->set("armor_prop/parry", 4);
        this_object()->set("armor_prop/move", 4);
}

