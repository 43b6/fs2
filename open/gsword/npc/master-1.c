#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
	set_name("����",({"master swordsman","master"}));
 set("long","��ʿ���������� ,���������гǽ����»�Ա .\n");
		set("gender","����");
	set("class","swordsman");
	set("nickname","������");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",43);
	set("title","��ʿ����������");
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",1400);
	set_skill("literate",40);
	set("max_force",1400);
	set_skill("array",80);
	set_skill("move",60);
	set_skill("force",60);
	set_skill("dodge",80);
	set_skill("parry",60);
	set_skill("sword",100);
	set_skill("unarmed",40);
	set_skill("blade",40);
	set_skill("staff",40);
	set_skill("throwing",40);
	set_skill("dagger",40);
	set("force_factor",10);
	set_skill("hammer",40);
	setup();
	carry_object("/open/gsword/obj/heaven-sword")->wield();
	carry_object("/open/gsword/obj/tiger-surcoat")->wear();
	add_money("gold",10);
}

void init()
{
	add_action("do_join","join");
}
int do_join()
	{
	if(this_player()->query("class"))
		return notify_fail("���Ѿ��������������ˡ�\n");
	this_player()->set("class","swordsman");
	message("system",HIW "����������� :\n
��ӭ" +this_player()->name()+"���뽣ʿ����!!\n\n"NOR,users());
	return 1;
}
   /*
	int do_say(string str)
	{
	object who;
	who=this_player();
	if(!who->query_temp("allow_select"))
	{
	command("say ����û��Ӧ������? ");
	return 0;
	}
	if(who->query_temp("have_say")==1)
	{
	command("say �㲻��������?");
	return 0;
	}
	if(str=="�ų˷�")
        {
	this_player()->set_temp("allow_1",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ���ͽ�ų˷��!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="�ų���")
	{
	this_player()->set_temp("allow_2",1);
	command("smile");
	command("say �� ,��Ͱ��ҵĴ�ͽ�ų��ư�!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="����")
	{
	this_player()->set_temp("allow_3",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ������ӷ��ɰ�!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="�Ժ�")
	{
	this_player()->set_temp("allow_4",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ĵ����Ժװ�!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="����")
	{
	this_player()->set_temp("allow_5",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ������������!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="��˫˫")
	{
	this_player()->set_temp("allow_6",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ�Ů���Ӻ�˫˫��!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	if(str=="����ң")
	{
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ߵ�������ң��!");
	this_player()->set_temp("have_say",1);
	return 0;
	}
	command("say û����!");
	return 0;
	}
  */
