#include <room.h>
inherit ROOM;
void create()
{
        set("short", "ɽ��");
	set("long", @LONG
�������ͱ����ɽ������Ȼ˵�Ǹ�ɽ�����������Ƕ��ɾ��ģ�����
���㻹�������������ĵ�ˮ����
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
            "south"   : __DIR__"water2",
            "north" : __DIR__"cave1",
]));
	setup();
}


