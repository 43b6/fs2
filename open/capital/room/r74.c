// Room: /open/capital/room/r74.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����ǻʳǼ�̳�ԵĽֵ�, ���װ�޵ķǳ�����, ������һ����Ⱦ
�ġ����������ͨ���������뻷�����, �ǵ��ʹ��ıؾ�֮·��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r59",
  "north" : __DIR__"r08",
]));
  set("outdoors", "/open/capital");

  setup();
}
