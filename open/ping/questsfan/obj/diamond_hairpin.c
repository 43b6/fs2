//�羧ͷ��---2000.4.3 by dhk
#include <armor.h>
#include <ansi.h>

inherit HEAD;
void create()
{
        set_name(HIM"�羧ͷ��"NOR, ({"diamond hairpin", "hairpin"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
            set("long", "һ���ɱ�ʤ��ʹ�ã��羧�������ʯ���ɣ�����ɢ����������Ϲ⣬������ı��\n");
            set("unit", "֧");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
            set("value", 300000);
            set("material", "diamond");
            set("armor_prop/armor", 10);
        set("armor_prop/dodge",7);
        set("armor_prop/move",7);
        }
        setup();
}

