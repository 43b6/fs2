// Room: /open/main/room/s12.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p4",
  "west" : __DIR__"s11",
  "north" : __DIR__"d12",
  "east" : __DIR__"s13",
]) );

  set("outdoors", "/open/main" );

  setup();
}
