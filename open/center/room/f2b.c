// Room: /u/l/lotus/girl/f2b.c
inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
������յ���λεĻ���, ɷ�Ǻÿ�. ������һ�ȴ�, ����Կ�
������ľ�ɫ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"f2c.c",
  "east" : __DIR__"f2a.c",
]));
  set("light_up", 1);

  setup();
}
