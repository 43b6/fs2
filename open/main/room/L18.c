// Room: /open/main/room/L18.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"L17",
  "north" : __DIR__"L11",
  "south" : __DIR__"L21",
]) );

  set("outdoors", "/open/main" );


  setup();
}
