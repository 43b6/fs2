inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��ͤ");
        set ("long", @LONG
����һ�������͵�ͤ�ӣ���ɫ��ͤ������ɫ���ݶ���ͤ�л��ڷ�
��һ��ʯ������������СԲ�Σ��ó�;���۵������ǿ����ڴ˺úõ�
��Ϣ��
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"  : __DIR__"mon07",
]));
        setup();
}

