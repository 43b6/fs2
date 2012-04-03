inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG

�Դ���Ԫ�ԵĶ�������һ���ֲ�����Ԫ�Ե����Ӿ;���������Ϊ���Ķ�
�ӵ��棬���õİ����൱�����أ����а���һ���񰸣�����һ�������
�Ĺ����񣬷���ׯ�ϣ����԰���һЩ��������ʱ��Ʈ��һЩ̴���������
������ڹ�����ʿ��ǰ��(pray) , ���ּ���

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-3.c",
]));
	set("item_desc",
	([ "statue"  :  "һ������ɵĹ����� \n" ]));
  set("light_up", 1);

  setup();
}
void init()
{
        add_action("do_pray","pray");
	add_action("do_search","search");
	add_action("do_move","move");
}


int do_pray(string arg )
{
	object ob;
	ob=this_player();
	if(ob->query("sen") > 50)
	{
   message_vision("$N���ĵ��������Ĥ�ݡ�....Ը�����ˡ�ҵ�ɱҵ....\n",this_player());
	if(random(10)>1)
	{
	call_out("do_act1",3,ob);
	return 1;
	}
	call_out("do_act2",3,ob);
	return 1;
	} else
	message_vision("$N�ľ��񲻹�����, �����Ըж���������..\n", this_player());
	return 1;
}
int do_act1(object ob)
   {
     message_vision("$N�·�����������ʿ����˵��....����ʱ������������ƫ̻�Ҽ�.....
$N��������һƬ��� , ����֮�������\n\n",ob);
	ob->add("bellicosity",-5);
	ob->add("sen",-50);
     return 1;
}
int do_act2(object ob)
{
       message_vision("$Nû��������˵��ȴ���������˵Ĺƻ�֮������֪������ɱ�����ڡ�\n",ob);
       ob->add("bellicosity", 2);
      return 1;
   }


int do_search(string str)
{
	if(!str)
	{
	if(this_player()->query("lotch")<1)
	return 0;
	write("������ϸϸ�Ĳ쿴�������� , ���ֹ������ƺ���Щ���� .\n");
	return 1;
	}
	if(str=="statue")
	{
	if(this_player()->query("lotch")<1)
	return 0;
	write("����쿴������ʱ , ���ֱ�������� : �������ƺ������ƶ� \n");
	this_player()->set_temp("can-move",1);
	return 1;
	}
return 0;
}
int do_move(string str)
{
	if(!str||str!="statue")
	return notify_fail("��Ҫ�ƶ�ʲô ?\n");
	if(!this_player()->query_temp("can-move") )
	return notify_fail("�㲻����������ֻ \n");
	message_vision("$N�ߵ�������ǰ , �����������ƶ�\n",this_player() );
	message_vision("����ͻȻ���˸��� ,$N���µ�����ȥ !\n",this_player() );
	this_player()->delete_temp("can-move");
	this_player()->move("/open/gblade/room/p-room1");
	write("����һ�� , ������˵��� \n");
	return 1;
}
