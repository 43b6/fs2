// Room: /open/main/room/f6.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
����һ���޼ʵ�ɭ��, ���ߺ�ѹѹ��һƬ���֣�����������ϡ�ٵĵط�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f4",
  "south" : __DIR__"f7",
  "west" : __DIR__"f5",
]));

  setup();
}
