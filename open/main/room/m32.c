// Room: /open/main/room/m32.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·�����������.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m24",
  "south" : __DIR__"f19",
  "west" : __DIR__"r34",
  "east" : __DIR__"f17",
]) );

  set("outdoors", "/open/main" );


  setup();
}
