inherit ROOM;

void create ()
{
  set ("short", "空地");
  set ("long", @LONG
来到了屋前的空地，遍地所及全都是茶花，品种很多，令人
目不遐给，你看到屋内坐着一个人在看书，应该就是你想要找的
那个人了吧。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"d1",
  "north" : __DIR__"d3",
]));

  set("no_transmit",1);
  setup();
}
