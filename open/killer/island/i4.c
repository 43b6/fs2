inherit ROOM;

void create ()
{
  set ("short", "����ͨ��");
  set ("long", @LONG
����һ, ����δ��....
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"i3.c",
  "south" : __DIR__"i5.c",
]));

  setup();
}
