// Room: /open/main/room/r16.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
����һ������ϡ�ٵ�С·,ֱֱ����������ȥ,˭Ҳ��֪����ͨ
����.
LONG);

  set("exits", ([ /* sizeof() == 3 */
   "west" : "/open/capital/room/D02",
  "south" : "/open/main/room/s18",
  "east" : "/open/main/room/r17",
]));

  set("outdoors", "/open/main");


  setup();
}
