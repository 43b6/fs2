inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(HIG"ˮ���"NOR, ({ "water bag","bag" }) );
        set_weight(500);
        set_max_encumbrance(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "ˮ���ر������Ĵ��ӣ���������װ����Ʒ��\n");
                set("value", 100000);
        }
        setup();
}

int is_container() { return 1; }
