// Room: /u/u/unfinished/room/quest.c
inherit ROOM;

void create ()
{
  set ("short", "����������");
  set ("long", @LONG
��������Ե�����е�����
LONG);

  set("outdoors", "/u/u");
  set("pkroom", 1);
  set("exits", ([ /* sizeof() == 4 */
  "q1" : __DIR__"is1.c",
  0 : "/u/u/unfinished/workroom",
  "test" : __DIR__"test.c",
  "out" : "/u/u/unfinished/workroom.c",
]));

  setup();
}
