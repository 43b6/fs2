// Room: /open/capital/room/r71.c

inherit ROOM;

void create ()
{
  set ("short", "中央大街");
  set ("long", @LONG
    走在京城的中央大街, 街上不时有快马奔过, 显示出这条街交通的
繁忙。这里是整个京城的南方, 街道虽不似北边的富豪住宅般华丽, 但
也有另一股风味, 住的都是一些中下等的居民, 虽不富有但却勤奋, 显
的生气勃勃。路的西边是皇上特设的考场。路的东边则是赏金兑换处。



LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"test_room",
  "north" : __DIR__"r70",
  "south" : __DIR__"r72",
  "east" : __DIR__"head_room",
]));
  set("outdoors", "/open/capital");

  setup();
}
