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
  "southeast" : "/open/gsword/room/g2-9.c",
  "west" : "/open/gsword/room/g4-14.c",
]));

  setup();
}
