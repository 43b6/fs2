inherit ROOM;

void create ()
{
	set("short","������");
	set("long",@LONG
�����÷��������������ȴû�����ҵĸо���ÿһ����Ʒ��
�����ж�ʱ����ϴ�ţ�һ��ҳ���û�У������ڷ��ڵ��ϵ�ľ�Ķ�ʮ
�ֵĸɾ�...����̫����˼���ˣ�˭�����͵���ľ�Ķ��������...��
�����ƺ�������������ĸ���...

���ϰ�����ľ�ġ�
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-05",
"east":__DIR__"b-08",
]));
	setup();
}

void init()
{
	if( this_player()->query_temp("evil/water/ask-mission-1") )
		add_action("do_search","search");
}

int do_search()
{
object ob;

	if( !this_player()->query_temp("evil/water/ask-mission-1") )
		return 0;

	ob = new(__DIR__"obj/torch");
	message_vision("$N�ڵ�����Ѱ�ţ����������һЩ$n��\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-1");
	return 1;
}
 
 