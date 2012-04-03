// Room: /d/snow/mstreet2.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������������ѩͤ��Ĵ�֣�����ֱ�߲�Զ�������ϵĹ㳡������
�Ķ�����һ���լԺ���������Ų����������������һ�Ҵ������ӣ�
������������������Զ�������õ����ֵ�������һֱͨ�����⡣
LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/scavenger" : 1,
  __DIR__"npc/drunk" : 1,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"smithy",
  "south" : __DIR__"mstreet1",
  "north" : __DIR__"mstreet3",
]));

  setup();
}
