// Room: /open/main/room/f3.c

inherit ROOM;

void create()
{
	set("short", "ɭ��");
	set("long", @LONG
����һ���޼ʵ�ɭ��, ������һ������, ȴ��֪��ô��ȥ��
����������ȥ��һ����֪���ĸ�ɽ����֪���Ƿ��и���������ɽ
�ϡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f1",
  "south" : __DIR__"f5",
  "east" : __DIR__"f4",
  "northwest" : "/open/tensan/room1",
]) );

  set("outdoors", "/open/main" );


  setup();
}
