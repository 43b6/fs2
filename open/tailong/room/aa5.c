// Room: /u/o/ookami/newarea/aa5.c 
inherit ROOM;
 
void create ()
{
  set ("short", "大门");
  set ("long", @LONG
走到这里,前方就是刚才所见的大寺庙了,抬头一望,只见大门的上
方写的是崇圣寺三个大字,不禁满腹疑问,这里不是天龙寺吗?前面有一
个小僧,去问问他好了
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa6",
  "south" : __DIR__"aa4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/monk1.c":1,
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
