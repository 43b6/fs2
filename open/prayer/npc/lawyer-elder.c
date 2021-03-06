#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
void create()
{
        set_name("执法长老", ({"lawyer_elder","lawyer","elder"}));
        set("long",@LONG

        教主林宏升的弟弟！骨骼奇佳，是修习浑天心法的最好人选．
        可惜为人一板一眼，丝毫不讲人情，所以不被教主任命为下
        任的承继者．但也由于这个缘故教主对于他的鉴言一定全部
        采信，圣火教的兴盛也是这样建立起来的！

LONG);
        set("gender","男性");
        set("class","prayer");
        set("family/master_name","林宏升");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",61);
        set("title","圣火教");
        set("kee",5600);
        set("max_kee",5600);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",15);
        set("max_gin",2800);
        set("max_sen",2800);
        set_skill("superforce", 95);
        set_skill("dodge", 90);
        set_skill("cure",75);
        set_skill("literate",75);
        set_skill("force",80);
        set_skill("holy-force",90);
        set_skill("move", 85);
        set_skill("parry", 70);
        set_skill("universe", 80);
        set_skill("unarmed", 80);
        set_skill("shift-steps",85);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/bluesea/level",60);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("bluesea") :),
        }));
        setup();
        create_family("圣火教",4,"长老");
    add_money("gold",10);
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-ring")->wear();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_10"))
        {
        command("say 没有教主的同意,我不敢擅自做主收你为入室弟子!");
        return 0;
        }
        command("smile");
        command("say 既然是教主的意思,以后你就跟我好好学吧!");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火三长老",1);
}

// by ACKY
int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();

        if( !present("hu-fa", environment(ob)) ) {
        tell_room(environment(ob),HIW"\n突然！冲出两位护法!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard lawyer_elder");
        hu_fa->command("follow "+ob->query("id"));
        hu_fa->kill_ob(ob);
        }}
        write("护法纵身飞扑过来叫道：大胆狂徒！长老你也敢动！！\n");
        if( ob->query_temp("elder2") > 3 ) {
		command("say 哼, 想逃? 没那么容易！\n" );
		ob->start_busy(1);
	}
        return 1;
}

void greeting(object ob)
{
        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        command("say 教主有令！！凡是学有毒术之人，杀无敕！！");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say 教主有令，见到舞者-----格杀勿论！！");
        kill_ob(ob);
     }
    return;
}
