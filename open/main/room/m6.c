// Room: /open/main/room/m6.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�����������������,΢΢�ķ��������,������ô��û��,
����ֻ��ãã��«��������.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m12",
  "west" : __DIR__"m5",
  "east" : __DIR__"m7",
]) );

  set("outdoors", "/open/main" );


  setup();
}
