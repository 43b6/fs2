// Room: /open/gsword/room/gsword5-7.c
inherit ROOM;

void create ()
{
  set ("short", "��¥¥�ݿ�");
  set ("long", @LONG
�ϱ߾������ֵ�һ����ʦ ---֣ʿ�����޾� .�м�һ��ľ�� ,�൱���� ,����
�ɴ���� ,¥���������˻��� ,ԶԶ��ȥ ,ʵ��������Ŀ .���߿��˸��󴰻� ,��
�������ɽ��ĺ�԰,�ͷ����� ,���ҷ��� ,ס�ڴ˵� ,��ʵ���� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/g3-14.c",
  "down" : "/open/gsword/room/g3-12.c",
]));

  set("light_up", 1);

  setup();
}
