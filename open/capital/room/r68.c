// Room: /open/capital/room/r68.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���ھ��ǵ�������, ��������һ���������ֵľ���, ���ϲ�ʱ��
������, ��ʾ�������ֽ�ͨ�ķ�æ, ��·���˳�Ҳ����, ������ܵ�
�������õĳ�������������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r69",
  "north" : __DIR__"r67",
]));

  set("outdoors", "/open/capital");

  setup();
}
