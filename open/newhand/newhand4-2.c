#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIC"狂想空间小秘技天地"NOR);
  set ("long","这房间是介绍一些狂想的在玩时的一些小秘技!!
  提供给新玩家参考之用!!!
  秘技三：数量指令!!!
  有时候我们向师父学技能时要打learn dodge from master....
  这样一直打很累..我们可以改成learn 30 dodge from master..
  就会等于learn dodge from master 三十次.....
  买东西也是buy 10 tea from vendor就是一次买十杯茶!!!!!
  或是利用do的指令也可以哦!!!!

  秘技四：解谜!!!
  例如：除了练功之外狂想空间有一谜可以去解,打quests就知道了!!!
  若要详细的解法可以到狂想的专属讨论区看看!!!!
  中原资管(140.135.112.2) 有fs_mud 的board

\n");
  set("exits", ([
  "north" : __DIR__"newhand4-1",
  "south" : __DIR__"newhand4-3",
               ]));
  set("light_up", 1);
  setup();
}

