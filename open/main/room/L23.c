// Room: /open/main/room/L23.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L22",
  "south" : __DIR__"s33",
  "north" : __DIR__"r42",
  "east" : __DIR__"L24",
]) );

  set("outdoors", "/open/main" );


  setup();
}
