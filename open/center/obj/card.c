
#include <ansi.h>
#include <room.h>

inherit ITEM;

void create()
{
        set_name("ʥ����",({"card"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����һ�ž�����ʥ������\n");
        set("unit","��");
        set("value",100);
        }
        setup();
}
