// Room: /open/soulin/room/r2.c

inherit ROOM;

void create ()
{
	set("short", "�ּ�С��");
	set("long", "	�ٹ�ȥ�и�ͤ�Ӳ�֪����ʲô�ģ�����ͤ��
	�м������Ӧ�þ����������ˡ�


");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r5",
  "north" : __DIR__"r8",
]) );

  set("outdoors", "/open/soulin" );


  setup();
}
