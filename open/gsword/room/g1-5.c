// Room: /open/gsword/room/gsword1-4.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ����ͨ������ ,�����ɽ������� ,������ .�׻�˵ :���������� ,����
������ ,û�кõ��䱸��ô�������������� ?�ɽ���˵�ǽ��� ,�������ڲ���
��ʽ�����Ľ��뱸 ,������������Ҳ��һӦ��ȫ .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g1-6.c",
  "east" : "/open/gsword/room/g1-3.c",
]));

  set("light_up", 1);

  setup();
}
