// Room: /open/main/room/f14.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f13",
  "south" : __DIR__"r14",
  "east" : __DIR__"f15",
"north" : __DIR__"p15",

]));

  setup();
}


