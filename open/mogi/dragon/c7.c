// Room: /u/p/poloer/dragon/c7
inherit ROOM;

void create ()
{
  set ("short", "炎龙谷后段");
  set ("long", @LONG
来到了后段就必须更加小心，也就是越靠近凶恶的谷主啰。四周
突然比较有生气起来，可以看到些小动物了，但不禁怀疑这是诱敌的
技巧吗?

LONG);

  set("evil", 1);
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"c5",
  "south" : __DIR__"c9",
  "east" : __DIR__"c9",
]));
  set("outdoors", "/u/p");
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob8.c" : 2,
  __DIR__"npc/mob7.c" : 2,
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
