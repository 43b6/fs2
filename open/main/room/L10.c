// Room: /open/main/room/L10.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L17",
  "west" : __DIR__"L9",
  "north" : __DIR__"m29",
  "east" : __DIR__"L11",
]) );

  set("outdoors", "/open/main" );

  setup();
}
