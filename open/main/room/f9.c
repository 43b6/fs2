// Room: /open/main/room/f9.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f8",
  "south" : __DIR__"f10",
  "east" : __DIR__"m1",
]));

  setup();
}
