// Room: /open/main/room/f25.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f26",
  "west" : __DIR__"s28",
  "north" : __DIR__"f24",
  "east" : __DIR__"r45",
]) );

  set("outdoors", "/open/main" );


  setup();
}
