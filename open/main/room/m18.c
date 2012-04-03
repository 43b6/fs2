// Room: /open/main/room/m18.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", @LONG
你现在在一座土丘上头, 微微的风轻拂着你, 这里什
么都没有, 有着只是茫茫的芦花和蓝天。
    往北通往交通大道，往东边和南边看去仍旧是一片丘
陵。西边有条马路往上爬可以爬上天山山脉，那边似乎是
闻名遐迩的少室峰。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m27",
  "northdown" : __DIR__"r29",
  "east" : __DIR__"m19",
  "westup":__DIR__"M16",
]) );

  set("outdoors", "/open/main" );


  setup();
}
