// Room: /open/main/room/f13.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f12",
  "south" : __DIR__"r13",
  "east" : __DIR__"f14",
]) );

  set("outdoors", "/open/main" );


  setup();
}
