// Room: /open/capital/room/r66.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���ھ��ǵ�������, ��������һ���������ֵľ���, ���ϲ�ʱ��
������, ��ʾ�������ֽ�ͨ�ķ�æ, ��·���˳�Ҳ����, ������ܵ�
�������õĳ�������������
    ��ԶԶ�ı��������ǻʵ۵�ס����Ҳ�������ľ������ࡣ

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r59",
  "south" : __DIR__"r67",
]));
  set("outdoors", "/open/capital");

  setup();
}
