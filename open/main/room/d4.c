// Room: /open/main/room/d4.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
Ҳ��֪�����ǳ���, ��ʱ������ɳĮ���еķ籩, �������������˰�?!
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"d3",
  "south" : __DIR__"d11",
  "east" : __DIR__"d5",
]) );

  set("outdoors", "/open/main" );


  setup();
}
