// Room: /open/main/room/f24.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f23",
  "south" : __DIR__"f25",
  "north" : __DIR__"r37",
  "east" : __DIR__"r40",
]) );

  set("outdoors", "/open/main" );

  setup();
}
