// Room: /open/main/room/s37.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s30",
  "west" : __DIR__"s36",
  "east" : __DIR__"s38",
]) );

  set("outdoors", "/open/main" );

  setup();
}
