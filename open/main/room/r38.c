// Room: /open/main/room/r38.c

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
  "north" : __DIR__"m27",
  "south" : __DIR__"r40",
  "west" : __DIR__"r37",
  "east" : __DIR__"L9",
]));

  set("outdoors", "/open/main");

  setup();
}
