// Room: /open/gsword/room/gsword1-4.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ����ͨ������ ,�����ɽ������� ,������ .�׻�˵ :���������� ,����
������ ,û�кõ��䱸��ô�������������� ?������������ ,�ϱ��ǻ����� .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/g1-8.c",
  "north" : "/open/gsword/room/g1-7.c",
  "east" : "/open/gsword/room/g1-5.c",
]));

  set("light_up", 1);

  setup();
}
