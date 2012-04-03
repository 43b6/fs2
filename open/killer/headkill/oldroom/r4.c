#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","兵器库");
  set ("long", @LONG
这里是黑牙联平时储存兵器的地方，在这里可以看到不少的兵器
但是大多是暗器，只有黑牙联的弟子可以在这里领取兵器，但是必须
先向掌理兵器的兵器使报备(report)，想知道有什么兵器就用(list)。


如今在你眼前的是一大堆落石，填满了这一间兵器室，
当年的兵器使，幸好有随叶秀杀一起脱离，目前仍在杀手总坛的兵器室中。
忽然你感觉南方似乎有人的气息存在？
不会吧？有人会居住在这里吗？
记得叶秀杀曾经提过，当年的兵器室有机关连到训练室，
不知道机关是不是有被破坏掉，在这里找看看吧。。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"west":__DIR__"r3",
]));

/*
  set("objects",([
	"/open/snow/npc/manager":1,
	]));
*/

  setup();
}

void init()
{ 
   add_action("do_search","search");
}

int do_search()
{
   object me;
   me = this_player();
   tell_room(me,""+me->query("name")+"找到了机关，发现了一条出路。\n");
    set("exits", ([
	"west":__DIR__"r3",
	"south":__DIR__"r5",
]));
   return 1;
}
