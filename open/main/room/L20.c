// Room: /open/main/room/L20.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L17",
  "south" : __DIR__"r48",
  "west" : __DIR__"L19",
  "east" : __DIR__"L21",
]) );

  set("outdoors", "/open/main" );


  setup();
}
