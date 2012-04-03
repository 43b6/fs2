//open/prayer/room/train1-12

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛练武场");
  set ("long", @LONG

	    你眼前这位圣火教徒，正练着先天乾坤功
	，看他用招虎虎生风，看来也不是一个好惹的
	家伙． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//弟子
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/train1-7",		//`练武场
	"south" : "/open/prayer/room/train1-17",		//`练武场
	"east" : "/open/prayer/room/train1-11",		//`练武场
	"west" : "/open/prayer/room/train1-13",		//`练武场
]));

  setup();
}
 
