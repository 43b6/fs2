// Room: /u/l/lotus/girl/tin3.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������յ���λεĻ���, ɷ�Ǻÿ���������һ��¥��, ����ͨ��
������Ϣ�ķ���, ��ò�Ҫ�Ҵ�����, �����ŵĿ���Ƣ����ܲ���...
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"guest2.c",
  "west" : __DIR__"w1.c",
  "east" : __DIR__"tin4.c",
]));
  set("light_up", 1);

  setup();
}
