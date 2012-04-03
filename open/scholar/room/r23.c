// /u/j/judd/room/r23.c
inherit ROOM;

void create ()
{
set("short", "水之通道");
set("long", @LONG
映入眼中的，是一个大水池，而路在水池的另一头，看起来似乎
没有路可以过去，突然一个闪光吸引了你，仔细的检查，发现在水池
的中间有一条由冰作出的小路，看起来好像还满坚固的，只是不知道
会不会在水池的一半断裂．
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southwest" : __DIR__"water.c",
 "northeast" : __DIR__"r19.c",
]));
setup();
}