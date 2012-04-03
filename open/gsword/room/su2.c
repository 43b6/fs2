// Room: /open/gsword/room/su2.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
	set( "build", 50 );
  set ("long", @LONG
 走到这里,人群开始多了起来,嘻嘻嚷嚷,尽是来逛街的居民,
往西是一家铁铺,你可以在那买些武器,东方则是蜀中驿站,你可以
由驿站骑马通往别处
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sword_boy" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su3.c",
  "west" : "/open/gsword/room/susteal",
  "south" : "/open/gsword/room/su1.c",
  "east" : "/open/trans/room/room2",
]));

  setup();
}
