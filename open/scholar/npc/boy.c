//С��ͯ 

inherit NPC;
string do_act();
 int i=0;

void create()
{
set_name("С����",({"bookboy"}));
	set("gender","����");
	set("age",8);
set("class","scholar");
	set("str",10);
set("long","һ����������Сͯ ,����\�������ӱ��� .");
	set("chat_chance",10);
	set("chat_msg",({
    "С����һ��ãȻ�Ŀ������ӱ���\n"
		}));
      set("inquiry",([
    "���ӱ���" : (:do_act:)
	]));
	set("combat_exp",100);
	setup();
	add_money("silver",1);
}

int accept_fight(object who)
{
return notify_fail("С���׷��� : ����ooxx....���Ѷ�.\n");
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
   if(i>10000)
      {
return "���Ѿ�����Ҫ����� !";
      }
   command(" say ���濴������һ����, ������ ");
	command("sigh");
	this_player()->set_temp("can_say",1);
  return "�Ž��������Ǳ�������Ϊ����...";
 }
   void do_say(string str)
{
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="���ӱ���")
  {
   i=i+1;
     message_vision("$N˵�� : ���ӱ��� !\n",this_player());
   new("/open/scholar/obj/book")->move(this_player());
     message_vision("С����˵�� : $N����ѧʶԨ��!!\n",this_player());
   if(this_player()->query("gender")=="����")
  command("say ������Ӣ�� , ���Ȿ����������� !");
  if(this_player()->query("gender")=="Ů��")
   command("say �� , ���������ǻ۵�Ů�� !�Ȿ���͊� !");
  command("smile");
   this_player()->delete_temp("can_say");
	}
  }
}
