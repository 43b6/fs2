// Room: /open/main/room/L5.c

inherit ROOM;

void create ()
{
  set ("short", "̨��");
  set ("long", @LONG
����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/L7",
  "eastup" : "/open/main/room/M21",
]));

  set("outdoors", "/open/main");

  setup();
}
