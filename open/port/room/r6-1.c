// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��ǽ��");
  set ("long", @LONG
��������һ��С���� . �����ڽ����ǽʱ , ���ڷ��ݺͳ�
ǽ֮��Ԥ�����߲��Ŀռ� , ���ݳ������� . ǽ������שʯ����
�� , ����ʮ�� , ��������Կ�����ǽ����������������Ѳ����

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r1-2",
	"east" : "/open/port/room/r6-2",
]));
	set("objects",([
	]));

  setup();
}
