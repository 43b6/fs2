//�羧����ѥ---2000.4.3 by dhk
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(WHT"�羧����ѥ"NOR,({"diamond boots","boots"}) );
            set_weight(1000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ��������İ׹⣬������ı��
\n");
        set("unit", "˫");
        set("value",910000);
        set("armor_type","boots");
        set("material","lether");
            set("armor_prop/armor",5);
            set("armor_prop/literate",10);
        set("armor_prop/move",7);
        set("armor_prop/dodge",7);
set("wear_msg", HIC"$N����$n"HIC"����Χ�İ׹⽥������һ�����������İ�$N����������\n"NOR);
set("unequip_msg", HIC"$N��$n"HIC"���������������ֻ��ɰ׹�$N�����Ļص������ϡ�\n");
        }
        setup();
}

