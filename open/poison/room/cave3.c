// Room: /u/r/ranko/cave3.c
inherit ROOM;
    
void create ()
{
  set ("short", "山洞");
  set ("long", @LONG
一个极大的山洞,正中央一股清泉(spring)缓缓冒出,大概就是
井水的供给来源吧。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "spring" : "一股清澈见底的泉水,你可以利用它来解渴.但奇怪的是泉水似乎有受到阻塞的现像。
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"garden6.c",
  "enter" : __DIR__"snake_hole.c",
]));

  setup();
}
void init()
{
	add_action("do_search","search");
}

int do_search(string str)
{
	object me;
	me = this_player();
	if(!str || str !="spring")
	{return 0;}
	if ( me->query_temp("kill_serpent"))
		{
	message_vision("$N找了半天，只看到一些蛇褪下的蛇皮。\n",me);
		return 1;
		}
	 else if(!query_temp("have_search"))
		{
		message_vision("$N往泉水周围仔细搜寻。\n",me);
		tell_room(this_object(),"你吓然发现一条巨大的蟒蛇在此栖息,而因此阻绝了大部份的泉水.\n");
		
		set("objects", ([ /* sizeof() == 1 */
		"/open/poison/npc/serpent.c" : 1,
		
		]));
		setup();
		return 1;
	}
}
 
