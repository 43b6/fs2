// Room: /open/main/room/L4.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"F11",
  "north" : __DIR__"L3",
  "east" : __DIR__"r5",
]) );

  set("outdoors", "/open/main" );


  setup();
}
