//禁卫军 onion 重新改写..使用 heart_beat

#include </open/open.h>
#include <command.h>

inherit NPC;

void create()
{
	set_name("巡逻禁卫军",({"soldier"}) );
	set("gender","男性");
	set("age",25);
	set("class","soldier");
	set("str",40);
	set("long","京城内位阶最低的军官，负责城内的守卫及巡逻工作，一身军服看起来帅呆了。\n");
	set("max_kee",600);
        set("combat_exp", 8000);
	set("inquiry", ([
	  "thief" : "这京城里大盗也不是没有过, 只是这次闹的满城风雨呀。",
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
	who->set_temp("杀京城巡逻禁卫军",1);
	command("say 大胆"+RANK_D->query_rude(who)+who->name()+"，竟敢在天子脚下捣乱。");
	return 1;
}
int accept_fight(object who)
{
	return notify_fail("禁卫军说：对不起，我正在执行公务。\n");
}

void greeting(object who)
{
        int power;
        if( who->query("class") == "officer")
        {
           power = who->query("max_officer_power");
           if( power <1000)
           {
             command("say 大人进京面上啊!!");
           }else
           {
             command("bow "+getuid(who));
           }
           return;
        }
        
        if( who->query_temp("杀京城巡逻禁卫军") )
	{
          command("angry "+getuid(who));
	  command("say 你这个扰乱城内秩序的人，还不束手就擒。\n");
	  kill_ob(who);
	}
	else
	{
 	  if( who->query_temp("有向城门守卫报告") )
                command("smile "+getuid(who));
	  else
	  {
                command("stare "+getuid(who));
		command("say 在京城里要守规矩喔, 否则送入大牢, 绝无例外!!");
	  }
	}
	return;
}

