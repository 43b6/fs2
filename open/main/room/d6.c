// Room: /open/main/room/d6.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
Ҳ��֪�����ǳ���, ��ʱ������ɳĮ���еķ籩, �������������˰�?!
");

  set("exits", ([ /* sizeof() == 3 */
  // "north" : "/open/clan/sun/room/room70","north" : "/open/clan/sun/room/room70",
  "south" : __DIR__"d13",
  "west" : __DIR__"d5",
  "east" : __DIR__"d7",
]) );

  set("outdoors", "/open/main" );

  setup();
}
