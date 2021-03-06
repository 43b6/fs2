// Room: /open/capital/room/r27.c

inherit ROOM;

void create()
{
	set("short","日落驰道");
	set("long",@LONG
城西的车马大道。为了方便大批禁卫军的通行特地开辟的石板大道
。路面相当宽敞，比一般胡同大上五倍有余，想想十几年前与关外异族
打仗时军队在这来往奔驰的气势，就觉得神往不已。路旁种了两排大榕
树，这是和城东日升驰道唯一的不同。

LONG);

  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"r28",
  "north" : __DIR__"r26",
]) );

  set("gopath", "north" );

  setup();
}
