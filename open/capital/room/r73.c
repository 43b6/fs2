// Room: /open/capital/room/r73.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
����ǻʳǼ�̳�ԵĽֵ�, ���װ�޵ķǳ�����, ������һ����Ⱦ
�ġ����������ͨ���������뻷�����, �ǵ��ʹ��ıؾ�֮·��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r74",
  "north" : __DIR__"r10",
]));
  set("outdoors", "/open/capital");

  setup();
}
