// Room: /open/main/room/m30.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L11",
  "north" : __DIR__"m21",
  "west" : __DIR__"m29",
  "east" : __DIR__"m31",
]) );

  set("outdoors", "/open/main" );


  setup();
}
