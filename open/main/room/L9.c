// Room: /open/main/room/L9.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L19",
  "west" : __DIR__"r38",
  "north" : __DIR__"m28",
  "east" : __DIR__"L10",
]) );

  set("outdoors", "/open/main" );


  setup();
}
