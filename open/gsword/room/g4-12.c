// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һ������ ,�����о������ͷۺ��õ�� ,�������� ,������ٱ .
������� ,�������Ƿ��� ,��֧������������ ,���軨�� ,�����˼�һ����
�� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g4-13.c",
]));

  setup();
}
