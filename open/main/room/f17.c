// Room: /open/main/room/f17.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f20",
  "west" : __DIR__"m32",
  "north" : __DIR__"m25",
  "east" : __DIR__"f18",
]) );

  setup();
}
