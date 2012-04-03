//���� made by chun,fix by funkcat, onion ���¸�д
		
#include </open/open.h>
inherit NPC;
string do_help();
object ob=this_object();

void create()
{
	set_name("��������",({"gate soldier","soldier"}) );
	set("gender","����");
	set("age",33);
	set("class","soldier");
	set("str",55);
	set("long","������λ�׽ϵ͵ľ��٣�������ŵ�����������һ�����������˧���ˡ�\n");
        set("combat_exp",25000);
	
	set("max_kee",1000);
	set("chat_chance_combat", 2);
	set("chat_msg_combat",({
	"���������ȵ��������ڴ˵���..��������ǰ�!!\n",
	(: this_object(),"do_help" :),
	}) );
	set("inquiry", ([
	"thief" : "���? ��Ȼ��Ҷ���˵, �����һ���û���Ź���  :P ",
	]));
	set_skill("blade",40);
	set_skill("parry",30);
	set_skill("dodge",20);
	set_skill("her-blade",60);
	map_skill("blade","her-blade");
        set_temp("apply/damage",50);
        set_temp("apply/dodge",50);
        set_temp("apply/attack",50);
	setup();
	carry_object(CAPITAL_OBJ"Ns_armor")->wear();
	carry_object(CAPITAL_OBJ"Ns_boots")->wear();
	carry_object(CAPITAL_OBJ"Ns_hat")->wear();
	carry_object(CAPITAL_OBJ"Ns_blade")->wield();
}

void init()
{
	object who;
	:: init();
	if(interactive(who =this_player()) && !is_fighting() )
		add_action("do_report","report");
}

int accept_fight(object who)
{
	return notify_fail("��������˵���Բ���������ִ�й���\n");
}
int accept_kill(object who)
{
	command("say ��"+who->query("name")+", ��������!!");
	who->set_temp("ɱ��������",1);
	return 1;
}
string do_help()
{
	object guard;
	command("say ��..���, �Ų�ס��..");
	say("[33m����������������ͬ���æ�ֵ����ˡ�[0m\n");
	guard=new(CAPITAL_NPC"gate_soldier");
	guard->move( environment() );
	guard->kill_ob( ob->query_enemy()[0] );
	return "[1;33m���������ȵ������˰�..������..[0m\n";
}
void greeting(object who)
{
	if( !is_fighting() && !who->query_temp("ɱ��������") ) {
	if( who->query_temp("���������������") || wizardp(who) ) {
		command("smile "+getuid(who) );
		command("say "+who->name()+"��, ��ӭ�ι۾��ǡ� :)");
	}
       	else {
		command("stare "+getuid(who));
		command("say �ܣ���λ"+RANK_D->query_respect(who)+", �������ģ�����(report)������");
	}
	}
}

int do_report(string arg)
{
	object who=this_player();

	if( !arg || arg != getuid(who) )
		return notify_fail("����������id��\n");

	if( who->query_temp("���������������") )
	  return notify_fail("���Ѿ�֪���ˣ��㲻�ö���˵��ô���, ���id��"+getuid(who)+"���԰ɣ�\n");
	who->set_temp("���������������",1);
	who->delete_temp("ɱ����Ѳ�߽�����");
	command("say лл���ĺ���������������ͨ���ˡ�\n");
	return 1;
}
