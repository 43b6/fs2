#include <room.h>
inherit ROOM;
void create()
{
        set("short", "ɽ��");
	set("long", @LONG
�������ͱ����ɽ������Ȼ˵�Ǹ�ɽ�����������Ƕ��ɾ��ģ�����
���㻹�������������ĵ�ˮ���������߾Ϳ��Գ�ɽ���ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
            "west"  : __DIR__"cave1",
            "north" : __DIR__"cliff",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
	setup();
}


