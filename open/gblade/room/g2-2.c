inherit ROOM;

void create ()
{
  set ("short", "通幽曲径");
  set ("long", @LONG

这是连接王宅正厅跟内院的庭园，你往前一望，只见白石峻嶒，或如鬼怪
，或似猛兽，纵横拱立；上面苔癣斑驳，或着是藤萝掩映，其中微露羊肠
小径。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/b-guardian" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g2-3.c",
  "south" : __DIR__"g2-1.c",
]));

  setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="west"&&present("guardian",environment(me)))
	{
	if(me->query_temp("weapon"))
	return notify_fail("铜刀护院挡住了你的去路 ,说道 :请勿带武器进入王家内院 \n");
	}
	return 1;
}
