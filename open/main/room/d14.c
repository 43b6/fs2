// Room: /open/main/room/d14.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
����һ���߸ߵ�Χǽ, �ƺ�������ν�����ﳤ�ǰ�?
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"d7",
  "south" : __DIR__"p6",
  "west" : __DIR__"d13",
]) );

  set("outdoors", "/open/main" );


  setup();
}
