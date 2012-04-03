//������ onion ���¸�д..ʹ�� heart_beat

#include </open/open.h>
#include <command.h>

inherit NPC;

void create()
{
	set_name("Ѳ�߽�����",({"soldier"}) );
	set("gender","����");
	set("age",25);
	set("class","soldier");
	set("str",40);
	set("long","������λ����͵ľ��٣�������ڵ�������Ѳ�߹�����һ�����������˧���ˡ�\n");
	set("max_kee",600);
        set("combat_exp", 8000);
	set("inquiry", ([
	  "thief" : "�⾩������Ҳ����û�й�, ֻ������ֵ����Ƿ���ѽ��",
	]));  
	set_skill("blade",40);
	set_skill("parry",30);
	set_skill("dodge",20);
	set_skill("her-blade",40);
	map_skill("blade","her-blade");
	set_temp("apply/damage",40);
	set_temp("apply/dodge",40);
	set_temp("apply/attack",40);

	setup();
	carry_object(CAPITAL_OBJ"Ns_suit")->wear();
	carry_object(CAPITAL_OBJ"Ns_boots")->wear();
	carry_object(CAPITAL_OBJ"Ns_hat")->wear();
	carry_object(CAPITAL_OBJ"Ns_blade")->wield();
}

void init()
{
	set_heart_beat(1);
        :: init();
}

void heart_beat()
{
	object ob=this_object();
	if( random(20) < 1 )
	if( !is_fighting() )
		GO_CMD->main(ob, environment(ob)->query("gopath"));
	:: heart_beat();
}

int accept_kill(object who)
{
	who->set_temp("ɱ����Ѳ�߽�����",1);
	command("say ��"+RANK_D->query_rude(who)+who->name()+"�����������ӽ��µ��ҡ�");
	return 1;
}
int accept_fight(object who)
{
	return notify_fail("������˵���Բ���������ִ�й���\n");
}

void greeting(object who)
{
        int power;
        if( who->query("class") == "officer")
        {
           power = who->query("max_officer_power");
           if( power <1000)
           {
             command("say ���˽������ϰ�!!");
           }else
           {
             command("bow "+getuid(who));
           }
           return;
        }
        
        if( who->query_temp("ɱ����Ѳ�߽�����") )
	{
          command("angry "+getuid(who));
	  command("say ��������ҳ���������ˣ��������־��ܡ�\n");
	  kill_ob(who);
	}
	else
	{
 	  if( who->query_temp("���������������") )
                command("smile "+getuid(who));
	  else
	  {
                command("stare "+getuid(who));
		command("say �ھ�����Ҫ�ع���, �����������, ��������!!");
	  }
	}
	return;
}

