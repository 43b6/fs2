// Room: /open/main/room/m25.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f17",
  "west" : __DIR__"m24",
  "north" : __DIR__"m17",
  "east" : __DIR__"m26",
]) );

  set("outdoors", "/open/main" );


  setup();
}
