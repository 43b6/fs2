// Room: /open/main/room/m28.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L9",
  "west" : __DIR__"m27",
  "north" : __DIR__"m19",
  "east" : __DIR__"m29",
]) );

  set("outdoors", "/open/main" );


  setup();
}
