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
        "east"    : __DIR__"mon45",
        "west"    : __DIR__"mon38",
]));
        setup();
}
