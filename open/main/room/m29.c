// Room: /open/main/room/m29.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L10",
  "west" : __DIR__"m28",
  "north" : __DIR__"m20",
  "east" : __DIR__"m30",
]) );

  set("outdoors", "/open/main" );


  setup();
}
