// Room: /u/p/poloer/dragon/npc/a2
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"a1",
  "south" : __DIR__"a5",
  "out" : __DIR__"enterroo",
  "east" : __DIR__"a3",

]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
