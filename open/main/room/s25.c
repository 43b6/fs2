// Room: /open/main/room/s25.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m23",
  "west" : __DIR__"s24",
  "south" : __DIR__"L15",
  "east" : __DIR__"r34",
]) );

  set("outdoors", "/open/main" );

  setup();
}
