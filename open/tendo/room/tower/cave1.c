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
            "south" : __DIR__"cave",
            "east"  : __DIR__"cave2",
]));
	setup();
}



