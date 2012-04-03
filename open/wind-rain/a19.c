// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIB"饰夜天"NOR);
set ("long", @LONG
一入此室，光线仿佛都被吞噬了一般，清凉如夜，忽见点点莹光， 
以为是星光浪漫，却是狼眼觊觎，这里便是金风细雨楼一楼楼主的
三大守护天将之一所踞卫的饰夜天，若要见到楼主，就必需先将他
打倒。
LONG);



  set("exits", ([
            "north"  : __DIR__"a13",
            "south"  : __DIR__"a12",
            "enter"  : __DIR__"a18",
                ]));

  set("objects", ([ 
  __DIR__"npc/charn-kai" : 1,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter" && present("charn-kai",environment(me)))
  {

message_vision(HIY"张凯说: 对不起, 楼主正在休息. \n"NOR,me);

return 0;
}
return 1;
}
