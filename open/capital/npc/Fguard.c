//����������

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("����������",({"fightroom guard","guard"}) );
	set("gender","����");
	set("age",30);
	set("class","soldier");
	set("str",44);
	set("long","���Ǹ�ͨ���������𾺼����ڵİ�ȫ�����ġ�\n");

        set("max_kee",1000);
	set("combat_exp", 22000);
	set_skill("unarmed",60);
	set_skill("parry",40);
	set_skill("dodge",40);
	set_skill("longfist",80);
	map_skill("unarmed","longfist");
	set_temp("apply/damage",40);
        set_temp("apply/dodge",40);
        set_temp("apply/attack",40);

	setup();
}

int accept_fight(object who)
{
	return notify_fail(name()+"˵��Ҫ���ȥ��̨����������\n");
}
int accept_kill(object who)
{
	object *inv=all_inventory(environment(this_object()));
	int i;
	say(name()+"�ȵ���������"+RANK_D->query_rude(who)+"\n");
        command("say �ֵ���, ��!!\n");
	who->set_temp("ɱ����������",1);
	for(i=0;i<sizeof(inv);i++)
                if( getuid(inv[i])=="fightroom guard" )
			inv[i]->kill_ob(who);
	return 1;
}

void greeting(object who)
{
    if(!who) return ;
        if( who->query_temp("ɱ����������") )
	{
	  command("angry "+getuid(who));
	  command("say �ð�"+RANK_D->query_rude(who)+"!!ɱ�˳������������־��ܡ�\n");
	  kill_ob(who);
	}
}

