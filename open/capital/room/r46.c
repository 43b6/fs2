// Room: /open/capital/room/r46.c

inherit ROOM;

void create ()
{
  set ("short", "�����۵�");
  set ("long", @LONG
�����и�С�㳡���㳡���м���Сé���ݡ����԰���һЩũ�ߣ���
�����ƺ��Ǵ��������õġ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/farm",
  "south" : "/open/capital/room/r45",
  "north" : "/open/capital/room/r47",
]));

  set("gopath", "south");

  setup();
}
