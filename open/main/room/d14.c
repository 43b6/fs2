// Room: /open/main/room/d14.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
	set("long", "这儿是一望无际的撒哈拉沙漠，四周只现出闪闪发光的海市蜃楼
东边一道高高的围墙, 似乎就是所谓的万里长城吧?
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"d7",
  "south" : __DIR__"p6",
  "west" : __DIR__"d13",
]) );

  set("outdoors", "/open/main" );


  setup();
}
