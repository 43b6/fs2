inherit ROOM;

void create ()
{
	set("short","厨　房");
	set("long",@LONG
火烫的滚由正在你身旁的炉灶上加热着，你小心翼翼的躲避着那
不时喷洒出来的热油，只见得老妇人不断的翻锅，切蒜，擣肉，忙的
不可开交，你突然觉得自己在这里仿佛碍人手脚...

地上摆满了蜜罐。
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-05",
"south":__DIR__"b-08",
]));
	setup();
}

void init()
{
	if( this_player()->query_temp("evil/water/ask-mission-3") )
		add_action("do_search","search");
}

int do_search()
{
object ob;

	if( !this_player()->query_temp("evil/water/ask-mission-3") )
		return 0;

	ob = new(__DIR__"obj/nectar");
	message_vision("$N在地上搜寻着，结果发现了一些$n。\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-3");
	return 1;
}
