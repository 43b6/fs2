// Room: /u/p/poloer/dragon/g5
inherit ROOM;

void create ()
{
  set ("short", "ħ����һ¥");
  set ("long", @LONG
������ħ�����һ¥������һƬ�ںںڵģ����ֲ�����ָ���ֲֿ�
�ġ���ʱ����������Ľ�����

           ���� ���١���

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"g51",
  "east" : __DIR__"g4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
