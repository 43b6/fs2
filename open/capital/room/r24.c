// Room: /open/capital/room/r24.c

inherit ROOM;

void create ()
{
  set ("short", "����۵�");
  set ("long", @LONG
��������С·�ν��ڳ۵��ϡ�·�����˸�Сľ������д�š�ܽ�غ���
��������Ҫ��Ҫ��ȥ���Ƶ�ͬʱ����һȺˮ��Ӻ��ķ��������ʣ���
��ʹ����ȥ��������ĳ嶯��

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r25",
  "north" : __DIR__"r23",
  "east" : __DIR__"lake1",
]));
  set("gopath", "north");

  setup();
}
