inherit ROOM;

void create ()
{
  set ("short", "缀锦阁");
  set ("long", @LONG

一走进房内，你竟然分辨不出隔间，原来四面皆是雕空玲珑木板，或流云
百蝠，或岁寒三友，或山水人物，或翎毛花卉，或集锦，或博古，各种花
样，皆是名手雕刻，五彩销金嵌玉的。一隔一隔，或贮书，或设鼎，或安
置笔砚。其隔式样，或圆，或方，或连环半壁。且满墙皆是随依古董玩器
之形枢成的槽子，如琴，剑，悬瓶之类，俱悬于壁，却都与壁相平的。房
间一角有一先生正在教授两童子诗书。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g3-1.c",
  "north" : __DIR__"g3-1-2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/foolboy" : 1,
]));
  set("light_up", 1);

  setup();
}
