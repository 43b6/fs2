// Room: /open/capital/room/r14.c

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
  "south" : "/open/capital/room/r17",
  "west" : "/open/capital/room/r13",
  "east" : "/open/capital/room/r15",
]));

  set("gopath", "south");

  setup();
}
