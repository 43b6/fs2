// open/killer/room
// 2001.11.5 修改，让玩家如果解谜到此处search，将可以发现lu的儿子
// 此间房间会利用到  me->move("/open/killer/ninja/sonrm.c");
#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","红叶组");
  set ("long", @LONG
这里是黑牙联总坛大厅右翼，也是黑牙联最强的红叶暗杀组的所在地。
江振武在此处，随时待命出击，并且培养自己的专属杀手。
一身野心并不在叶秀杀之下，但是叶秀杀并不以为意。
因为江振武身上所散发出的霸气，正是叶秀杀所需要的。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east":__DIR__"redr3",
  "north":__DIR__"redr1",
]));

  set("objects",([
        "/open/killer/npc/rednpc3.c" : 1,
        ]));  
  setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();
  int max;

  if (me->query_temp("firstpart") == 2 )
  {
    message_vision("$N因为对此处的感到非常怀疑，居然发现了一个开关。\n", me); 
    message_vision("$N往这一个开关押下去...................\n", me); 
    tell_object(me,"一阵冲撞力将你弹飞，落入陷阱之中一直坠落。。。。。\n");
    me->move("/open/killer/ninja/find/sonrm.c");
    return 1;
  }
  else 
    return 0;
 }
