// Room: /u/o/onion/room/w_room0.c

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "�����������");
	set("long", @LONG
��������߽���,�㿴��һ������������,���������Ϻõ��ľ�ذ�,���Ե����
�ذ��յĹ�ɼ���,�ƺ����Ժ�����Ŀ����Լ���Ӱ��.
    ����һֱ��ǰ����,ǰ���ƺ����������Ŀͷ�.
    �Ϸ���һ��ľ��(door).
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
  "door" : "һ�ȼ�ʵ��ľ��,��ͷ���Ÿ��ӵĻ���.\n",
]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"room0",
  "south" : __DIR__"room2",
  "east" : __DIR__"room3",
]));
	set("valid_startroom", "1");

        create_door("south","ľ��","north",DOOR_CLOSED);
	setup();
}
