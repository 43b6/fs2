inherit NPC;
string do_ask();
string do_ask_bo();

void create()
{
	set_name("����",({"bandit"}));
	set("long","��ͷ���Ե� ,һ����֪���������� ,�������˸������ !\n");
	set("gender","����");
	set("combat_exp",723);
	set("attitude","friendly");
        set("age",25);
	set("class","bandit");
	set("str", 30);
        set("cor", 30);
        set("per", 15);
        set("int", 15);
	set("cps", 30);
	set("con", 30);
        set("kar", 20);
        set_skill("dodge",30);
	set_skill("dagger",30);
        set_skill("parry",20);
	set("inquiry",([
	"չ����" : (:do_ask_bo:),
	"����" : "��� ,����Ұ�����ʲ ?",
	"����" : "����һ������ !",
	"��" : (:do_ask:)
	]));
	setup();
        carry_object("/obj/example/dagger.c")->wield();
}
   void init()
  {
   add_action("do_nod","nod");
  }
     int do_nod(string str)
  {
   object me;
   me=this_player();
  if(!me->query_temp("can_buy_picture"))
  {
    return 0;
   }
   if(me->query("quests/bochen_trouble")||me->query_temp("have_buy_picture"))
  {
  command("say ���Ѿ��������� !");
	return 1;
  }
    if(me->can_afford(1000)!=1)
  {
   command("say �����̵� ,��ˣ���� !");
	this_object()->kill_ob(me);

	return 1;
   }
   me->pay_money(1000);
  me->set_temp("have_buy_picture",1);
  new("/open/gblade/obj/picture")->move(me);
   message_vision("$N����Ǯ ,�����򿪰��� ,ȡ����������$N\n",me);
   command("smile "+me->query("id"));
  command("say ��л������� !");
	me->delete_temp("know-bo");
   return 1;
 }
   string do_ask_bo()
   {
	this_player()->set_temp("know-bo",1);
	return "���� ! ����͵�˶�������֪���ı��� !";
    }

 string do_ask()
  {
	if(!this_player()->query_temp("know-bo"))
	return "ʲô���� ? �Ҳ�֪������˵ʲ ?";
	this_player()->set_temp("can_buy_picture",1);
   command("say ���Ǵ��� ,�������� ,�������������� !");
    return "����ʮ������ ,Ҫ��Ҫ ?";
  }
