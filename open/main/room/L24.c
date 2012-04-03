// Room: /open/main/room/L24.c

inherit ROOM;

void create ()
{
  set ("short", "̨��");
  set ("long", @LONG
����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L23",
  "south" : __DIR__"s34",
  "north" : __DIR__"r43",
  "east" : __DIR__"L25",
]));

  setup();
}
