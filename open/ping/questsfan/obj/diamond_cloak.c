//�羧ʶ������---2000.4.6 by dhk
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(""HIG"�羧ʶ������"NOR"",({"diamond cloak","cloak"}) );
        set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ����������̹⣬������ı��\n");
        set("unit", "��");
        set("value",50000);
        set("armor_type","cape");
        set("material","diamond");
            set("armor_prop/armor",5);
            set("armor_prop/unarmed",7);
//        set("armor_prop/parry",7);
set("wear_msg", HIR"$N����$n"HIR"����Χ���̹���������ģ������Ľ�$N�����ʸı�ɻ��߰�ķ緶����\n"NOR);
set("unequip_msg", HIR"$N��$n"HIR"����������˲�����ܷ���һ��ǿ�ҵ�������\n");
         }
        setup();
}

