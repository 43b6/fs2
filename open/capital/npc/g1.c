// made by onion
#include </open/open.h>
inherit NPC;
object leader;
void create()
{
        set_name("��˫˫",({"feng"}));
        set("long","������������������ѱ����, ������޺�����, ����ʱ¶Ц��, ��ȴ���������ĸо���\n");
        set("gender","Ů��");
	set("class","swordsman");
        set("combat_exp", 200000);
        set("attitude","heroism");
	set("age",29);
	create_family("�ɽ���",5,"����");
	set("nickname","�ڰ�˫��");
	set("force",1000);
	set("max_force",1000);
        set("force_factor", 10);
        
        set_skill("force",20);
        set_skill("shaforce",40);
        set_skill("sha-array",60);
        set_skill("sha-steps",60);
        set_skill("shasword",50);
        set_skill("sword",80);
        set_skill("dodge",60);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("array",80);
        map_skill("sword","shasword");
        map_skill("force","shaforce");
	map_skill("array","sha-array");
	map_skill("dodge","sha-steps");
	map_skill("move","sha-steps");
        set("functions/sha_kee/level",30);
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
                (: command,"perform sword.swordkee" :),
                (: perform_action("sword.sha_kee") :),
        }));
	setup();
	carry_object(CAPITAL_OBJ"cloth3")->wear();
	carry_object(CAPITAL_OBJ"sword1")->wield();
	add_money("silver",10);
}

void init()
{
	leader=find_object(CAPITAL_NPC"g0");
	set_temp("leader",leader);
        set_leader(leader);
}

int accept_fight(object who)
{
	leader=present("chang-shun",environment(this_object()));
	if( leader )
		leader->accept_fight(who);
	else	::accept_fight(who);
	return 1;
}
int accept_kill(object who)
{
	leader=present("chang-shun",environment(this_object()));
        if( leader )
        	leader->accept_kill(who);
	else    ::accept_kill(who);
        return 1;
}


