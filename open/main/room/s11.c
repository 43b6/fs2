// Room: /open/main/room/s11.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p3",
  "west" : __DIR__"s10",
  "north" : __DIR__"d11",
  "east" : __DIR__"s12",
]) );

  set("outdoors", "/open/main" );

  setup();
}
