// Room: /open/capital/room/r25.c

inherit ROOM;

void create ()
{
  set ("short", "����۵�");
  set ("long", @LONG
·�������������и��������Ƶģ��ƺ������Ƚ���ֹ�񫣬���п�
���϶������λ�����±���¾ƣ���ζ��δ���ѣ�����ȴ�ܸɾ������Ƶ�
�Ǹ��׷��ԲԵĺ������ͷ��������һ�����ϵ��˶����ó����и�����
������ʮ�����ͷ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/oldman" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r26",
  "north" : __DIR__"r24",
"west" : "/open/wind-rain/room1",
  "east" : __DIR__"h09.c",
]));
  set("gopath", "north");

  setup();
}
