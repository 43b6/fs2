// Room: /open/main/room/L2.c

inherit ROOM;

void create ()
{
  set ("short", "̨��");
  set ("long", @LONG
����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/main/room/s8",
  "west" : "/open/main/room/L1",
  "east" : "/open/main/room/L3",
]));

  set("outdoors", "/open/main");

  setup();
}
