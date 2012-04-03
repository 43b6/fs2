#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "柳家宝库");
  set ("long", @LONG
一个位于丛林后的山洞，不过在山洞的入口加有一个大门，若没有
钥匙是不能进去的，

LONG);

  set("no_transmit", 1);
  set("light", "1");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"goroom.c",
]));

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="east"&&present("bluekey",me))
  {
  return 1;
}
  else return 0;
}
