// Room: /open/capital/room/r03.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�ߵ����, Խ��Խ�ܸ��ܵ��ʳ���������������, ��ϸһ��·��
��ʯ��, ��ȻҲ���˸��ӵ�ͼ��, ���Խ�������, ����֮�²�������
η�����顣

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r02",
  "east" : "/open/capital/room/r04",
]));

  set("gopath", "east");

  setup();
}
