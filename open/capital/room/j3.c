// Room: /u/f/funkcat/room/house2h.c

inherit ROOM;
			
void create ()
{
  set ("short", "和房");
  set ("long", @LONG
铺满榻榻米的房间，门是糊满白纸的和式门，房间之中有个小矮桌
对面的墙上挂了大大的忍字。旁边的矮柜上还搁着一副扶桑将军的战甲
及两把武士刀。奇怪，京城里怎么聚集了一大群扶桑人，难道是要密谋
造反!?

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"j4",
]));
// set("objects", ([ /* sizeof() == 1 */
// "/open/capital/npc/black.c" : 1,
//]));

  setup();
}
int valid_leave(object me,string dir)
{
  int i;
  i=me->query("japanese");
  if ((i=0) && ( dir=="south") && (present("jushirou",environment(me))))
  return notify_fail("天枫十四郎挡住你的去路说:想走?没那么简单!\n");
  return ::valid_leave(me,dir);
}
							

