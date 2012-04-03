// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "广场");
  set ("long", @LONG
这是仙剑派众弟子们平时练剑的场所，你看到数百位仙剑弟子们正挥
汗练剑，整齐一致的呼喝声，响遍全山。近年来仙剑何以如此兴盛，光看
这气势，你就明白八九成了。广场往东，西，北方延伸。
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g2-11.c",
  "north" : "/open/gsword/room/g2-13.c",
  "south" : "/open/gsword/room/g1-4",
  "east" : "/open/gsword/room/g2-18.c",
]));

  setup();
}
