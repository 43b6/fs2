// Room: /u/p/poloer/dragon/a10
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�
    ǰ���п���΢΢�ĵƹ⣬��ʲô������?

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ring-are",
  "north" : __DIR__"a8",
]));

  setup();
}
