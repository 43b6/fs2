inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�Ϸ���");
        set ("long", @LONG
Ҫ���ϳ���ɽ�Ķ��ˣ�����һ����Ҫ��ͨ������ȴͨ����ͬ����
���壬������ͨ����ɽ��塱��������ͨ�����׻��塱��������ͨ��
������塱�����⻹��һ��·��ͨ���ϱߵ�·��ȴ��֪Ҫͨ���η���
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"        : __DIR__"mon39",
        "north"       : __DIR__"mon43",
        "west"        : __DIR__"mon44",
        "down"        : __DIR__"mon37",
        "southdown"   : __DIR__"mon54",
]));
        setup();
}
