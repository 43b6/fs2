// Room: /open/capital/room/r02.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�ߵ����, Խ��Խ�ܸ��ܵ��ʳ���������������, ��ϸһ��·��
��ʯ��, ��ȻҲ���˸��ӵ�ͼ��, ���Խ�������, ����֮�²�������
η�����顣���������ǽ���·��, ��˽ֵ���ʱ��Ѳ�ߵľ����߹�, ��
������ʮ�ֽ��š�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/r01",
  "south" : "/open/capital/room/r16",
  "east" : "/open/capital/room/r03",
]));

  set("gopath", "east");

  setup();
}
