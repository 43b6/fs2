// Room: /open/main/room/r45.c

inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
����һ������ϡ�ٵ�С·�����������������ߣ�˭Ҳ��֪��
�������ͨ�����ֻ֪����һ����˵�еĹؿ���ɽ�أ���ңԶ
�������һ��. ��·���ϱ�����.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r46",
  "north" : __DIR__"r40",
  "west" : __DIR__"f25",
  "east" : __DIR__"L19",
]));

  set("outdoors", "/open/main");

  setup();
}
