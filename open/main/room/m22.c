// Room: /open/main/room/m22.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s22",
  "south" : __DIR__"m31",
  "west" : __DIR__"m21",
]));

  setup();
}
