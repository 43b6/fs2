// Room: /open/gsword/room/g3-7.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ��С���� ,�����ɽ��ɵ����ǵ��޾� ,���ɽ����� ,���������˼�����
�ϸߵ��ɽ�������ӵ���Լ����޾� ,�������� ,ֻ��һ��˯ͨ�̆� !

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g3-8.c",
  "east" : "/open/gsword/room/g3-6.c",
]));

  set("light_up", 1);

  setup();
}
