// Room: /u/p/poloer/dragon/g3
inherit ROOM;

void create ()
{
  set ("short", "ħ����һ¥");
  set ("long", @LONG
������ħ�����һ¥������һƬ�ںںڵģ����ֲ�����ָ���ֲֿ�
�ġ���ʱ����������Ľ�����

           ���� ���١���

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob7.c" : 2,
  __DIR__"npc/mob8.c" : 2,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g4",
  "east" : __DIR__"g2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
