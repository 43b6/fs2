// Room: /open/start/room/r2
inherit ROOM;

void create ()
{
  set ("short", "���С·");
  set ("long", @LONG
����С·�����Զ������˸��˲��ߵĵ��ݣ�������
����������ܵľ����������������˾�����

LONG);

  set("outdoors", "/open/start");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/r3",
  "north" : "/open/start/room/r1",
]));

  setup();
}
