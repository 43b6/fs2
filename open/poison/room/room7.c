// Room: /open/poison/room/room7
inherit ROOM;

void create ()
{
  set ("short", "大殿门口");
  set ("long", @LONG
你正站在大殿门口，整个殿堂为黄色琉璃屋瓦，赤红色
的墙壁，两侧有以如意云纹为柱础的盘龙柱，让人感到金碧
辉煌，气象万千，如皇宫般宏大壮观。南边则有一宽广朝下
的石阶，石阶有一由汉白玉铺成的斜坡，其上有龙凤卷云的
浮雕，石阶两旁有雕刻精美的玉栏杆。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1",
  "southdown" : __DIR__"road16",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/fighter" : 2,
]));
  set("light_up", 1);

  setup();
}
