//�羧˫����---2000.4.3 by dhk
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIC"�羧˫����"NOR,({"diamond armor","armor"}) );
            set_weight(10000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ��������ĺ�⣬������ı��
\n");
        set("unit", "��");
        set("value",2000000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
            set("armor_prop/armor",40);
            set("armor_prop/stabber",7);
        set("armor_prop/parry",7);
set("wear_msg", HIY"$N����$n"HIY"����âһ�����ɫ������ѽ�$N�����ܻ�ס\n"NOR);
set("unequip_msg", HIY"$N��$n"HIY"ж�����������ܵĻ��Ҳ������ɢ�����ˡ�\n"NOR);
        }
        setup();
}

