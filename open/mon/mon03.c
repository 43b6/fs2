inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����С��");
        set ("long", @LONG
��ǰ�ľ���������ЩЩ�������ˣ���Ϊ���ѿ��Ҳ���ǰ���ȥ
·�ˣ����ܵľ���һƬ��������Զ����ǰ���������Կ���һ�䷿�ӣ�
��������˾��������ǰ���ߡ�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east" : __DIR__"mon02",
        "west" : __DIR__"mon04",
]));
        setup();
}

