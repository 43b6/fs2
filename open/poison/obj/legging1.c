#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIR"���ƻ�ϥ"NOR,({"dragon legging","legging"}) );
        set_weight(5000);
        if (clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
һ����ϥ ,���������Ļ��ơ�\n");

                set("armor_type","leggings");
                set("material","blacksteel");
                set("unit","��");
                set("armor_prop/armor",9);
                set("value",400);
                set("armor_prop/force",2);
                set("wear_msg","$N����һ��$n��\n");
                set("unequip_msg","$N����һ��$n��\n");
                setup();
        }
}

