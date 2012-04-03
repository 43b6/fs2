inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

阵阵阴风迎面吹来，手中的火把也忽明忽灭，以致你看不太清楚四周的环
境，一个不小心，被石头绊了一跤，整个人跌在地上，正想起身，赫然发
现竟然跌在一具刚死不久的尸体上面；看样子尸体是被野兽咬死后，拖到
这里来的；尸体的被咬的面目全非，还有几条蛆从看起来应该是眼睛和鼻
子的地方爬进爬出。你突然感到胃部一阵绞痛，吐了一地。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c2.c",
  "north" : __DIR__"c2-2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/mob1" : 1,
]));

  setup();
}

int valid_leave(object me,string dir)
{
	if(dir=="north"&& present("fly-head adultoid",environment(me)))
	if(me->query("pass_gblade")<1)
	return notify_fail("落头虫挡住了你的去路 , 似乎不让你过去 !\n");
	return ::valid_leave(me,dir);
}
