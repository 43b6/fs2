// Room: /open/main/room/m24.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·�����������.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m16",
  "west" : __DIR__"r32",
  "south" : __DIR__"m32",
  "east" : __DIR__"m25",
]) );

  set("outdoors", "/open/main" );


  setup();
}
