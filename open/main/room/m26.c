// Room: /open/main/room/m26.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·������Ķ���.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"f18",
  "west" : __DIR__"m25",
  "east" : __DIR__"r33",
]) );

  set("outdoors", "/open/main" );


  setup();
}
