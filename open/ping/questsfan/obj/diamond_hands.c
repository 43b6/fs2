//�羧��������---2000.4.6 by dhk
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(YEL"�羧��������"NOR,({"diamond hands","hands"}));
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ��������Ļƹ⣬������ı��\n");
        set("unit","˫");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
set("value",50000);
        set("material","diamond");
        set("armor_type","hands");
        set("armor_prop/armor", 25);
        set("armor_prop/attack",15);
        set("armor_prop/parry",10);
set("wear_msg", HIR"$N����$n"HIR"����Χ�Ļƹ⽥�����۳���һ��ʨ�����������֣������İ�$N��˫�ְ���������\n"NOR);
set("unequip_msg", HIR"$N��$n"HIR"���������������ֻ��ɻƹ⻺����������˫���ϡ�\n");
        }
        setup();
}

