// Room: /open/gblade/port/room/p2-2.c
inherit ROOM;

void create ()
{
   set("short", "石板大道");
  set ("long", @LONG
这里是枫林港最繁荣的商业中心 , 一堆摊贩沿路兜售 , 璘琅满
目的货品 , 真是令人目不暇给 , 仔细看看 , 也许你会买到奇珍异
宝喔 , 走在这里 , 你要当心点 , 自己的荷包可要看紧啊 ! 北边是
一家破破的当铺 , 看来也撑不久了 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"p2-7.c",
  "west" : __DIR__"p2-3.c",
  "east" : __DIR__"p2-1",
]));

  setup();
}
