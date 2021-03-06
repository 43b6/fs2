// Room: /u/r/ranko/room/v3.c
inherit ROOM;

void create ()
{
  set ("short", "隔世村中央");
  set ("long", @LONG
这里是隔世村的正中央，两旁接着村中的大路，往北及往南则
各有一条小路，此处有一口青石砌成的水井，是村里用水的来源之
一，许多村民正在此地排队等待汲水。
LONG);
  

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/obj/well.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"pa4.c",
  "west" : __DIR__"v2-5.c",
  "north" : __DIR__"pa1.c",
  "east" : __DIR__"v2-4",
]));

  setup();
}
