// Room: /open/main/room/d2.c

inherit ROOM;

void create()
{
	set("short", "ɳĮ");
	set("long", "�����һ���޼ʵ�������ɳĮ��������һ���������ƶ�����
���������ȥ, ȴ���������, ��֪������������һ��?
");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"d9",
  "west" : __DIR__"d1",
]) );

  set("outdoors", "/open/main" );


  setup();
}
