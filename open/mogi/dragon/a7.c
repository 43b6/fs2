// Room: /u/p/poloer/dragon/a7
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
	set( "build", 19 );
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob3.c" : 3,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"a8",
  "north" : __DIR__"a4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
