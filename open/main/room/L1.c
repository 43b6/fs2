// Room: /open/main/room/L1.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"s7",
  "east" : __DIR__"L2",
]) );

  set("outdoors", "/open/main" );

  setup();
}
