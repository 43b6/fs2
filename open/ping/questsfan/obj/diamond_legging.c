//�羧���绤ϥ---2000.4.6 by dhk
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIB"�羧���绤ϥ"NOR,({"diamond legging","legging"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ������������⣬������ı��\n");
        set("unit","˫");
        set("value",20000);
            set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("material","diamond");
        set("armor_type","leggings");
            set("armor_prop/armor",5);
        set("armor_prop/attack",10);
        set("armor_prop/parry",8);
        set("armor_prop/unarmed",5);
set("wear_msg", HIR"$N����$n"HIR"����Χ�����⽥��������һ��ǿ�磬�����İ�$N��˫�Ȱ���������\n"NOR);
set("unequip_msg", HIR"$N��$n"HIR"����������ǿ���ֻ������⻺�������������ܡ�\n");
        }
        setup();
}

