inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ɽС��");
        set ("long", @LONG
С�������ǻ����Ӳݣ�ͨ������ɽ�ϵ�·;�Ծ���᫲�ƽ������
���������û���������ǰ��ǰ;������ããȻ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"  : __DIR__"mon10",
        "west"  : __DIR__"mon07",
]));
        setup();
}

