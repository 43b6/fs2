// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
�������ڵ��͵Ĵ�Ӫ - ������� . ������Щ���Ż�����
���� , ����Żƽ�С�� , �����������µĽ𵶵��� . ����һ
����լ , Ӧ�þ�������������֮һ�Ľ����� ! ��˵����ʮ
����Ǯ , ���� , ����û����֪�����ǲƸ�����Դ . ��������
��������ɽ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/gblade/room/g1-1",
	"east" : "/open/port/room/r4-2",
]));
	set("objects",([
	"/open/port/npc/trainee":1,
	]));

  setup();
}
