inherit ROOM;

void create ()
{
	set("short","������");
	set("long",@LONG
���̵Ĺ������������Ե�¯���ϼ����ţ���С������Ķ������
��ʱ�������������ͣ�ֻ�����ϸ��˲��ϵķ��������⣬�F�⣬æ��
���ɿ�������ͻȻ�����Լ�������·����ֽ�...

���ϰ������۹ޡ�
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
	message_vision("$N�ڵ�����Ѱ�ţ����������һЩ$n��\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-3");
	return 1;
}
