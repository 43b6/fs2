// Room: /open/main/room/L9.c

inherit ROOM;

void create()
{
	set("short", "台地");
	set("long", "这是一块微微高起的台地，稀稀疏疏的长了起几丛杂草，
几块石块杂乱分部，更显得这里的荒凉.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L19",
  "west" : __DIR__"r38",
  "north" : __DIR__"m28",
  "east" : __DIR__"L10",
]) );

  set("outdoors", "/open/main" );


  setup();
}
