// Room: /u/p/poloer/dragon/a5-1
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
  __DIR__"npc/mob2.c" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"a5-2",
  "south" : __DIR__"a5",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
