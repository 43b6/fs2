// Room: /open/main/room/m31.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"L12",
  "west" : __DIR__"m30",
  "north" : __DIR__"m22",
]) );

  set("outdoors", "/open/main" );


  setup();
}
