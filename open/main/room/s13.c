// Room: /open/main/room/s13.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s12",
  "south" : __DIR__"p5",
  "north" : __DIR__"d13",
  "east" : __DIR__"s14",
]) );

  set("outdoors", "/open/main" );

  setup();
}
