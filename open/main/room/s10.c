// Room: /open/main/room/s10.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"p2",
  "north" : __DIR__"d10",
  "east" : __DIR__"s11",
]) );

  set("outdoors", "/open/main" );

  setup();
}
