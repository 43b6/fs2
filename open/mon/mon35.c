inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ҵ�");
        set ("long", @LONG
������һ�������ͣ������ڵ����˳���ɽ�ϵ����ҵ�������һƬ
�����ҵ��ϣ������ɽ�紵���㣬�����վ��ס�ţ�����Ŀ�����
���ڿ���֮�У���ֻ�ܼ�������������
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon36",
        "down"    : __DIR__"mon34",
]));
        setup();
}
