// Room: /open/main/room/L3.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L4",
  "west" : __DIR__"L2",
  "north" : __DIR__"s9",
  "east" : __DIR__"r3",
]) );

  set("outdoors", "/open/main" );


  setup();
}
