inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ɽС��");
        set ("long", @LONG
С�������ǻ����Ӳݣ�ͨ������ɽ�ϵ�·;�Ե���Щ���ߣ�����
��һ����ͤ��ƣ�۵����˶�����������Ϣһ��������ɽ�ϵĵ�·�Ƕ�
�ߵ�С·��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "south" : __DIR__"mon06",
        "east"  : __DIR__"mon08",
        "west"  : __DIR__"mon09",
]));
        setup();
}

