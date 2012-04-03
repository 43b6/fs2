// Room: /u/r/rence/room/happy.c

inherit ROOM;

void create ()
{
  set ("short", "喜塔");
  set ("long", @LONG

塔门的上方有一块木雕，上头所著的火写着‘"HIR"喜塔"NOR"’，整座塔
共分两层，塔的四周长满了爬藤类的植物，微风吹来，藤蔓随之摆荡，好
一股清幽的气氛。塔门旁站着一为接待员，笑嘻嘻地望着你。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/r/rence/npc/gmob2.c" : 1,
]));
  set("outdoors", "/u/r/rence");
  set("exits", ([ /* sizeof() == 2 */
        "out" : "/u/r/rence/room/road",
        "enter" : "/u/r/rence/room/floor5",
]));

  setup();
}