// Room: /open/main/room/m7.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/main/room/F12",
 "north" : __DIR__"M14",
  "west" : "/open/main/room/m6",
  "east" : "/open/main/room/r12",
]));

  set("outdoors", "/open/main");

  setup();
}
