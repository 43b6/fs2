// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
����������һ�����µ�С��԰�� ,��÷���� ,���ɴ�� ,���õļ���
���� ,����������ԧ��������� ,��������ֻ�׺� .����һ��С�ſ�Խ��
������ .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g4-13.c",
  "east" : "/open/gsword/room/g4-14.c",
]));

  setup();
}
