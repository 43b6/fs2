// Room: /u/d/devils/school2.c

#include <room.h>
#include <ansi.h>




inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
���߽�������ݵ����䳡,���Ŵ����ų��ʣ�����������װ�����ĺ���
�����������ͦ�Գ�һ��Ӣ��֮�����������в��Ծ��ÿֻ�������...
�˴�����ֱ�߱���������ݴ�����������������ݴ���(open door)
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"school5",
  "north" : __DIR__"school3",
  "west" : __DIR__"school1",
  "east" : __DIR__"school7",
]));
        create_door("west", HIR"�λ��������"NOR, "east", DOOR_CLOSED);

       set("outdoors", "/open/wu");
	setup();
}
