
#include <ansi.h>
#include <armor.h>
inherit NECK;
object me=this_player();
void create()
{
     set_name(HIY"��ʥ����"NOR , ({"kensai neck","neck"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 0);
            set("material","gem");
            set("long","�����ϸ���һ�����������ı�ʯ..��Լ͸¶���ޱ�������\n");
set("wear_msg",BLU"����$n[34m��$N������������Щ��\n"NOR);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
     }
            setup();
         this_object()->set("armor_prop/sword",5);
            this_object()->set("armor_prop/parry",4);
            this_object()->set("armor_prop/attack",5);
            this_object()->set("armor_prop/armor",9);
}
