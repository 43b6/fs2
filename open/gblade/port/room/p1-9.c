// Room: /open/gblade/port/room/p1-9.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
��·���쵽���ѽ����˳ǽ� , ·������Ҳ������� , ֻ��
���������ڴ������� , ��һ�㵶�Ͳ�ͬ���� , �������������
һ�ѻƽ�С�� , ���Ż��� , ���� , ������������֮һ�Ľ���
���ڸ��� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"p1-7",
  "east" : __DIR__"p1-10.c",
]));
set("objects",([
	"/open/gblade/port/npc/trainee":1,
	]));

  setup();
}
