// Room: /open/main/room/s5.c

inherit ROOM;

void create()
{
	set("short", "��ԭ");
	set("long", "������һ���޼ʵĴ��ԭ�������в���Ұ�޵��㼣
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s7",
  "west" : __DIR__"s4",
  "north" : __DIR__"s2",
  "east" : __DIR__"s6",
]) );

  set("outdoors", "/open/main" );

  setup();
}
