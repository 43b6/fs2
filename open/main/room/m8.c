// Room: /open/main/room/m8.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
  set ("long", @LONG
离开了道路,你走上了一座土丘,微微的风轻拂着你,这里甚
么都没有,有着只是茫茫的芦花和蓝天. 道路则在你的西方或南
方.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"m9",
  "west" : __DIR__"r18",
  "north" : __DIR__"m2",
  "south" : __DIR__"r21",
]));
set("no_clean_up", 1);

  setup();
}
