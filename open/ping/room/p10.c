// Room: /open/ping/room/p10
#include <room.h>
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "储藏室");
  set ("long", @LONG
这里是段家的储藏室, 似乎不常有人来, 灰尘到处都是, 只见墙边
的桌子上排着一个一个的箱子(box), 除此之外, 也没有别的东西了。
    北边有一道铁门(door)。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"p8",
]));

  create_door("north","铁门","south",DOOR_LOCKED);

  set("item_desc", ([ /* sizeof() ==  */
  "north" : (: look_door,     "north" :),
  "door" :  (: look_door,     "north" :),
  "box" : "一个小小精致的铜箱子, 里头似乎有些东西。\n",
  ]));

  set("search_desc", ([ /* sizeof() == 1 */
  "box" : "你打开了箱子瞧了一瞧, 发现里头装满了炮仗(firecracker)。\n若想要的话就拿(take)一些走吧。\n",
  ]));

  set("need_key", ([ /* sizeof() == 1 */
  "east" : 1,
]));

  setup();
}

void init()
{
	add_action("do_take","take");
}
int do_take(string str)
{
	object me=this_player();
	object fire=new(PING_OBJ"fire");
	if(str != "firecracker")
	  write("你要从箱子里拿什么出来?\n");
	else
	{
	  write("你小心翼翼的拿出一个炮仗揣入怀里。\n");
	  fire->move(me);
	}
	return 1;
}	
	
