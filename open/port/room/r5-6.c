// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�滧");
  set ("long", @LONG
��������һ���ƾɵ�С���� , ����һ������򸾵ļ� . ��
���������Ѳ��ٳ��������� , ƽ��ֻ�������ſ� , �������� ,
������� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r5-4",
]));
	set("objects",([
	"/open/port/npc/oldman":1,
	"/open/port/npc/oldwoman":1,
	]));

  setup();
}
