// Room: /open/main/room/f10.c

inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣�����������һ����֪����
С������������һЩ���ҵ���Ҷ��·�߳������Ӳݡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"room0",
  "west" : __DIR__"road3",
  "east" : "/open/main/room/f10",
]));
  set("outdoors", "/open/main");

  setup();
}
