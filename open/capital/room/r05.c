// Room: /open/capital/room/r05.c

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
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"convert_room.c",
  "west" : __DIR__"r04",
  "east" : __DIR__"r07",
]));
  set("gopath", "east");

  setup();
}
