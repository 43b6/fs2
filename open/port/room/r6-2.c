// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��ǽ��");
  set ("long", @LONG
�������ڳ�ǽ�ߵ�С���� . ����С�������������Ӻͳ��� .
 �����ų�ǽ���� , ����Կ������ֵ���е���������ȥȥ , ��
��䱸ɭ�� , ��������ڴ����� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-1",
	"east" : "/open/port/room/r6-3",
]));
	set("objects",([
	]));

  setup();
}
