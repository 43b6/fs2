// Room: /open/main/room/r46.c

inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
����һ������ϡ�ٵ�С·�����������������ߣ�˭Ҳ��֪��
�������ͨ�����ֻ֪����һ����˵�еĹؿ���ɽ�أ���ңԶ
�������һ��. ��·����������.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f28",
  "west" : __DIR__"f26",
  "north" : __DIR__"r45",
  "east" : __DIR__"r47",
]));

  set("outdoors", "/open/main");

  setup();
}
