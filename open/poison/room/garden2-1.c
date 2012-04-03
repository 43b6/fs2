// Room: /u/r/ranko/garden2.c
inherit ROOM;

void create ()
{
  set ("short", "毒园外围");
  set ("long", @LONG
这里是毒园外围部份,此处所种的都是寻常可见的毒花,毒草和
刚才见到的并没甚么差别.值得一提的是,由于那些毒花毒草的影响
,吸引了不少毒物在此聚集。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"garden2-2.c",
  "south" : __DIR__"garden4-1.c",
  "east" : __DIR__"garden2.c",
]));
  set("light_up", 1);

  setup();
}
