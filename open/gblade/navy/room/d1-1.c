// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","ʯ����");
  set ("long", @LONG
����һ����Ϊƽ̹��ʯ���� . �ϱ�Ϊ����(�ذ�) , ��·
������� , ˳�ź����ɶ������� . ������·�ǽ������±ٵ� ,
��Ӳ�ȼ��ѵĻ���ʯ���̳� , ����Ϊ������; .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r5-1",
	"east" : "/open/gblade/navy/room/d1-2.c",
]));
	set("objects",([
	]));

  setup();
}
