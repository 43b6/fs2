#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIG"����"NOR, ({ "dragon-medal","medal" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","ɢ�������������������£�������ĽǶȻ����Կ�������Ӱ��\n");
                set("unit", "��");
                set("no_drop",1);
                set("no_sell",1);
        }
        setup();
}
