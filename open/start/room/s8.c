// Room: /open/start/room/s8.c

inherit ROOM;

void create ()
{
  set ("short", "�ϴ��");
	set( "build", 7 );
  set ("long", @LONG
���������ƴ�����Ĵ�ڣ����Ϲ�ȥ�Ǵ�����ֵ�
��أ�����Կ������ũ�������ڵĸ����ţ�Ҳ�м�ֻ
ˮţ�����ũ���еĵ�������ͣ��ż�ֻ��֪�����
��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/start/room/s5",
  "south" : "/open/start/room/f3",
]));

  set("outdoors", "/open/start");

  setup();
}
