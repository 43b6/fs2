// Room: /open/capital/room/r34.c

inherit ROOM;

void create ()
{
  set ("short", "����ֿ�");
  set ("long", @LONG
����������������ͬ, ������������ͬ, �������ǽϷ�����������
ͬ, ���С����С�֮��, ������������ű�������������ͬ�
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/fighter" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r35",
  "west" : __DIR__"r33",
  "north" : __DIR__"r72",
  "east" : __DIR__"r36",
]));
  set("gopath", "west");

  setup();
}
