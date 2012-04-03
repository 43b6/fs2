///open/prayer/room/hole/1.c

inherit ROOM;
int have=1;
void create()
{
	set("short", "ʯ��");
	set("long", @LONG

	��˵��������а���ߵ���ڣ����ǳ���ʯ��(wall)�⣬û�м�����
	ν��"��"��������ʯ�ڵĽ�����һ��ͻ����ʯ��(stone)�� ������
	Ը�����������ƿ�(push)ʯ������.......

LONG	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/prayer/room/westarea/road19",
]));
	set("item_desc", ([
	"wall":	"һ�����ɫ��ʯ�ڣ�����Գ��������ƿ���\n"
	]));
           set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/oldwoman" : 1,
]));
     set("light_up", 1);
        setup();
}

void init()
{
        add_action("search_here", "search");
	add_action("do_turn","turn");
	add_action("do_push","push");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 50000)  && query_temp("can_pass") )
      write("��������ʯ���ϵ�ʯͷ��ѽ����,�������ͻ���ʯͷ�ƺ��е�����.\n"+
            "���������ת��ת����(turn stone).\n");
    else
      write("Ҳ�����㾭�鲻��,��ʲôҲû����...\n");
    return 1;
}
int do_turn(string str)
{
	if(!str || str != "stone")
		return notify_fail("��Ҫת��ʲô?\n");
	else if(!query_temp("stone_turned")) {
set_temp("stone_turned",1);
message_vision("$N��ʯ�������ת������Ȼ����������ת��������\n", this_player());
	}
	else {
		delete_temp("stone_turned");
		message_vision("ʯ�������ػص�ԭλ��\n", this_player());
		if(query("exits/enter"))
			delete("exits/enter");
	}
	return 1;
}

int do_push(string str)
{
	object ob;
	ob = this_player();

	if(!query_temp("stone_turned"))
		return notify_fail("��������ƵĶ�ʯ����??\n");
	else if(!str || str != "wall")
		return notify_fail("������ʲô?\n");
	else {
	set("exits/enter",__DIR__"2.c");
message_vision("$N�����İ�ʯ���ƿ�����ŷ���ԭ����һ��ͨ����Ѩ��·��\n", ob);
		call_out("do_close",10);
	}
	return 1;
}

void do_close()
{
	if(!query("exits/enter"))
		return;
	delete("exits/enter");
	tell_room(this_object(),"�����ƿ���ʯ���ֻ������Զ�����������\n");
}
 int valid_leave(object ob, string dir)
  {
    if(dir=="enter" && !ob->query_temp("can_pass",1))
        return notify_fail("���!!Ϊʲô�޷�������??�ǲ���©����ʲô??\n");
        
   return 1;
}

