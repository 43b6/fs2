inherit ROOM;

void create ()
{
  set ("short", "����ͨ��");
  set ("long", @LONG
����һ, ����δ��....
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"i6.c",
]));

  setup();
}
