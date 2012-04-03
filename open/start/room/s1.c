// Room: /open/start/room/s1.c

inherit ROOM;

void create ()
{
  set ("short", "凌云村");
  set ("long", @LONG
平静安详的村庄，两旁见到的都是平凡的民舍，
没有什么特殊的建筑，远向南方望去是一片绿油油的
稻田，有几个农夫正在辛勤的耕作。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/startroom",
  "east" : "/open/start/room/s2",
]));

  set("outdoors", "/open/start");

  setup();
}
