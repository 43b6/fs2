//չ���� make by wugi
inherit NPC;
string ask_test();
void create()
{
	set_name("չ����",({"bo chen","bo","chen"}));
	set("gender","����");
	set("age",25);
	set("class","blademan");
	set("str",25);
        set("long","�𵶵��� ,������ɫ���� ,��֪��(��Ѱ)ʲô���� ?\n");
	set("combat_exp",20000);
	set_skill("blade",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	set_skill("gold-blade",50);
	set_skill("fly-steps",50);
	set_skill("sixforce",40);
	map_skill("blade","gold-blade");
	map_skill("dodge","fly-steps");
	map_skill("move","fly-steps");
	map_skill("parry","gold-blade");
	map_skill("force","sixforce");
	set("chat_chance",10);
	set("chat_msg",({
		"չ���е���������ȥ ,��ɫ���ǻ���.\n",
		"չ����˵�� : �군�� ,��ô��ʦ�������� ?\n"
		}));
	set("inquiry",([
	"��Ѱ" : "ʦ�������ͷ�(����)���ɽ�֣���ź��� ,������(Ͷ��)ʱ ,ȴ��͵�� .\n",
    "����ӡ��" : (:ask_test:),
	"����" : "���Ǳ��η���������� !\n",
	"Ͷ��" : "����ס�����гǶ���һ�ҿ�ջ ,�� , �����Ҳ�С�� .\n",
	]));
	setup();
	create_family("����",6,"����");
	carry_object("/open/gblade/obj/blade1")->wield();
	add_money("gold",10);
}



int accept_fight(object who)
{
return notify_fail("չ����˵�� : ��û�����Һ�æ��\n");
}


int accept_object(object me,object ob)
{
  if(ob->query("id")=="picture")
   {
	if(me->query("quests/bochen_trouble"))
      {
       command("say �ϴ����л��İ�æ !");
       return 1;
      }
    if(me->query("family/family_name")!="����")
    {
      command("thank "+me->query("id"));
      me->set("quests/bochen_trouble",1);
      new("/obj/money/gold")->move(me);
      me->add("combat_exp",100);
      message_vision("չ����ȡ��һ���ƽ� ,����$N !\n",me);
      command("say СС�ƽ� ,���ɾ��� ,�Ժ�����������ǿ�!");
    }
 else {
	command("smile "+me->query("id"));
	if(me->query("gender")=="����")
	command("say Сʦ�� ,����� !");
	if(me->query("gender")=="Ů��")
        command("say Сʦ�� ,����Ů�к��� !");
	me->set("quests/bochen_trouble",1);
	new("/obj/money/gold")->move(me);
	me->add("combat_exp",500);
	message_vision("չ����ȡ��һ���ƽ� ,����$N !\n",me);
	command("say Ϊ�˱����� ,ʦ�ֽ��㼸�� !");
	tell_object(me,"����չ���еĽ̵� ,������Լ��ƺ������˲��� !\n");
	}
  return 1;
    }
}
string ask_test()
{
if(this_player()->query("quests/yan")==3)
{
 if(this_player()->query("quests/bochen_trouble",1)&&this_player()->query("quests/2ndtest")<1)
{
int i;
i=random(3)+1;
command("say лл��֮ǰ�İ�æ.��Ը�⽫�������ϵ�����ӡ�Ǵ���������!\n");
this_player()->set("quests/2ndtest",i);
this_player()->set("quests/yantestmark1",1);
return("����..ʣ�µ�ӡ��..���ҪѰ�����������½.�����ҿ�������appo ͵͵����˵.��ʵ..������ӡ�ǲ��ڿ���quest���������..����Դ�(quest)��������Щ�ط��Ƚ��п���\n");
}
 else if (this_player()->query("quests/2ndtest")!=0)
  return ("���Ѿ���ӡ�Ǹ�����..�㻹Ҫ��ʲô\n");
 else
return ("װУά..�㶼��֪���ҵķ���..����Ҫӡ��!!\n");
}
else 
return ("ɶӡ��..����˵ʲô?\n");
}
