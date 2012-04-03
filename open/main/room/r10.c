// Room: /open/main/room/r10.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "这里是从驿站通往北卢关必经的要道, 东边是一片树林, 西边则是
一座高高耸立的山头，是道教的发源地昆仑山。
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r12",
  "north" : __DIR__"r7",
  "east" : __DIR__"f11",
]) );

  set("outdoors", "/open/main" );


  setup();
}
