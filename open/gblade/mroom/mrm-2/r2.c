inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "浴室");
  set ("long", @LONG

这里是卧房内的浴室，青瓷铺成的地板上沾满了水迹，一个约水池大小
的浴池占满了整个房间，轻纱笼罩在一旁令你有一种蒙胧之感，水气氲
绕四周，百花飘落在浴池内。

LONG);

set("exits", ([ /* sizeof() == 1 */
"west":__DIR__"r1.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  set("objects", ([ /* sizeof() == 2 */
 "/daemon/class/blademan/npc/maid1.c" :2,
 "/daemon/class/blademan/npc/haing.c" :1,
]));
  set("light_up", 1);
create_door("west","萤珀石屏风","east",DOOR_CLOSED);
  setup();
}
     void init()
     {
    add_action("do_cmd","cmd");
    }
      int do_cmd(string arg)
   {
     object user;
     user=this_player();
   this_object()->kill_ob(user);
     return 1; 
}
