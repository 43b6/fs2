// Room: /u/p/powell/room/gstore.c

inherit ROOM;

void create ()
{
  set ("short", "妓院");
  set ("long", @LONG
这是一家有名的妓院, 名叫丽春院, 由于人来人往不少, 因此
除了一楼后院当嫖客暂留的房间以外, 这大厅还充当客栈, 二楼以
上则全部当作厢房了. 不过老鸨最近闷闷不乐, 听说水仙姑娘被恶
人谷的十大恶人抓走了, 外头虽然人多, 却没人知道恶人谷位于何
处, 看来英雄救美的机会到了.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tree",
  "east" : __DIR__"road1.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/hoodlum" : 1,
  "/open/center/npc/harlot" : 1,
]));
  set("light_up", 1);

  setup();
}
