// Room: /open/gsword/room/gsword5-7.c
inherit ROOM;

void create ()
{
  set ("short", "һ¥¥�ݿ�");
  set ("long", @LONG
�м�һ��ľ�� ,�൱���� ,ͨ��¥�������˼�����ʦ�ֵ����� .¥����������
���� ,ԶԶ��ȥ ,ʵ��������Ŀ .���߿��˸��󴰻� ,���������ɽ��ĺ�԰,�ͷ�
���� ,���ҷ��� ,ס�ڴ˵� ,��ʵ���� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g3-12.c",
  "south" : "/open/gsword/room/g3-6.c",
]));

  set("light_up", 1);

  setup();
}
