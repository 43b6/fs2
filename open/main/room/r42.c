// Room: /open/main/room/r42.c

inherit ROOM;

void create ()
{
  set ("short", "平南城近郊");
  set ("long", @LONG
这里是平南城郊区，平南城就在你的西方，你看到进出平
南城的旅客，有的已不是汉家装束，你才想起: 这儿已近苗疆
远离中土，来这里的人，有的是要回中土，有的则是向往那充
满蛊毒灵药的苗疆.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L15",
  "west" : "/open/ping/room/edoor",
  "south" : __DIR__"L23",
  "east" : __DIR__"r43",
]));

  set("outdoors", "/open/main");

  setup();
}
