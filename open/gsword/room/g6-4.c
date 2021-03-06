// Room: /open/gsword/room/g6-4.c
inherit ROOM;

void create ()
{
  set ("short", "悬崖下");
  set ("long", @LONG
你来到一片小广场，北边一片光秃秃的峭壁，正是仙剑派的思过崖，
这思过崖也并不如何高，只是地势陡峭，看来十分凶险，东北方有条小径
，似可登上悬崖，左首有条小径，通往未知的地方，听说除了掌门及辈份
较高的的仙剑七侠外，其它弟子皆不能擅入。
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : "/open/gsword/room/g6-5.c",
  "southeast" : "/open/gsword/room/g6-3",
  "west" : "/open/gsword/room/g6-8.c",
  "northwest" : "open/gsword/room/h-2.c",
]));

  setup();
}
