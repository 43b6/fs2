//С��ͯ 

inherit NPC;
string do_act();
 int i=0;

void create()
{
	set_name("С��ͯ",({"foolboy"}));
	set("gender","����");
	set("age",8);
	set("class","blademan");
	set("str",10);
   set("long","һ����ͷ���Ե�Сͯ ,���ڶ������־� .\n");
	set("chat_chance",10);
	set("chat_msg",({
		"С��ͯҡͯ���Ե��������־�\n"
		}));
      set("inquiry",([
		"���־�" : (:do_act:)
	]));
	set("combat_exp",100);
	setup();
	add_money("silver",1);
}

int accept_fight(object who)
{
 return notify_fail("С��ͯ�޵� : �� .. ��ѽ��\n");
}
void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	add_action("do_say","say");
	}
}
void greeting(object ob)
{
	command("think ");
}
  string do_act()
{
     if(i>0)
      {
 return "���Ѿ�������� !";
      }
	command("say �ұ��Ȿ���Ļ�ͷת�� ");
	command("sigh");
	this_player()->set_temp("can_say",1);
	return "��֮�� ...";
 }
   void do_say(string str)
{
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="�Ա���")
  {
   i=i+1;
   message_vision("$N˵�� : �Ա��� !\n",this_player());
	new("/open/gblade/obj/book")->move(this_player());
   message_vision("С��ͯ˵�� : �� ,$N������� !\n",this_player());
   if(this_player()->query("gender")=="����")
  command("say ������Ӣ�� , ���Ȿ����������� !");
  if(this_player()->query("gender")=="Ů��")
   command("say �� , ���������ǻ۵�Ů�� !�Ȿ���͊� !");
  command("smile");
   this_player()->delete_temp("can_say");
	}
  }
}
