// Room: /open/main/room/f29.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f28",
  "north" : __DIR__"r47",
  "east" : __DIR__"f30",
]) );

  set("outdoors", "/open/main" );


  setup();
}
