// Room: /open/capital/room/r12.c

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
  "west" : "/open/capital/room/r11",
  "east" : "/open/capital/room/r13",
]));

  set("gopath", "east");

  setup();
}
