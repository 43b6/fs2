// Room: /u/p/poloer/dragon/a9
inherit ROOM;

void create ()
{
  set ("short", "炎龙谷前段");
  set ("long", @LONG
进到了谷中，四周昏暗无光，要小心奕奕的走才行。只能摸
着墙壁前进，感觉身旁不时有东西走过，偶而还能听到鬼怪哭嚎
的声音，听起来令人起寒。

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"a8",
  "north" : __DIR__"a6",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
