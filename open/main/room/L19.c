// Room: /open/main/room/L19.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"L16",
  "south" : __DIR__"r47",
  "west" : __DIR__"r45",
  "east" : __DIR__"L20",
]) );

  set("outdoors", "/open/main" );


  setup();
}
