// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","������");
  set ("long", @LONG
���������������� , �ϱ߾��Ǹۿ��� . �����Ѿ�������
���� , ������ͷ���������ȥ , ���õ� , ���˵� , �ֵľ�Ȼ
���� , �ۿڷ�æȴ������ . �����Ǹ�С��� , ��������ˮ��
��Ӫ .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 4 */
	"east" : "/open/gblade/navy/room/d1-1",
	"west" : "/open/port/room/r5-2.c",
	"north" : "/open/port/room/r2-2",
        "south" : "/open/dancer/room/fonport", 
]));
	set("objects",([
	]));

  setup();
}
