inherit ROOM;

void create ()
{
  set ("short", "����ͨ��");
  set ("long", @LONG
����һ, ����δ��....
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"i2.c",
]));

  setup();
}
