#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("��ë����", ({ "green_ring" }) );
        set("long","���Ź������ɫ�Ľ�����������ȥ�����ٰ�\n");
        set_weight(10);
        set("unit", "��");
        set("value", 0);
        set("no_sell", 1);
        set("no_auc", 1);
        set("no_drop", 1);
        
        setup();
}
