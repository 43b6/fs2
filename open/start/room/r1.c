// Room: /open/start/room/r1

inherit ROOM;

void create ()
{
  set ("short", "���С·");
  set ("long", @LONG
����С·�����Զ������˸��˲��ߵĵ��ݣ�������
����������ܵľ����������������˾�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/start/room/r2",
  "north" : "/open/start/room/f22",
]));

  set("outdoors", "/open/start");

  setup();
}
