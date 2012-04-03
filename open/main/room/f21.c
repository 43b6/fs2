// Room: /open/main/room/f21.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 2,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s26",
  "north" : __DIR__"f18",
  "west" : __DIR__"f20",
  "east" : __DIR__"f22",
]));

  setup();
}
