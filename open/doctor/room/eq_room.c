// Room: /open/doctor/room/eq_room.c made by adam..


inherit ROOM;

void create ()
{
  set ("short", "�����Ϣ��");
  set ("long", @LONG

�����������Ծ������Ϣ�����ڸ���������ҽ�Ƶ��㣬
����������õ���Ϣ������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"2",
]));

  set("no_fight", 1);

  set("light_up", 1);
  set("no_magic", 1);

  setup();
}


