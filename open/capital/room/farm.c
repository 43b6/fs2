// Room: /open/capital/room/farm
inherit ROOM;

void create()
{
  set ("short", "小广场");
  set ("long", @LONG
这儿是供给军粮的地方，中间有个广场。有几间茅草屋在广场两侧
，有间很大的木制房子立在正前方，房子前面有士兵在巡逻，大概就是
储粮的地方了。广场上有几个士兵忙碌的搬运粮草。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier1" : 2,
  ]));

  set("light_up", 1);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/foodh",
  "east" : "/open/capital/room/r46",
]));

  setup();
}
int valid_leave(object me,string dir)
{

   if( (dir=="north") && (present("soldier",environment(me))) )
   return notify_fail("禁卫军对你大吼:快滚!这里不是你该来的地方!!\n");


   return ::valid_leave(me,dir);
}
