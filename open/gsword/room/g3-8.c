// Room: /open/gsword/room/g3-7.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ��С���� ,�����ɽ��ɵ����ǵ��޾� ,���ɽ����� ,���������˼�����
�ϸߵ��ɽ�������ӵ���Լ����޾� ,�������� ,ֻ��һ��˯ͨ�̆� !

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/gsword/room/g3-9.c",
  "south" : "/open/gsword/room/g3-10.c",
  "east" : "/open/gsword/room/g3-7.c",
]));

  set("light_up", 1);

  setup();
}
