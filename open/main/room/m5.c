// Room: /open/main/room/m5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"m4",
  "south" : __DIR__"m11",
  "east" : __DIR__"m6",
]) );

  set("outdoors", "/open/main" );


  setup();
}
