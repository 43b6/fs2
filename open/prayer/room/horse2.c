//open/prayer/room/horse2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "马房");
  set ("long", @LONG

	    这间的骏马是专属副教主及军师的，放眼
	看去都是一些闻名的骏马，看来西域的良驹不
	亚于中原的马匹．

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/horse3",		//`马房
	"west" : "/open/prayer/room/horse5",		//`马房
    //  "north" : "/open/killer/home/sdr1",
]));

  setup();
}
 
