// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
�������ڶ������ . ����������� , ���������������
����� , ��һ���Ƿ��ָ۵�סլ�� . ���ֽ��������������ܲ�
������ , �ΰ��������� , �����ǰ�����ҵ , ���ٸ��� . �㿴
��·�������Ǹ������ϳ���������Ц�� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r3-1",
	"east" : "/open/port/room/r3-3",
]));
	set("objects",([
	]));

  setup();
}
