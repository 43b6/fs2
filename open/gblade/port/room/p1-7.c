// Room: /open/gblade/port/room/p1-7.c
inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
����һ��ʯ���̳ɵĴ�� , ·�����˴������һ�ѵ� ,
�ƺ����˶������书 , �����㻹�������������Ϊ�� ,����
��һ�������� , ר�����ֵ��� ,�ϱ��Ƿ��ߵ� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p1-8.c",
  "north" : __DIR__"p1-6.c",
  "west" : __DIR__"p1-4",
  "east" : __DIR__"p1-9.c",
]));
	set("objects",([
	"/open/gblade/port/npc/blademan2":1,
	]));

  setup();
}
