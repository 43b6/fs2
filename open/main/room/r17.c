// Room: /open/main/room/r17.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
����һ������ϡ�ٵ�С·,ֱֱ����������ȥ,˭Ҳ��֪����ͨ
����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/main/room/r16",
      "east" : "/open/killer/room/firstrm",
]));

  set("outdoors", "/open/main");


  setup();
}
