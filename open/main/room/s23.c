// Room: /open/main/room/s23.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"L13",
  "east" : __DIR__"s24",
]) );

  set("outdoors", "/open/main" );

  setup();
}
