// Room: /open/start/room/s10.c

inherit ROOM;

void create ()
{
  set ("short", "���ƴ�");
	set( "build", 218 );
  set ("long", @LONG
ƽ������Ĵ�ׯ�����Լ����Ķ���ƽ�������ᣬ
û��ʲô����Ľ�����Զ���Ϸ���ȥ��һƬ�����͵�
����м���ũ���������ڵĸ�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/s5",
  "east" : "/open/start/room/s11",
]));

  set("outdoors", "/open/start");

  setup();
}
