// Room: /open/main/room/L25.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s35",
  "west" : __DIR__"L24",
  "north" : __DIR__"r44",
  "east" : __DIR__"s29",
]) );

  set("outdoors", "/open/main" );


  setup();
}
