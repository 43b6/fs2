// Room: /u/p/poloer/dragon/a3
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
  __DIR__"npc/mob3.c" : 2,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"a6",
  "west" : __DIR__"a2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
