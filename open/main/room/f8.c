// Room: /open/main/room/f8.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
����һ���޼ʵ�ɭ��, ������һ������, ȴ��֪��ô��ȥ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"f7",
  "south" : __DIR__"f9",
]));

  setup();
}
