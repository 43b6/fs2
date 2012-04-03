// Room: /open/gsword/room/su13.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
走在宽阔的石板大道下,你来到了蜀中城的市区,蜀中城的一般居
民都居住在此,你可以感觉到蜀中城的宁静与悠闲,来来往往的居民穿
梭在街上,这是一个平静的城市.
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/woman" : 1,
   "/open/gsword/mob/bochen" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/open/gsword");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"su4",
  "east" : __DIR__"su12",
]));

  setup();
}
