// Room: /open/main/room/r14.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "	�Ϸ��Ĳ�ԭ�ϣ���Լ�Ŀ����м�ֻ��֪���Ķ�����׷����
	���ƺ����������ӣ��򶫷���ȥ������ǣ�Ӧ�þ�����
	���ˡ�


");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"f14",
  "west" : __DIR__"r13",
  "south" : __DIR__"s15",
  "east" : __DIR__"r15",
]) );

  set("outdoors", "/open/main" );


  setup();
}
