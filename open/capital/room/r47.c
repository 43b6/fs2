// Room: /open/capital/room/r47.c

inherit ROOM;

void create ()
{
  set ("short", "�����۵�");
  set ("long", @LONG
�Ƕ��ĳ������������м���ľ�������ľ�ݣ�����������ǰ��Ѳ
�ߣ��������ƺ��Ǹ�����Ҫ�ĵط������뿿��ȥ����������ȴ�����㣬
�����㿿����

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/guardh.c",
  "south" : "/open/capital/room/r46",
  "north" : "/open/capital/room/r48",
]));

  set("gopath", "south");

  setup();
}
