// Room: /open/main/room/s8.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L2",
  "west" : __DIR__"s7",
  "north" : __DIR__"s6",
  "east" : __DIR__"s9",
]) );

  set("outdoors", "/open/main" );

  setup();
}
