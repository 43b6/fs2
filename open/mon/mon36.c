inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "���ҵ�");
        set ("long", @LONG
������һ�������ͣ������ڵ����˳���ɽ�ϵ����ҵ�������һƬ
�����ҵ��ϣ������ɽ�紵���㣬�����վ��ס�ţ�����Ŀ�����
���ڿ���֮�У���ֻ�ܼ�������������ȴʼ�տ�����ɽ����
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon37",
        "down"    : __DIR__"mon35",
]));
        setup();
}
