
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","古堡二楼");
        set ("long","四周充满了令人几乎窒息的气氛，阴森森的鬼火诡异的
一闪一灭着，仔细一看似乎还有不少白骨散落在地上，
不禁使人起了鸡皮疙瘩。看来这里是一条东西向的长廊。
西边似乎有一泛着诡异绿光的房间？
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room30",
            "west" :  __DIR__"room32",
          
      ]));
      set("objects",([ /* sizeof() == 1 */
           __DIR__"npc/mob6" : 1,
      ]));

       

        setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="west"&&present("ghost",environment(me)))
  {

message_vision(HIY"夺魂魔冷笑道:「你以为这里是你家？”\n"NOR,me);

return 0;
}
return 1;
}
