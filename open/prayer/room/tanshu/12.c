// Room: /open/prayer/room/tanshu/12.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG

    �����������ŵ����䳡,�������������ۼ�����ϰ��,�������
�Ժ������д�����,�����߾��������ŵ����ſ�. 

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"21.c",
	"south":__DIR__"2-door",
  "north" : __DIR__"11.c",
  "east" : __DIR__"22.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
#include <room.h>
#include "/open/open.h"
  "/open/prayer/npc/trainee4" : 2,
]));
	set("no_clean_up", 0);
        create_door("south","ʥ����ƾ��ִ���", "north",DOOR_CLOSED);


	setup();
	}
