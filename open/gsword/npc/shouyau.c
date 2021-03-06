inherit NPC;
#include "/open/open.h"
inherit F_MASTER;

void create()
{
	set_name("李逍遥",({"shou yau","yau"}));
 set("long","逍遥子的第七个徒弟,在仙剑七侠中,入门最晚,但是际遇不凡,兼之
悟性奇高,据说其实际武功已在其大师兄张乘风之上,李逍遥天性不拘
小节,爱好打抱不平,近几年来仗剑行侠于江湖,也已小有侠名.\n");
	set("gender","男性");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",21);
	set("class","swordsman");
	set("title","仙剑派第四代七弟子");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("sword",100);
	set_skill("force",60);
        set_skill("shasword",70);
        set_skill("shaforce",100);
	set_skill("array",100);
	set_skill("parry",80);
	set_skill("dodge",90);
	set_skill("literate",60);
	set_skill("move",80);
	set_skill("unarmed",60);
	set_skill("blade",40);
	set_skill("stick",90);
	set_skill("poison",40);
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
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
      (:perform_action,"sword.god":)
	}));
	setup();
	carry_object("/open/gsword/obj/sword-7")->wield();
 	create_family("仙剑派",4,"弟子");
}
 int accept_fight(object me)
 {
 if((int)me->query("combat_exp")<=80000)
 {
  command(":P");
  command("say 年轻人,生命是很可贵的,请好好珍惜!");
  return 0;
 }
 command(":D");
 command("say 好久没遇到对手了,亮剑吧!");
  return 1;
 }
         
void attempt_apprentice(object ob)
  {
	if(!ob->query_temp("allow_7"))
	{
	command("say 好小子,有眼光! ..不过 ...");
	command("say 师父说过,不能乱收徒弟!");
	command("shrug");
	return 0;
	}
  command("giggle");
 command("say 跟着我就对啦!");
 command("say 以后可要认真学喔!");
  command("recruit "+ob->query("id"));
  ob->set("marks/仙剑七侠",1);
  }
