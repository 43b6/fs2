// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
�����Ǹ����� , ����ס�Ĳ��Ǹ߹� , ���Ǿ޸� . ������ ,
 ��̫�� , ֣���� , �����ܵ��˶�ס������ . ���з������ ,
 ��ģ��������ʷ������ʷլ . ���߾���ʷլ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r3-4",
	"south" : "/open/port/room/r3-7",
]));
	set("objects",([
	]));

  setup();
}
