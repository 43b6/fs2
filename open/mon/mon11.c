inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ɽС��");
        set ("long", @LONG
�ߵ����·��һת�������һ��������ܸ���ǰ��������·��
Ҳ��������������ǰ�ߣ�·�������ߣ�ǰ���·�Ѿ�������С���ˣ�
���ǻ��ž����Ṧ������������·���ᱶ�г�������ͨ��ɽ�ϵ�С·
��������ɼ���
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north" : __DIR__"mon12",
        "west"  : __DIR__"mon10",
]));
        setup();
}

