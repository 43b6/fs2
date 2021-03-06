// Room: /open/main/room/r6.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set( "build", 6 );
	set("long", "走到这里,你已渐渐远离人迹,走在宽广的蜀州盆地上,却让
你有一种苍茫的感觉,道路在此通向北方或南方,而蜀山,已经在
你北方不远处.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r4",
  "south" : __DIR__"r9",
  "west" : __DIR__"m1",
  "east" : __DIR__"F7",
]) );

  set("outdoors", "/open/main" );

  setup();
}
