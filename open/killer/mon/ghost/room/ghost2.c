//written by acelan...../u/a/acelan/ghost/room/ghost2.c

inherit ROOM;

void create()
{
        set("short", "墓园");
        set("long", @LONG
这里是十三公墓的一角, 由于地处偏远, 再加上风水并不是很理
想, 所以这里并没有埋有坟墓。四周野草及腰, 且兼光线昏暗, 连落
脚处都看不清, 所以还是不要久留的好。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost5.c",
       "east"  : __DIR__"ghost3.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black4.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 1,
]));
   setup();
}
