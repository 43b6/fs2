// Room: /open/main/room/d12.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
Ҳ��֪�����ǳ���, ��ʱ������ɳĮ���еķ籩, �������������˰�?!
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s12",
  "west" : __DIR__"d11",
  "north" : __DIR__"d5",
  "east" : __DIR__"d13",
]) );

  set("outdoors", "/open/main" );


  setup();
}
