inherit ROOM;
void create()
{
   set ("short","小道");
  set ("long",@LONG
这里看来是这条道路的尽头 ,眼前便是一面耸立的山壁 .西方是一
间民房 .从房中散发出来的霸气和杀气 ,你不但明了了狼只安静的原因
 ,也同时知道这其中的人物必不简单 .
LONG);


  set("outdoors","/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wolf12.c",
  "enter" : __DIR__"wolf16.c",
]));

  setup();
}
