inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ʯ��");
        set ("long", @LONG
·�����ʯ�������٣��¶�����΢�����������ˣ�ǰ��ľ�����
Щ��Ȼһ�µĸо������ԵĲ�ľ������ĸ�����һ���ѩ������Ҳ��
�����ͣ�����һ�㳣��Ҳ���ߵ������Ǽ����ˡ�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westdown"   : __DIR__"mon19",
        "eastup"     : __DIR__"mon21",
]));
        setup();
}

