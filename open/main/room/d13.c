// Room: /open/main/room/d13.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
Ҳ��֪�����ǳ���, ��ʱ������ɳĮ���еķ籩, �������������˰�?!
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"d12",
  "south" : __DIR__"s13",
  "north" : __DIR__"d6",
  "east" : __DIR__"d14",
]) );

  set("outdoors", "/open/main" );


  setup();
}
