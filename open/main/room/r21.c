// Room: /open/main/room/r21.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", "���������ƴ�, ��Ϊ�������Ǩ������ȥ��, ����⸽���˿�
Խ��Խ��, �峤Ϊ���������������ս���, ����, �������Ҳ�޴�
����. �ο�, ��Ҳ�������뿪���ƴ�ȥ����һ����. ����ֱ�߾���
��վ, �ϱ������ʼ�ɽ.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/start/room/s14",
  "north" : __DIR__"m8",
  "south" : __DIR__"m14",
  "east" : __DIR__"r22",
]) );

  set("outdoors", "/open/main" );

  setup();
}
