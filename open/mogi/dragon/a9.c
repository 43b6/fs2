// Room: /u/p/poloer/dragon/a9
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
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"a8",
  "north" : __DIR__"a6",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
