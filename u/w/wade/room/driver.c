inherit ROOM;

void create ()
{
  set ("short", "LPC 说明之 简介 -- driver");
  set("long", @LONG

This is the C program which is the game.  It accepts incoming sockets
(links to other computers), 解释由 mudlib 定义的 LPC 程式, mud 中的物
件保持在记忆体中. 周期性的清掉记忆体中没用的物件等等事情.
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
