// Room: /u/r/ranko/room/sh3.c
inherit ROOM;

void create ()
{
  set ("short", "���");
  set ("long", @LONG
һ�乩����������С�꣬������˼������ӹ����������죬
���ٴ����ڹ�����Ϻ�������ȱ��裬С�һ���������������
�ֲ�Ʒ֮�⣬�౸��һЩС�˹���ȡ�á�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer3.c" : 1,
]));
  set("light_up", 1);

  setup();
}
