// Room: /open/poison/room/snake_hole2
inherit ROOM;

void create ()
{
  set ("short", "�߶�");
  set ("long", @LONG
�������������ס���߶�, �Ĵ����ǲ�ͬ����Ķ��ߡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"snake_hole",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/snakeking" : 1,
]));

  setup();
}
