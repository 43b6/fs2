inherit NPC;
#include "/open/open.h"
inherit F_MASTER;

void create()
{
	set_name("����ң",({"shou yau","yau"}));
 set("long","��ң�ӵĵ��߸�ͽ��,���ɽ�������,��������,���Ǽ�������,��֮
�������,��˵��ʵ���书�������ʦ���ų˷�֮��,����ң���Բ���
С��,���ô򱧲�ƽ,���������̽������ڽ���,Ҳ��С������.\n");
	set("gender","����");
	set("combat_exp",500000);
	set("guild_master",1);
        set("attitude","heroism");
	set("age",21);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ��ߵ���");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("sword",100);
	set_skill("force",60);
	set_skill("array",100);
	set_skill("parry",80);
	set_skill("dodge",90);
	set_skill("literate",60);
	set_skill("move",80);
	set_skill("unarmed",60);
	set_skill("blade",40);
	set_skill("stick",90);
	set_skill("poison",40);
	set_skill("fonxansword",100);
	map_skill("parry","fonxansword");
	map_skill("sword","fonxansword");
        set("str", 30);
        set("cor", 30);
	set("per", 30);
	set("int", 30);
	set("cps", 30);
	set("con", 30);
	set("spi", 30);
	set("kar", 30);
	set("chat_chance_combat",40);
	set("chat_msg_combat",({
	(:perform_action,"sword.counterattack":)
	}));
	setup();
	carry_object("/u/w/wugi/obj/sword-7")->wield();
 	create_family("�ɽ���",4,"����");
}
 int accept_fight(object me)
 {
 if((int)me->query("combat_exp")<=80000)
 {
  command(":P");
  command("say ������,�����Ǻܿɹ��,��ú���ϧ!");
  return 0;
 }
 command(":D");
 command("say �þ�û����������,������!");
  return 1;
 }
         
void attempt_apprentice(object ob)
  {
	if(!ob->query_temp("allow_7"))
	{
	command("say ��С��,���۹�! ..���� ...");
	command("say ʦ��˵��,��������ͽ��!");
	command("shrug");
	return 0;
	}
  command("giggle");
 command("say �����ҾͶ���!");
 command("say �Ժ��Ҫ����ѧ�!");
  command("recruit "+ob->query("id"));
  ob->set("marks/�ɽ�����",1);
  }
