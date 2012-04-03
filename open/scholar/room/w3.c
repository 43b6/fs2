// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "计谋厅");
  set ("long", @LONG
这是儒门高级儒生们研究计谋的厅房，此地你可看到许多高
级儒生正坐在桌上研究着兵法的运用，厅房的南边是计谋厅长老
休息及读书的厢房，北边是计谋厅老师的厢房，西边是通往中堂
西侧。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"w3_s.c",
  "west" : __DIR__"r16.c",
  "north" : __DIR__"w3_n.c",
  "east" : __DIR__"w2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/trainer.c" : 2,
]));

  setup();
}
