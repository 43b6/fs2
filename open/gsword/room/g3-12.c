// Room: /open/gsword/room/gsword5-7.c
inherit ROOM;

void create ()
{
  set ("short", "��¥¥�ݿ�");
  set ("long", @LONG
�м�һ��ľ�� ,�൱���� ,�ϱߵĳ��ȷֱ������ɽ�����֮�޾� ,¥��������
���� --- ֣ʿ��֮�޾� ,¥���������˻��� ,ԶԶ��ȥ ,ʵ��������Ŀ .���߿���
���󴰻� ,���������ɽ��ĺ�԰,�ͷ����� ,���ҷ��� ,ס�ڴ˵� ,��ʵ���� .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/g3-15.c",
  "up" : "/open/gsword/room/g3-13.c",
  "down" : "/open/gsword/room/g3-11.c",
]));

  set("light_up", 1);

  setup();
}
