// Room: /open/main/room/r37.c

inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
����һ������ϡ�ٵ�С·�����������������ߣ�˭Ҳ��֪��
�������ͨ�����ֻ֪����һ����˵�еĹؿ���ɽ�أ���ңԶ
�������һ��. ��·�ʶ�������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"f24",
  "west" : __DIR__"r36",
  "east" : __DIR__"r38",
]));

  set("outdoors", "/open/main");

  setup();
}
