// Room: /open/main/room/r31.c

inherit ROOM;

void create ()
{
	set("short","��·");
  set ("long", @LONG
����һ����ʯ���̳ɵĵ�· , �ǳ�͢�������¿��ٵ� , ͨ��
��½�Ϸ��ĳ��� , �ؿ� , �㷢��·�������ر�� , ��֪�Ǻ�Ե
�� , ��������������վ�� , �������������Ϣһ�� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/center/room/road3",
  "south" : __DIR__"r33",
]));

  set("outdoors", "/open/main");


  setup();
}
