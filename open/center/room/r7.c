// Room: /u/l/lotus/girl/r7.c

inherit ROOM;

void create()
{
  set ("short", "练舞房");
  set ("long", @LONG
这是舞孃们平时练习舞蹈的地方, 架子上堆满了姑娘们跳舞用的
彩带, 扇子, 棒子等小道具, 还有几本舞谱. 真不巧姑娘们都上花厅
表演去了, 练舞房空荡荡的没有人在.
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w4",
]));
  set("file_name", __DIR__"r7.c");
  setup();
}
