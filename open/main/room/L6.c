// Room: /open/main/room/L6.c

inherit ROOM;

void create ()
{
  set ("short", "̨��");
  set ("long", @LONG
����һ��΢΢�����̨�أ�ϡϡ����ĳ����𼸴��Ӳݣ�
����ʯ�����ҷֲ������Ե�����Ļ���.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"L8",
  "west" : __DIR__"L5",
]));

  set("outdoors", "/open/main");

  setup();
}
