// Room: /open/main/room/f27.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", "������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f26",
  "west" : __DIR__"s39",
  "east" : __DIR__"f28",
]) );
  set("objects",([
  "/open/main/npc/chou-kau" : 1,
  ]));
  set("outdoors", "/open/main" );


  setup();
}
