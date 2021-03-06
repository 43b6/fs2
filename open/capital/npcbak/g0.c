//  made by onion
#include </open/open.h>
inherit NPC;
object follow;
string do_team();
void create()
{
        set_name("长孙常明",({"chang-shun","chang"}));
        set("long","他身形顽长, 宽袍大袖, 面容带有一股英悍之气, 但书生气质却很浓烈。\n");
        set("gender","男性");
	set("class","swordsman");
        set("combat_exp", 300000);
        set("attitude","heroism");
	set("age",35);
	create_family("仙剑派",5,"弟子");
	set("nickname","黑白双侠");
	set("force",1000);
	set("max_force",1000);
        set("force_factor", 10);

        set_skill("force",30);
        set_skill("shaforce",50);
        set_skill("sha-array",70);
        set_skill("sha-steps",70);
        set_skill("shasword",60);
        set_skill("sword",90);
        set_skill("dodge",70);
        set_skill("parry",70);
        set_skill("unarmed",50);
        set_skill("array",90);
        map_skill("sword","shasword");
        map_skill("force","shaforce");
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set("functions/sha_kee/level",40);
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
                (: command,"perform sword.swordkee" :),
                (: perform_action("sword.sha_kee") :),
        }));
	setup();
	carry_object(CAPITAL_OBJ"cloth4")->wear();
	carry_object(CAPITAL_OBJ"sword0")->wield();
	add_money("silver",20);
}

void init()
{
	follow = find_object(CAPITAL_NPC"g1");
	set_temp("leader",this_object());
	this_object()->add_team_member(follow);
	set_heart_beat(1);
}
void heart_beat()
{
	if( is_fighting() )
		command("team form sha-array");
	:: heart_beat();
}

int accept_fight(object who)
{
	follow=present("feng",environment(this_object()));
	if( follow )
	{
		command("say 来的好, 让我们两夫妇来会会你。");
		command("team form sha-array");
		follow->fight_ob(who);
		this_object()->fight_ob(who);
	}
	else	::accept_fight(who);
	return 1;
}

int accept_kill(object who)
{
	follow=present("feng",environment(this_object()));
	if( follow )
	{
		command("say 来的好, 让我们两夫妇来会会你。");
		command("team form sha-array");
		follow->kill_ob(who);
		this_object()->kill_ob(who);
	}
	else    ::accept_kill(who);
	return 1;
}
