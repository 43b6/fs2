// Room: /open/main/room/L16.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"r40",
  "south" : __DIR__"L19",
  "north" : __DIR__"L9",
  "east" : __DIR__"L17",
]) );

  set("outdoors", "/open/main" );


  setup();
}
