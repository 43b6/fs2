inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
��������������С����ֻ�����紵��������������ɳɳ��
�죬�������ǰ��������ԼԼ���Կ���һ�����ӣ�������Ҫǰȥ
һ̽������
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "back" : __DIR__"aa52",
  "north" : __DIR__"d2",
]));

  set("no_transmit",1);
  setup();
}
