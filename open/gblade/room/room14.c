// Room: /u/m/moner/tree/room7.c
inherit ROOM;

void create ()
{
  set ("short", "薜荔萝林");
  set ("long", @LONG

 越向南行，林木越密，钻入鼻端的薜荔花香，使你的感觉越来越模糊，两边的飞楼
空，雕瓦绣栏， 渐渐隐于 山坳树梢之间，四周的阳光渐渐消失，景物越来越昏暗，飕
飕的阴风轻轻的从你身后吹了过来,让你感到微微的寒意,森林中不时传出一些狮鸣兽吼, 
让你不得不提高警觉.你往前方望去,隐隐约约好像看到一些黑影。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room15.c",
  "north" : __DIR__"room13.c",
]));

  setup();
}
