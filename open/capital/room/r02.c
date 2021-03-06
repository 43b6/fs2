// Room: /open/capital/room/r02.c

inherit ROOM;

void create ()
{
  set ("short", "环宫大道");
  set ("long", @LONG
走到这儿, 越来越能感受到皇朝严肃的气氛与豪华, 仔细一看路上
的石板, 竟然也雕了复杂的图案, 两旁建筑高耸, 仰望之下不禁升起敬
畏的心情。由于这里是交叉路口, 因此街道不时有巡逻的军队走过, 显
的气氛十分紧张。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/r01",
  "south" : "/open/capital/room/r16",
  "east" : "/open/capital/room/r03",
]));

  set("gopath", "east");

  setup();
}
