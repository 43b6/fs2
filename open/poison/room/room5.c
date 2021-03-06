// Room: /open/poison/room/room5
inherit ROOM;

void create ()
{
  set ("short", "洞穴");
  set ("long", @LONG
哇！没想到瀑布后真的别有洞天，看来这里好像是一个
庙堂，中间有座奇怪的石雕像(statue)，前面则有一个大香
炉(cencer)，整个石洞香烟袅袅的，不知是何人在此祭拜。
LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "cencer" : "这是一个笨重的铜炉，看起来有转动(turn)过的痕迹。
",
  "statue" : "令你十分惊讶，这竟然是座魔神雕像，莫非跟武林盛传的冥
蛊神教有所关联。
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"road5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/ranger.c" : 1,
]));

  setup();
}
void init()
{
	add_action("do_turn", "turn");
}

int do_turn(string str)
{
	object me;
	me = this_player();
	if(!str || str != "cencer")
		return notify_fail("你想转动什么？\n");
	else if(!query_temp("have_turn"))
		{
		  message_vision("$N费了九牛二虎之力，缓缓地转动笨重的铜炉。\n",me);
		  tell_room(this_object(),"你发现西边的石壁缓缓开启, 出现一条密道。\n");
		  set("exits/west",__DIR__"path3");
		  set_temp("have_turn",1);
		  remove_call_out("do_closed");
		  call_out("do_closed",20);
		  return 1;
		}
	else {
	       remove_call_out("do_closed");
		delete_temp("have_turn");
		delete("exits/west");
		message_vision("$N运劲于双掌，用力转动机关，顿时一声巨响，石门迅速合上。\n",me);
	     }
	return 1;
}

void do_closed()
{
	delete_temp("have_turn");
	delete("exits/west");
	tell_room(this_object(),"石璧缓缓地自动关了起来。\n");
}
