// Room: /open/main/room/s28.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s32",
  "north" : __DIR__"f23",
  "west" : __DIR__"s27",
  "east" : __DIR__"f25",
]) );

  set("outdoors", "/open/main" );

  setup();
}
