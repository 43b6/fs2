// Room: /open/main/room/s32.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s39",
  "west" : __DIR__"s31",
  "north" : __DIR__"s28",
  "east" : __DIR__"f26",
]) );

  set("outdoors", "/open/main" );

  setup();
}
