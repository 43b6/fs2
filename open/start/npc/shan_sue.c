#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("ʥ����",({"master sue","sue"}));
	set("long","����һ��ʮ�����ŵ������ˣ���ȴ�������е����������͡�\n");
	set("gender","����");
	set("class","scholar");
	set("nickname","��ָ����");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",1400);
	set_skill("literate",100);
	set("max_force",1400);
	set("force_factor",10);
	set_skill("force",60);
	set_skill("stabber",80);
	set_skill("dodge",50);
	set_skill("knowpen",100);
	map_skill("stabber","knowpen");
	set_skill("parry",40);
	set_skill("poetforce",80);
	map_skill("force","poetforce");
	map_skill("parry","knowpen");
	set_skill("unarmed",40);
	set("chat_chance_combat",30);
	set("chat_msg_combat",({
	(: perform_action, "stabber.movedown" :)
	}));
	setup();
	create_family("����",16,"����");
	carry_object(START_OBJ"ten_pen")->wield();
}

  void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="scholar")
	{
		command("say �������Ҳ����������Ϊͽ�� ?\n");
		return;
	}
	command(":)");
          command("recruit "+ob->query("id"));
}
