inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�Ӱ���");
        set ("long", @LONG
һ��С�ӳ����������ǰ����ˮ�峹�Ŀ��Լ��ף�����С����Ȼ
��������ȥ����˵������������ģ�������㲻����ȥ�˺����ǡ��Ӱ�
�Ի�����С�ţ���ͨ������ɽ��Ψһ��һ���š�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "south" : __DIR__"mon04",
        "north" : __DIR__"mon06",
]));
        setup();
}

