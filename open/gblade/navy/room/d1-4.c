// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","��\�䳡");
  set ("long", @LONG
������һƬ����Ĺ㳡 . ����ˮ������������ , һ������
�𲽽׶� , ʿ����ƽ������Ҫ���Ǿ���ѵ���似 . �㿴����ǧ
�˴��ųಲ , �������� , ����Ŵ����ڵĲ����� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-3.c",
	"east" : "/open/gblade/navy/room/d1-5.c",
	"north" : "/open/gblade/navy/room/d1-6.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":2,
	]));

  setup();
}
