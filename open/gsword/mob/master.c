#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
	   set_name("֣ʿ��",({"master swordsman","master"}));
set("long","���������ֵ�һ����ʦ :֣ʿ�� .����ִ���ɽ��Ż� ,�ɽ�����
����ʮ���������� ,���ڼ������ſ��ľ�Ӫ�� ,������н�����
һ���� ,�ɽ���ѧҲ�ڼ�λ��ʦ������ ,������ ,���ɽ�������
���µ��ɽ����� ,���׽������а�· ,֣ʿ���ֱ���һ·����
���ɽ����� ,������ڰ�·�� ...\n");
		set("gender","����");
	set("guild_master",1);
	set("class","swordsman");
	 set("nickname","�޼�����");
          set("combat_exp",1000000);
          set("attitude","heroism");
	  set("age",76);
	set("title","�ɽ��ɵ�����������");
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",3000);
	set_skill("literate",80);
	set("max_force",3000);
	set_skill("array",100);
	set_skill("move",80);
	set_skill("force",60);
	set_skill("dodge",90);
	set_skill("parry",100);
	set_skill("sword",120);
	set_skill("unarmed",60);
	set_skill("whip",100);
	set_skill("blade",40);
	set_skill("spells",40);
	set_skill("staff",40);
	set_skill("throwing",40);
	set_skill("nine-steps",80);
	map_skill("dodge","nine-steps");
	map_skill("move","nine-steps");
	set_skill("shansword",100);
	map_skill("sword","shansword");
	map_skill("parry","shansword");
	set_skill("cure",60);
	set_skill("dagger",40);
	set("force_factor",10);
	setup();
	carry_object("/open/gsword/obj/dragon-sword.c")->wield();
	carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
	add_money("gold",10);
	create_family("�ɽ���",3,"������");
}

void init()
{
	add_action("do_join","join");
	add_action("do_say","select");
}
  void attempt_apprentice(object ob)
{
	if(ob->query("marks/�ɽ�����")==1)
	{
	if((int)this_player()->query("combat_exp")<=100000)
	{
	command("? " +ob ->query("id"));
	command("say �㲻�ǰݹ��ҵĵ�����?");
	command("say ����ĳ̶Ȼ�����������ָ��!");
	command("say �úø�����ʦ����ѧ�����!");
	return 0;
	}
	command("look "+ob->query("id"));
	command("smile");
	command("say ��,���Ȼ�ǿ���֮��,�ӽ������Ϸ�����ָ��!");
	command("recruit "+this_player()->query("id"));
	message("system",HIW"֣ʿ��������Ц: 
��������....�Ϸ�ʵ��̫������!
Ӣ�۳����� ,"+this_player()->name()+": �������Ϸ���������.\n"NOR,users());
	return ;
	}
      command("hmm");
	command("say ������ ,��ȥ���ҵ��߸�ͽ�ܰ� !");
	command("say �����(select)˭��?");
	ob->set_temp("allow_select",1);
}
int do_join()
	{
	if(this_player()->query("class"))
		return notify_fail("���Ѿ��������������ˡ�\n");
	this_player()->set("class","swordsman");
	message("system",HIW "֣ʿ��������� :\n
��ӭ" +this_player()->name()+"���뽣ʿ����!!\n\n"NOR,users());
	return 1;
}
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
