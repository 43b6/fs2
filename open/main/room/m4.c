// Room: /open/main/room/m4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m10",
  "west" : __DIR__"m3",
  "east" : __DIR__"m5",
]) );

  set("outdoors", "/open/main" );


  setup();
}
