inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

��һ�߽�����ֱ���͸����㣬�����ǵص��ĳ����ˣ�������ܵ�ʯ������
ϸϸ�Ŀ���һ�飬���������½ǵ�ʯ���Ϸ�����һ��ʯͷ��stone�� �ƺ�
�����ƣ�push����ȥ��

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "north" :__DIR__"c1-1.c",
  "west" :__DIR__"c2-8.c",
]));

  setup();
}
void init()
{
        add_action("do_push","push");
        add_action("do_climb","climb");
}
int do_climb(string str)
{
        if(!str || str != "stair")
        return notify_fail("����������ȥ���\n");
        message_vision("$N�ɲ�����¥�ݡ�\n",this_player() );
        this_player()->move("/open/gblade/room/g1-2.c");
        message_vision("$N�����ӵ�����������������Զ����ԭλ�ˣ������������ư���\n",this_player());
return 1;
}
int do_push(string str)
{
        if(!str || str != "stone")
	return notify_fail("��Ҫ�����ﰡ !\n");
	if(this_player()->query("str")+this_player()->query("force")/10 <50 )
	return notify_fail("�����������̫С��һ�㡣\n");
     if(query("stone_pushed") )
        return notify_fail("ʯͷ�Ѿ����˶������� !\n");
        message_vision("$N�þ�ȫ���ÿһ��������������....ʯͷͻȻ�������˽�ȥ��\n",this_player() );
        message_vision("ͻȻ���Ե�ʯ�����Ա����˿�����¶����һ�����ݡ�\n",this_player() );
        set("stone_pushed",1);
        set("long", @LONG

�����ڷ����˵ص��ĳ��ڣ��뵽�����뿪��һ�����µĵص���������и�
�����޵�ϲ�á�һ��¥��(stair)����ͨ�����ڡ�

LONG);
set("item_desc", ([
"stair": "
�����ƺ�����ͨ�����档
",
]));
return 1;
}

