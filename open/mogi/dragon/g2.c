// Room: /u/p/poloer/dragon/g2
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
  "west" : __DIR__"g3",
  "out" : __DIR__"g1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
