// Room: /open/main/room/d7.c

inherit ROOM;

void create ()
{
  set ("short", "ɳĮ");
  set ("long", @LONG
�����һ���޼ʵ�������ɳĮ������ֻ�ֳ���������ĺ�����¥
����һ���߸ߵ�Χǽ, �ƺ�������ν�����ﳤ�ǰ�?
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"d6",
  "south" : __DIR__"d14",
  "east" : __DIR__"gy1.c",
  "north" : "/open/ping/questsfan/richrm1",
]));
  set("outdoors", "/open/main");

  setup();
}
