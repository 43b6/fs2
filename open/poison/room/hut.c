// Room: /u/r/ranko/hut.c
inherit ROOM;

void create ()
{
  set ("short", "Сé��");
  set ("long", @LONG
һ����é�ݴ�ɵ�é�ݣ�����ѷ���һЩ����ƺ���ũ���Ƕѷ�
���ߵĵط�������С������ˣ�ĳ�����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"f5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/child.c" : 2,
]));

  setup();
}
