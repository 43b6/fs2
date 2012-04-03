// Room: /open/main/room/L11.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L10",
  "north" : __DIR__"m30",
  "south" : __DIR__"L18",
  "east" : __DIR__"L12",
]) );

  set("outdoors", "/open/main" );

  setup();
}
