inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�������ߣ�һ������Ϊƽ˳�ĵ�·�����Եķ羰����ѩ��һƬ��
�����������κ�������ټ�������ĺ�����Ե�·;�ı��������Ȼ
�����顣
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north"    : __DIR__"mon46",
        "south"    : __DIR__"mon38",
]));
        setup();
}
