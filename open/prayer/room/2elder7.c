//open/prayer/room/2elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

	    这里就是执法长老的办公室了，但是没看
	到长老的人，看来又有人处犯了教规，而长老
	又在执法了．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/2elder6",		//`长老房
	"west" : "/open/prayer/room/2elder4",		//`长老房
]));
  set("light_up", 1);

  setup();
}
 
