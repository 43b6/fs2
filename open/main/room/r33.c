// Room: /open/main/room/r33.c

inherit ROOM;

void create ()
{
	set("short","��·");
	set( "build", 47 );
  set ("long", @LONG
˳�ŵ�·�� , �������һ������ , �Ϸ���һƬɭ�� , ������
���������Ŀ������ߵ�������վ , �������� , �ò����� .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"m26",
  "north" : __DIR__"r31",
  "south" : __DIR__"r35",
]));

  set("outdoors", "/open/main");

  setup();
}
