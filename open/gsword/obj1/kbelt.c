
#include <armor.h>
#include <ansi.h>
inherit WAIST;
object me=this_player();
void create()
{
    set_name(HIY"��ʥ����"NOR, ({"kensai belt","belt"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("material", "leather");
            set("value", 0);
            set("long","��֪��������֯~���˽�������..�޷�֪�����֯��..��\n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
       set("no_drop",1);
        set("no_get",1);
            set("wear_msg", MAG"$N��$n[35mϵ�����ϣ�������������$N�ۼ���[0m\n");
     }
            setup();
this_object()->set("armor_prop/sword",5);
            this_object()->set("armor_prop/dodge",7);
            this_object()->set("armor_prop/attack",6);
            this_object()->set("armor_prop/armor",10);
            this_object()->set("armor_prop/parry",5);

}
