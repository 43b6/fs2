// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit SHIELD;
void create()
{
        set_name( ""HIG"��HIW"s"HIG"��HIW"��HIG"��HIW"��NOR"" ,({"dragon_god_shield","shield"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("no_sell",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
                set("no_put",1);
   set("no_get",1);
                set("material","gem");
                set("armor_prop/armor",15);
                set("armor_prop/parry",8);
                set("armor_prop/force",7);
                set("wear_msg","$N��$n����װ��������Ϊһ���̹⸽��$n��\n");
 }
        setup();
}
