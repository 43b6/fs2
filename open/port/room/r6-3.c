// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��ǽ��");
  set ("long", @LONG
�������ڳ�ǽ�ߵ�С���� . �����е�שʯ���ɵĽ������ų�
ǽ���� , �����˳�Ž��ݵ��ϳ�ǽ . �ϱ���������ͷ�칫�ĵ�
�� , ������������Ա�ǵ���Ϣ�� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r6-4",
	"south" : "/open/port/room/r6-5",
	"west" : "/open/port/room/r6-2",
	"northup" : "/open/port/room/r6-6",
]));
	set("objects",([
	]));

  setup();
}
