// Room: /open/ping/room/wdoor.c

inherit ROOM;

void create ()
{
  set ("short", "平南城西门");
  set ("long", @LONG
你看到一座高二丈的城门,城墙上有巨石撞击的痕迹,包铁
的大城门也有薰黑碰撞的迹像, 苗人的入侵看来只是几天前的
事,守城的将士门正忙着修补城墙,等待着下次苗人的来袭.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/guard-d1" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/r41",
  "east" : __DIR__"road6.c",
]));

  setup();
}
