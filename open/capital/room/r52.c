// Room: /open/capital/room/r52.c

inherit ROOM;

void create ()
{
  set ("short", "�ֵ�");
  set ("long", @LONG
����ǻʳǼ�̳�ԵĽֵ�, ���װ�޵ķǳ�����, ������һ����Ⱦ
�ġ����������ͨ���������뻷�����, �ǵ��ʹ��ıؾ�֮·��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r06",
  "south" : __DIR__"r53",
]));
  set("outdoors", "/open/capital");

  setup();
}
