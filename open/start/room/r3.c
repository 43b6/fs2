// Room: /open/start/room/r3

inherit ROOM;

void create ()
{
  set ("short", "���С·");
  set ("long", @LONG
����С·�����Զ������˸��˲��ߵĵ��ݣ�������
����������ܵľ����������������˾�����
��ע�⵽�ϱ���һ���ر�Ľ����������һ̽������

LONG);

  set("exits", ([ /* sizeof() == 2 */
"south" : "/open/scholar/room/enter.c",
  "east" : __DIR__"r2",
]));
  set("outdoors", "/open/start");

  setup();
}
