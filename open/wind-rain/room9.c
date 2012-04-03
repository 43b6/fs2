// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","牌楼前");
set ("long", @LONG
    这里已到了湖的尽头，眼前是「金风细雨楼”的牌楼，围墙后面
有座巨大的楼，在湖畔雾气迷蒙下，外表蒙蒙晃晃，分不清是曙色、
黎明，还是醒的边缘。金风细雨楼是京华第一大帮，总管黑白两道，
三十八路星霜，七十一股烽烟，一百零八号连环邬的武林第一大势力
金风细雨楼总楼主向来被公认为是武林盟主。
LONG);



  set("exits", ([
            "east"  : __DIR__"room8",
            "enter"  : __DIR__"1",
                ]));

  set("objects", ([ 
  __DIR__"npc/rain-guard-door" : 3,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)
{
   string wind_rain;
if(dir=="enter" && present("wind_rain",me)){
 message_vision(HIY"雨护卫说 : 既然阁下持有本楼的风雨楼, 就是本楼的人. \n"NOR,me);
 return 1;
                                            }

        if(dir=="enter" && present("guard",environment(me)))
  {

message_vision(HIY"雨护卫说: 对不起, 这里不准外人进出. \n"NOR,me);
return 0;
  }


return 1;
}
