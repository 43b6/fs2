// Room: /open/main/room/f18.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f21",
  "west" : __DIR__"f17",
  "north" : __DIR__"m26",
  "east" : __DIR__"r35",
]) );

  setup();
}
