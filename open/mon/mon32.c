inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "������");
        set ("long", @LONG
ɽ��������ƺ����ƺ�������ǰ������һ��˵��������ˬ������
��վ���ƶˣ����������Ұ��������������һ�����ѵ����Ƶص㣬
��������������
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"mon28",
]));
        setup();
}

