// Qc by anmy (98/3/3)
#include <armor.h>
#include <ansi.h>
inherit PANTS;
void create()
{
       set_name(HIB "ħ������" NOR, ({ "mdragon pants" ,"pants" }) );
       set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
                set("long","Ϊħ���ۼ��Ƴɡ�\n");
set("wear_msg","����$n��ħ�������Ƶĸ���$N��ǿ�ı�����\n");
                set("material", "steel");
                set("armor_prop/armor", 14);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
                set("armor_prop/parry", 8);
                set("armor_prop/force", 8);
                set("armor_prop/dodge", 8);
        }
                setup();
}
