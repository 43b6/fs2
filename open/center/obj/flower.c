
#include <ansi.h>
#include <room.h>

inherit ITEM;

void create()
{
        set_name("�ʻ�",({"flower"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����һ����Ư���Ļ�, �����ȥ��Ů��һ���ܰ�ม�\n");
        set("unit","��");
        set("value",1000);
        }
        setup();
}
