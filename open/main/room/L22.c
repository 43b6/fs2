// Room: /open/main/room/L22.c

inherit ROOM;

void create()
{
	set("short", "̨��");
	set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"L23",
//"northup" : "/open/clan/empire_flag/room57",
]) );

  set("outdoors", "/open/main" );


  setup();
}
