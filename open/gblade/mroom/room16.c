// Room: /u/m/moner/room/room16.c
inherit ROOM;

void create ()
{
  set ("short", "�ڷ�");
  set ("long", @LONG

��������ĳ��Ⱥ�, ���������ڷ�, ����˽����ĳ�˵��Է�, ����ͨ
���鷿, ������ˮ����������ɴ����Ʈ�Ŷ��İ���, �����Ĵ���Ҷ��
��������, һ��Ʈ��ĸо�Ϯ�������ͷ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room17.c",
  "north" : __DIR__"room10.c",
]));
  set("light_up", 1);

  setup();
}
