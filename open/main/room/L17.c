// Room: /open/main/room/L17.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L16",
  "north" : __DIR__"L10",
  "south" : __DIR__"L20",
  "east" : __DIR__"L18",
]) );

  set("outdoors", "/open/main" );


  setup();
}
