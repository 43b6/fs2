// Room: /open/capital/room/r04.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
���������������ڵĴ��, ���ʵ�Χǽ�ͻ����Ļ�ʯ, �����ĳ�¥
���г�һ��ׯ�����µ�����, ������ס�Ļʹ���λ�ڱ���, �������
�Ľֵ����Գ������ʹ������ɡ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r03",
  "east" : "/open/capital/room/r05",
]));

  set("gopath", "east");

  setup();
}
