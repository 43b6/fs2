// Room: /open/soulin/room/r5.c

inherit ROOM;

void create ()
{
	set("short", "�ּ�С��");
	set("long",@LONG
	���������Ǹ���������֮�أ�һ��ɽ�ű���һ��
	С����������ֲ����಻֪������ľ�����ʲ���
	������������ʾ���˵ص��徲��


LONG );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r2",
  "out" : "/open/main/room/M15",
]) );

  set("outdoors", "/open/soulin" );


  setup();
}
