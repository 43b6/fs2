// Room: /open/prayer/room/tangi/tangi1-15.c

#include <room.h>
#include "/open/open.h"    
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�˴�������ų�Ա������������ڣ�������������ŵ�����(open door)����ȥ������
��������ŵ����䳡���������ǵ������ı���������վ�����߽׵ĸɲ���������
�ޱ���!
LONG
	);
	set("item_desc", ([
	  "south" : (: look_door,     "south" :),  
]));
	set("outdoors", "/open/prayer/room"); 
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"tangi1-14",
  "south" : __DIR__"tangi1-17",
  "north" : __DIR__"tangi1-12.c",
  "east" : __DIR__"tangi1-16",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	create_door("south","ʥ�����ľ����", "north",DOOR_CLOSED);
	setup();
	}
