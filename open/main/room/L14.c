// Room: /open/main/room/L14.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s24",
  "west" : __DIR__"L13",
  "east" : __DIR__"L15",
]) );

  set("outdoors", "/open/main" );

  setup();
}
