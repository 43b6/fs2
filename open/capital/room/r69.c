// Room: /open/capital/room/r69.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���ھ��ǵ�������, ��������һ���������ֵľ���, ���ϲ�ʱ��
������, ��ʾ�������ֽ�ͨ�ķ�æ, ��·���˳�Ҳ����, ������ܵ�
�������õĳ�����������, �ұ��������߹���, ���������վ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r67",
  "south" : __DIR__"r70",
  "east" : __DIR__"dancer",
  "west" : "/open/trans/room/room1.c",
]));
  set("outdoors", "/open/capital");

  setup();
}
