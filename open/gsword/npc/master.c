#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
	set_name("֣ʿ��",({"master teng","teng","master"}));
set("long","���������ֵ�һ����ʦ :֣ʿ�� .����ִ���ɽ��Ż� .
ͬʱ��Ϊ��ʿ�����᳤ܻ .��ʮ������ ,���ɽ�������
�ܶ���һ�� ,�ֵ��������� .����������Ҳ����������
��ȫȨ���� ,֣ʿ��ÿ��������ؾ�������ѧ�� ,��
���ڴ˽Ӽ���� .\n");
		set("gender","����");
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
       set_skill("shasword",100);
      set_skill("shaforce",100);
      set_skill("sha-steps",80);
	set("max_force",3000);
	set_skill("array",100);
	set_skill("move",80);
	set_skill("force",60);
	set_skill("dodge",90);
	set_skill("parry",100);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
	set_skill("sword",120);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
	set_skill("unarmed",60);
	set_skill("whip",100);
	set_skill("blade",40);
	set_skill("spells",40);
	set_skill("staff",40);
	set_skill("throwing",40);
	set_skill("shasword",100);
	map_skill("sword","shasword");
	map_skill("parry","shasword");
	set_skill("cure",60);
	set_skill("dagger",40);
	set("force_factor",10);
	set("chat_chance_combat",50);
	set("chat_msg_combat",({
	(:exert_function,"swordkee":)
	}));
	setup();
	carry_object("/open/gsword/obj/dragon-sword.c")->wield();
	carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
	add_money("gold",10);
	create_family("�ɽ���",3,"������");
}

void init()
{
     /*
	add_action("do_join","join");
    */
	add_action("do_select","select");
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
	int do_select(string str)
	{
	object who;
	who=this_player();
	if(!who->query_temp("allow_select"))
	{
	command("say ����û��Ӧ������? ");
	return 1;
	}
	if(who->query_temp("have_say")==1)
	{
	message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),who);
	command("say �㲻��������?");
	return 1;
	}
	if(str=="�ų˷�" ||  str == "chen fon" || str == "fon")
        {
	 message_vision(HIC"$N˵�����ų˷�\n"NOR,who);
	this_player()->set_temp("allow_1",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ���ͽ�ų˷��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "�ų���" || str == "chen un" || str == "un")
	{
	message_vision(HIC"$N˵�����ų���\n"NOR,who);
	this_player()->set_temp("allow_2",1);
	command("smile");
	command("say �� ,��Ͱ��ҵĴ�ͽ�ų��ư�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "����" || str == "fan son" || str == "son")
	{
	message_vision(HIC"$N˵��������\n"NOR,who);
	this_player()->set_temp("allow_3",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ������ӷ��ɰ�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "�Ժ�" || str == "san hu" || str == "hu")
	{
	message_vision(HIC"$N˵�����Ժ�\n"NOR,who);
	this_player()->set_temp("allow_4",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ĵ����Ժװ�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "����" || str == "lian fa" || str == "fa")
	{
	message_vision(HIC"$N˵��������\n"NOR,who);
	this_player()->set_temp("allow_5",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ������������!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "��˫˫" || str == "cute girl" || str == "girl")
	{
	message_vision(HIC"$N˵������˫˫\n",who);
	this_player()->set_temp("allow_6",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ�Ů���Ӻ�˫˫��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "����ң" || str == "shou_yau" || str == "yau")
	{
	message_vision(HIC"$N˵��������ң\n"NOR,who);
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ߵ�������ң��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	command("say û����!");
	return 1;
	}
