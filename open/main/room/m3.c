// Room: /open/main/room/m3.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/junkman.c" : 2,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"m2",
  "south" : __DIR__"m9",
  "east" : __DIR__"m4",
]));

  setup();
}
