inherit ROOM;

void create ()
{
	set("short","������");
	set("long",@LONG
�����Ǹ����ķ�����ʯש�ݣ�����Կ�����ʽ�Ĵ���������һЩ
��ζƷ����ǰ��һ������������Ϊ���ƣ�����ȴ����һ�������Ҽ���
�Ķ��䣬�о��Ϸ·���һ�����飬�����ƺ���һ����͵ĸо���

���ϰ������޲ݡ�
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-04",
"east":__DIR__"b-06",
"south":__DIR__"b-07",
]));
	setup();
}

void init()
{
	if( this_player()->query_temp("evil/water/ask-mission-2") )
		add_action("do_search","search");
}

int do_search()
{
object ob;

	if( !this_player()->query_temp("evil/water/ask-mission-2") )
		return 0;

	ob = new(__DIR__"obj/grass");
	message_vision("$N�ڵ�����Ѱ�ţ����������һЩ$n��\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-2");
	return 1;
}