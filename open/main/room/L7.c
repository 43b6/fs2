// Room: /open/main/room/L7.c

inherit ROOM;

void create ()
{
  set ("short", "̨��");
  set ("long", @LONG
����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/main/room/L5",
  "east" : "/open/main/room/L8",
]));

  set("outdoors", "/open/main");

  setup();
}
