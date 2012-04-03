// /u/j/judd/room/r16.c
inherit ROOM;

void create ()
{
  set ("short", "中堂西侧");
  set ("long", @LONG
来到这里，两个大大的路标立在眼前....，写的是草书，但仍可
看出北==>往火室图书馆，南==>往水室图书馆，儒门最有名的，就是
四大图书馆，风火土水，而你现在正在火与土的中间，你想先去看哪
一个呢？
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r19.c",
  "north" : __DIR__"r13.c",
  "east" : __DIR__"w3.c",
]));
  set("light_up", 1);

  setup();
}
