

inherit ROOM;
void create()
{
  set ("short", "格斗场");
  set ("long","
    这边挤满了一些练武份子，这里场地之大，可见这个
组织非常庞大而且严格，在这里练武的人个个挥汗如雨，
都充满了斗气，看来动不起的样子。

 ");
   set("exits", ([
   "north"       : __DIR__"r8.c",
   "south"      : __DIR__"r16.c",
   
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/mercenary":2,
]));
  set("light_up", 1);
  setup();
} 

