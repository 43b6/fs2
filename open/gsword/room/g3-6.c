// Room: /open/gsword/room/eghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "小广场");
  set ("long", @LONG
这是仙剑派剑士们用膳的地方，广场中间数十张桌椅有条不紊的排列着，
东边是大厨们开伙的工作房，直往西走，通往仙剑派众师兄弟们的寝室。北边
有个楼梯 ,可通往掌门人及仙剑七侠的寝居 .

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"g3-4.c",
  "west" : __DIR__"g3-7.c",
  "east" : __DIR__"g3-5.c",
]));
set("objects",([
"/open/gblade/npc/yuan" : 1,
]));
  set("light_up", 1);

  setup();
}
