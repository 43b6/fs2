// Room: /open/main/room/f26.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"f25",
  "south" : __DIR__"f27",
  "west" : __DIR__"s32",
  "east" : __DIR__"r46",
]) );

  set("outdoors", "/open/main" );


  setup();
}
