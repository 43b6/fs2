inherit NPC;
string do_lend();
int i=1;

string do_ask (object me);

void create()
{
	set_name("����", ({ "cook liu","liu" }) );
        set("long", "
���ǽ����صشӾ��������ĳ�ʦ������һ���������Ƕ�С����ָ��ʵ��
��������������ʲô���µĲ��ȡ�
");
        
        set("age", 35);
	set("combat_exp", 500);
	set_skill("blade", 34);
        set_skill("dodge", 30);
        set_skill("parry", 32);
	set("title","��ʦ");
        

        set("race", "����");
        set( "gender", "����");


        set("limbs", ({ "ͷ��","�ز�"  "˫��", "˫��", "����" ,"�ʴ�Ķ���","����"}) );
     
        set("attitude", "friend");

	set("chat_chance",5);
        set("chat_msg", ({"����֪����ô�����óԲ���\n",
        }) );
        set("chat_chance_combat",30);
set("chat_msg_combat",({"����һ�������书�ĳ�ʦ�������ʲôӢ�ۺú���\n"
        }));
	set("inquiry",([
	"������" : "�� ,������ЩѾͷ�����ҽ貶���� !\n",
	"Ѿͷ" : "���ǽ�������ЩѾ���� ! ����һ����һ������ !\n",
	"�ɶ�" : "�� , ���Ǵ�С�������Ѿ�� , ��ӽ���С�� , �ǵô������� !\n",
	"�貶����" : (:do_lend:)
	]));
        setup();
	 carry_object("/open/gblade/obj/knife.c")->wield();
	add_money("silver",10);
}

string do_lend()
{
	if(this_player()->query_temp("net"))
	return "�㻹û����Ү !";
	if(i==0)
	return "�Ѿ�������ˆ� !";
	new("/open/gblade/obj/net")->move(this_player());
	message_vision("����ȡ���˲����� , ����$N \n",this_player());
	i=i-1;
	this_player()->set_temp("net",1);
	return "�����˿�Ҫ����� !";
}
int accept_object(object who, object ob)
{
	if(ob->query("id")=="net")
	{
	command("smile");
	if(!this_player()->query("quests/lotch") && this_player()->query("lotch")<1 && present("papyrus",this_player() ) )
	{
	command("say �����Ǹ����˾��� , �Ҹ��������Ϣ !");
	command("say ���Ҵ�С�������ͨ���� , ��֪���� , �к����� , �����Ͷ��� !");
	this_player()->set_temp("know_leing",1);
	}
	this_player()->delete_temp("net");
	destruct(ob);
	i=i+1;
	return 1;
	}
return 1;
}
