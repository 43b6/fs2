#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;

string ask_man()
{
        object ob=this_player();
        if( ob->query_temp("high-man") >= 3 )
        {
        ob->set_temp("high-man", 4);
        return("他性情极为温和, 好打抱不平, 我在 3 年前奉教主之命前往中原办事, 回途受袭, 幸亏此位高人搭救才幸免于难!!他四处云游, 真不知道要如何才能遇到他??
不过老夫相信, 只要有人遇到危难时, 他应该会挺身而出吧!!\n");
        }
        else
        {
        return("嗯, 你问这些要做啥呢??\n");
        }
}        

void create()
{
        set_name("传功长老", ({"gonfu_elder","gonfu","elder"}));
        set("long",@LONG

        圣火教护教长老之一的传功长老，先天乾坤功的造诣
        已是如同神一般的莫测，就连教主也自叹弗如！非常
        喜爱武学方面的比试，而且对于各家的武学均能略述
        一二，是教内的武学通．与副教主武星君是拜把兄弟．

LONG);
        set("gender","男性");
        set("class","prayer");
        set("nickname","武痴");
        set("family/master_name","林宏升");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",58);
        set("title","圣火教");
        set("kee",5500);
        set("max_kee",5500);
        set("force",10000);
        set("max_force",10000);
        set("force_factor",15);
        set("max_gin",2800);
        set("max_sen",2800);
        set_skill("superforce", 90);
        set_skill("dodge", 60);
        set_skill("cure",65);
        set_skill("literate",65);
        set_skill("force",90);
        set_skill("holy-force",85);
        set_skill("move", 70);
        set_skill("canon",90);
        set_skill("parry", 70);
        set_skill("universe",95);
        set_skill("unarmed", 90);
        set_skill("shift-steps",85);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("inquiry",([
        "隐世高人":(: ask_man :),
        ]));
        set("functions/goldsun/level",60);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: exert_function("goldsun") :),
        }));
        setup();
        create_family("圣火教",4,"长老");
    carry_object("/open/prayer/obj/dragon-robe")->wear();
    carry_object("/open/prayer/obj/dragon-hat")->wear();
    carry_object("/open/prayer/obj/dragon-hands")->wear();
    carry_object("/open/prayer/obj/dragon-icer")->wield();
    carry_object("/open/prayer/obj/dragon-legging")->wear();
    add_money("gold",10);
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_9"))
        {
        command("say 没有教主的同意,我不敢擅自做主收你为入室弟子!");
        return 0;
        }
        command("smile");
        command("say 既然是教主的意思,以后你就跟我好好学吧!");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火三长老",1);
        }
int accept_kill(object ob)
{
        int i,j;
        object ob1, hu_fa, *enemy;
        ob1 = this_object();
        add_temp("kill_me",1);
        if(query_temp("kill_me")>5)
        {          
          message_vision( HIY"\n$N受不了敌人的骚扰而发狂了!!\n"NOR,ob1);
          set("title",HIR"〈发狂〉"NOR);         
          enemy = all_inventory( environment(ob1) );
          j=sizeof(enemy);
          for(i=0;i<j;i++)
          {
            if(userp(enemy[i]) && !enemy[i]->is_fighting() && living(ob1))
              kill_ob(enemy[i]);
          }
        }
        if( !present("hu-fa", environment(ob)) && living(ob1)) {
        tell_room(environment(ob),HIW"\n突然！冲出两位护法!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob));
        hu_fa->command("guard behavior_elder");
        hu_fa->command("follow "+ob->query("id"));        
        hu_fa->kill_ob(ob);        
        }}
        write("护法纵身飞扑过来叫道：大胆狂徒！长老你也敢动！！\n");
        return 1;
}

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        if(!ob) return ;
        if (ob->query_temp("high-man") == 2 )
        {
        write("\n[36m呵呵, 我那位武痴义兄对你说了些什么吗??嗯, 你的资质颇佳, 难怪他会告诉你这件事情!![0m\n");
        write("\n[36m那位[隐世高人]武学真的非常深厚, 尤其是在剑, 刀, 与鞭的造诣上, 更是令人拜服!!我与他曾有一面之缘呢!![0m\n");
        ob->delete_temp("high-man");
        ob->set_temp("high-man", 3);
        return;
        }

        if (ob->query_skill("coldpoison", 1))
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
