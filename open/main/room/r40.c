// Room: /open/main/room/r40.c

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
  "west" : __DIR__"f24",
  "north" : __DIR__"r38",
  "south" : __DIR__"r45",
  "east" : __DIR__"L16",
]));

  set("outdoors", "/open/main");

  setup();
}
