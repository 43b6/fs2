// Room: /open/poison/room/snake_hole.c
inherit ROOM;

void create ()
{
  set ("short", "ɽ���");
  set ("long", @LONG
������ɽ�����, ���������˲�ͬ�Ķ���, ��˵��
һ��������ʵ���߶���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"snake_hole2",
  "out" : __DIR__"cave3",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/bigsnake.c" : 1,
]));

  setup();
}
