// Room: /u/p/poloer/dragon/a4
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob1.c" : 3,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"a7",
  "east" : __DIR__"a5",
  "north" : __DIR__"a1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
