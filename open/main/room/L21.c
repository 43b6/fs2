// Room: /open/main/room/L21.c

inherit ROOM;

void create()
{
        set("short", "̨��");
	set( "build", 7 );
        set("long", "����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
");
set("no_clean_up", 0);
  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/gao-shion.c" : 1,
 ]));
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"L20",
  "north" : __DIR__"L18",
  "east" : "/open/magic-manor/town/town40",
  "south" : __DIR__"r49",
]) );

  set("outdoors", "/open/main" );


  setup();
}
