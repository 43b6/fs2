// Room: /open/main/room/r36.c

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
  "south" : __DIR__"f23",
  "west" : __DIR__"r35",
  "east" : __DIR__"r37",
]));

  set("outdoors", "/open/main");

  setup();
}
