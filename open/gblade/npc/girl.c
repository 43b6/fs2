inherit NPC;
void create()
{
	set_name("�ɶ�", ({"girl"}));
	set("long","���Ҵ�С�������Ѿ�� , �������ǿɰ� , ��������һ��
�����������������˵� \n");
	set("gender","Ů��");
	set("combat_exp",1000);
	set("attitude","friendly");
	set("age",15);
	set("title","����Ѿ��");
	set("score",1000);
	set("force",0);
	set("max_force",0);
	set_skill("force",5);
	set_skill("dodge",20);
	set_skill("parry",20);
	set_skill("literate",15);
	set_skill("unarmed",30);
	set("str", 20);
	set("cor", 26);
	set("per", 28);
	set("int", 15);
	set("cps", 10);
	set("con", 20);
	set("spi", 15);
	set("kar", 15);
	set("chat_chance",10);
	set("chat_msg",({
	"�ɶ����Ž������������һ�� , ȴ���˸��� \n",
	"�ɶ�̾�˿��� , ˵�� : ˭Ը�����ץһֻ�� ?\n",
	(: this_object(),"return_home" :),
	"�ɶ�˵�� : ��һ��Ҫץ���� \n"
	}));
	set("inquiry",([
	"ץ����" : "��Ȼ���ò�����ץ�� !\n",
	"�������" : "�Һ�ϲ��� , ��ϧ��ץ���� \n",
	"��Т��" : "������ү�ĵ������֮һ , ������˧��� \n",
	"����" : "���ǽ��ŵĳ�ʦ�� \n",
	"��ү" : "������ԭ������ү�� \n",
	"��С��" : "�����ϵ۵Ľ��� , ����������������ò�ͺ��� !\n",
	"������" : "�� ! ��������һ�� , ���������������� \n"
	]));
	setup();
	add_money("silver",1);
	carry_object("/open/gblade/obj/fan");
	carry_object("/open/gblade/obj/green-cloth")->wear();
	carry_object("/open/gblade/obj/flower-shoes")->wear();
}
void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	}
	add_action("do_kiss","kiss");
}
int greeting(object ob)
 {
	if(!ob->query_temp("know-girl") )
	command("say ˭Ҫ����ץֻ������ ?");
	if(ob->query_temp("know-girl") )
       {
	if( !ob->query_temp("girl-1") && ob->query_temp("cant-enter") )
	 {
	command("say �����˰� ?���������ҵķ��� , ����С�����һ�� ");
	 command("say �߰� !");
	ob->set_temp("girl-1",1);
	 call_out("do_act",2,ob);
	 }
       }
return 1;
 }
void do_act(object ob)
 {
	ob->move("/open/gblade/room/g3-5");
	this_object()->move("/open/gblade/room/g3-5");
	 message_vision("�ɶ�����$N�����˴�С��뷿ǰ \n",ob);
	command("say "+"��С���"+ob->query("name")+"һ��æ�� !");
	call_out("do_act2",3,ob);
 }
void do_act2(object ob)
 {
	 message_vision("���ڴ���һ����������� : ������ ! \n",ob);
	ob->delete_temp("cant-enter");
	 ob->set_temp("can-enter",1);
	call_out("do_act3",2,ob);
 }
void do_act3(object ob)
{
	command("say �����߆� !");
	message_vision("�ɶ�����԰����ȥ \n",ob);
	this_object()->move("/open/gblade/room/g3-8");
}
int do_kiss(string arg)
{
	if(arg=="girl")
	{
	if(this_player()->query("gender")=="����")
	{
	if(this_player()->query_temp("know-girl")||(string)this_player()->query("id")=="wugi")
	   {
		command("blush");
		command("say ���� , ���������� ");
		return 1;
		}
	command("slap "+this_player()->query("id"));
	command("say �� , �������׺����� ?");
	return 1;
	}
	if(this_player()->query("gender")=="Ů��")
	command("say �ҿ�û��ͬ������ ");
	return 1;
	}
}
int accept_object(object who,object ob)
{
	string ob_id;
	ob_id=ob->query("id");
	if(ob_id=="net")
	{
	command("say �Ҳ�̫���è� , �����ץ�� !");
	command("give "+this_player()->query("id")+" net");
	command("addoil "+this_player()->query("id"));
	command("giggle");
	return 1;
	}
	if(ob_id=="butterfly")
	{
	if(ob->query("kee")<ob->query("max_kee"))
	{
	command("say �����һֻ��������ĺ������� ?");
	command("say �ò�����ץ�� !");
	return 1;
	}
	command("jump");
	command("say лл���� , �Ҹ�����һ������� !");
	command("say ��Т���ϲ�����ǼҴ�С��� !");
	this_player()->set_temp("know-girl",1);
	this_player()->set_temp("can-get",1);
	return 1;
	}
return 1;
}
