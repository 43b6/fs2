// Room: /u/p/poloer/dragon/a8
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob3.c" : 2,
  __DIR__"npc/mob2.c" : 2,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"a10",
  "east" : __DIR__"a9",
  "west" : __DIR__"a7",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
