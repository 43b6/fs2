// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�������ڷ��ָ������ֵ��������� . ��һ���Ƿ��ָ۵���
�� . ������Ⱥ�� , �������ԵĽ־� , ̯���Ľ����� , ���˵�
������ , ������� , �����ʶ��������ķ��� . �����мҴ���
�� , Ҳ������Խ�ȥ���� . �����Ǽ��ӻ��� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r3-1",
	"east" : "/open/port/room/r1-9",
	"west" : "/open/port/room/r1-7",
	"north" : "/open/port/room/r1-3",
]));
	set("objects",([
	]));

  setup();
}
