
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "楼梯");
  set ("long", @LONG
这里有一道木制的楼梯,看起来可以通到二楼,但是在楼梯前却站
着一个恶鬼,手拿着大刀,以不怀好意的眼神看着你。
LONG);
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"room10",
  "west" : __DIR__"room19",
  "up" : __DIR__"room24",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/sky-ghost.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
 object ob;
 me=this_player();
 ob=this_object();
        if(dir=="up"&&present("ghost",environment(me)))
  {

message_vision(HIY"天邪鬼对$N怒喝 : 干什么！？\n"NOR,me);
 ob->kill_ob(me);

return 0;
}
return 1;
}
