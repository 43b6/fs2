// Room: /u/m/moner/room/room17.c
inherit ROOM;

void create ()
{
  set ("short", "�ڷ�");
  set ("long", @LONG

��������ĳ��Ⱥ�, ���������ڷ�, ����˽����ĳ�˵��Է�, ����ͨ
���鷿, ������ˮ����������ɴ����Ʈ�Ŷ��İ���, �����Ĵ���Ҷ��
��������, һ��Ʈ��ĸо�Ϯ�������ͷ��

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room19.c",
  "west" : __DIR__"room18.c",
  "north" : __DIR__"room16.c",
"east":"/open/gblade/mroom/mrm-2/r1.c",
]));
  set("light_up", 1);

  setup();
}
