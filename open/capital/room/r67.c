// Room: /open/capital/room/r67.c

inherit ROOM;

void create ()
{
  set ("short", "����ֿ�");
  set ("long", @LONG
����һ������·�ڣ�����Ķ����Ǳ�ȵ��ͬ����ҽ�߹������ڵ�,
���ߵ�������ͬ������������֮���ڡ�������ҽ������������Ȥ�Ļ�
������ȥ���ơ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r69",
  "north" : __DIR__"r66",
  "west" : __DIR__"h04",
  "east" : __DIR__"h06",
]));
  set("outdoors", "/open/capital");

  setup();
}
