// Room: /u/o/onion/room/r_room0.c

#include <room.h>

inherit ROOM;

void create()
{
	set("short", "�ܼҷ�");
	set("long", @LONG
����������ڵĴ�ܼ���ס�ĵط�,��ܼҸ��������������������ʮ�ڵ��������,
��С���鶼���ܼҵĹ�Ŀ,��˵�λҲ�㲻��,���䷿�䲼�õ�һ˿��ƈ,�����������
������,�ɴ˿�֪��ܼҵ�Ϊ�˴����Ƕ๢ֱ��...
    ������һ��ľ��(door).
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room1",
	]));
        set("item_desc", ([ 
        "door" : "һ�ȼ�ʵ��ľ��,��ͷ���Ÿ��ӵĻ���.\n",
        ]));
        set("objects",(["/u/o/onion/npc/steward" : 1]));
	setup();
        create_door("north","ľ��","south",DOOR_CLOSED);
}
