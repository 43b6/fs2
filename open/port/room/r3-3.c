// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
�������ڶ������ , ��һ���Ƿ��ֵ�סլ�� , �����ֵ���
����Ȼ��Щ���� . ���ߴ��ݴ��������ʵĶ����� , ����һ��ѧ
�� , �������ֲ�ʶһ�� , �Ͻ���ȥ������ !

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r3-2",
	"east" : "/open/port/room/r3-4",
	"north" : "/open/port/room/r3-5",
]));
	set("objects",([
	]));

  setup();
}
