//�羧�q������---2000.4.3 by dhk
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIY"�羧�q������"NOR,({"diamond belt","belt"}) );
            set_weight(500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ��������Ľ�⣬������ı��
\n");
        set("unit", "��");
        set("value",740000);
        set("armor_type","waist");
        set("material","lether");
            set("armor_prop/armor",5);
            set("armor_prop/cure",15);
        set("armor_prop/stabber",10);
        set("wear_msg", ""HIR"$N����$n"HIR"�������������е����˲����ʧ��\n"NOR);
set("unequip_msg", ""HIR"$N��$n"HIR"���������������������е�����ٶ�������������\n"NOR);
        }
        setup();
}

