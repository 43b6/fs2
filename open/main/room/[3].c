// Room: /open/main/room/[3].c
inherit ROOM;
void create()
{
	set("short", "废墟");
	set("long",
"你来到了一处可帕的地方, 凌乱的杂草中, 耸立着几面断岩残璧,
高大的老树, 遮掩了天空, 竟连一丝阳光也透不下, 你可以想像这里
曾是热闹的地方, 而今已久无人居矣, 你想你还是赶快离开为妙.
");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r44",
  "south" : __DIR__"s29",
]) );
  set("objects", ([
      "/open/main/npc/shie-chiun" : 1,
      ]) );
  setup();
}

void init()
{
  set("no_reset",1);
}