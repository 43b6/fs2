inherit ROOM;

void create()
{
	set("short","��կ");
	set("long",@LONG
������һ���ţ��������Էֱ������һ���ߣ�����������һЩ��
�޷�����������ͼ�Ρ�
LONG);
	set("item_desc",([
"door":"����������һ�����͵ı�־��\n",
"��":"����������һ�����͵ı�־��\n",
"����":"����һ�����͵İ��ۣ��ƺ����Է���ʲô����...\n",
"��־":"����һ�����͵İ��ۣ��ƺ����Է���ʲô����...\n",
]));
	set("objects",([
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"west":__DIR__"r-11",
"east":__DIR__"r-09",
"south":__DIR__"r-03",
]));
	setup();
}

void init()
{
add_action("do_put","put");
}

int do_put(string arg)
{
object me,ob;

	me = this_player();

	if( !arg )
		return 0;
	if( arg != "snake statue" && arg !="statue" )
		return 0;
	if( !present("snake-key-1",me) )
		return notify_fail("����ô��\���޷���������\�밼���ڣ��ƺ����ϡ�\n");

	message_vision("$N�����͵����\���˰����ڡ�\n",me);
	call_out("door",3,me);
	destruct(present("snake-key-1",me));
return 1;
}

int door(object me)
{
object ob = this_object();

	message_vision("���Ż����Ĵ򿪡�\n",me);
	set("exits/north",__DIR__"r-05");
return 1;
}

int valid_leave(object me,string dir)
{
	if( present("snake-soldier",environment(me)) )
	{
		message_vision("������ȣ��ֵ��ǡ�����"+me->name(1)+"���ˡ�\n",me);
		return notify_fail("�����·�Ѿ�����ס�ˡ�\n");
	}
	if( dir == "north" )
	{
		message_vision("$Nһ�߹��ż����������漴���ϡ�\n",me);
		delete("exits/north");
	}
return 1;
}