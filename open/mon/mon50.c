inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���쾳");
        set ("long", @LONG
�����������ľ�ɫ�������������������ˣ��������������
��������������ԣ���ɫ���Ź�ֱͨ��ʣ������������ľ�ɫ֮�У�
�㲻����Щ��ʧ�ˣ�ȴ���������������л�����ʵ֮�С�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "down"    : __DIR__"mon42",
]));
        setup();
}
