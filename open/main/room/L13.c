// Room: /open/main/room/L13.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s23",
  "south" : __DIR__"r41",
  "east" : __DIR__"L14",
]) );

  set("outdoors", "/open/main" );

  setup();
}
