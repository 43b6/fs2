// Room: /open/main/room/m2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", "�뿪�˵�·,��������һ������,΢΢�ķ��������,������
ô��û��,����ֻ��ãã��«��������. ��·�����������
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r9",
  "south" : __DIR__"m8",
  "west" : __DIR__"r11",
  "east" : __DIR__"m3",
]) );

  set("outdoors", "/open/main" );


  setup();
}
