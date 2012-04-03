#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;
string ask_reason()
{
    object ob2=this_player();
    if( ob2->query("family/master_name") =="秦忆诗" )
    {
    ob2->set_temp("can_ask",1);
    return("这是我玉女派的剑法!!我乃是[32m玉女派[0m[36m的掌门人......\n
    可是自从我的师姐[32m陆绮芙[36m阴谋夺取剑谱之后.....\n");
    }
    else
    {
    return("[36m这位侠士看来并非本门的弟子, 请回吧!![0m");
    }
}

string ask_lu()
{
    object ob2=this_player();
    if( (ob2->query("family/master_name") =="秦忆诗") && ob2->query_temp("can_ask",1) )
    {
    ob2->delete_temp("can_ask");
    ob2->set_temp("can_kill",1);
    return("[36m师姐陆绮芙她设计陷害我, 使得我被门人[误会].....\n
    不得已只好带着另一位小师妹远走西域.....[0m\n");
    }
    else
    {
    return("[36m这位侠士看来并非本门的弟子, 请回吧!![0m");
    }
}

string ask_misunder()
{
    object ob2=this_player();
    if( (ob2->query("family/master_name") =="秦忆诗") && ob2->query_temp("can_kill") )
    {
    return("[36m现在多说也没人会相信了, 不过如果能杀了师姐陆绮芙, 就可消我心头之怨了.\n
    去找我的另一个[小师妹], 她会告诉你师姐的藏身处的!![0m\n");
    ob2->delete_temp("can_kill");
    ob2->set_temp("go_kill",1);
    }
}

string ask_book()
{
    object ob2=this_player();
    object ob3=new("/open/prayer/obj/girlbook");
    if( ob2->query("quests/girlsword",1) && !present("girlbook",ob2) )
    {
    ob3->move(this_player());
    return "你务必要好好的学习玉女派的剑法!!\n";
    }
    else
    {
    return "剑谱我藏起来了!!不过掌门佩剑[31m[红炘剑][36m我放在开阳门的某一个地方!!\n";
    }


}   

void create()
{
        set_name("秦忆诗", ({"chi i-zhi","chi","i-zhi"}));
        set("long",@LONG

        开阳门的门主！原本是中原武林的一位小师太，贵为该派的
        掌门人, 可是不知为何跑到西域来加入圣火教, 一手天女散
        花剑法出神入化, 而圣火教的三大绝学中, 她也是属于一等
        一的好手!!

LONG);
        set("gender","女性");
        set("class","prayer");
        set("family/master_name","林宏升");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",28);
        set("title","开阳门主");
        set("kee",5000);
        set("max_kee",5000);
        set("force",9000);
        set("max_force",9000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("force_factor",5);
        set_skill("holy-force", 50);
        set_skill("superforce", 80);
        set_skill("cure", 40);
        set_skill("dodge",60);
        set_skill("force",50);
        set_skill("canon",80);
        set_skill("move", 40);
        set_skill("parry", 80);
        set_skill("unarmed",80);
        set_skill("literate",40);
        set_skill("shift-steps",60);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/bluesea/level",40);
        set("inquiry",([
        "天女散花剑法":"当初是因为某种[32m原因[36m, 所以不得已才沦落到西域的!!\n",
        "原因":(: ask_reason :),
        "陆绮芙":(: ask_lu :),
        "玉女派":"玉女派是中原的一个小门派, 可是剑法乃是高人所创, 因为师父传位于我, 所以[32m剑谱[36m也传给了我!!\n",
        "剑谱":(: ask_book :),
        "红炘剑":"是掌门人专用的宝剑, 与剑法配合互使的话, 杀伤力倍增!!\n",
        "误会":(: ask_misunder :),
        ]));
        set("chat_chance",5);
        set("chat_msg", ({
        HIC+"秦忆诗轻吟:人善养心～而心如皓月清风～!!\n\n"+NOR
        HIC+"事善修身～而身似行云流水～!!\n\n"+NOR,
        HIC+"武林万物～皆为生而轮回～!!\n\n"+NOR
        HIC+"百家兵器～独本剑得精髓～!!\n\n"+NOR,
        }) );
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: perform_action("force.bluesea1") :),
        (: perform_action("force.bluesea2") :),
        (: exert_function("bluesea") :),
        }));
        setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-firer")->wield();
    carry_object("/open/prayer/obj/emery-armband")->wear();
    create_family("开阳门",5,"门主");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_6"))
        {
        command("say 没有教主的同意,我不敢擅自做主让你进门!");
        return 0;
        }
        command("smile");
        command("say 既然是教主的意思,那你就进入我开阳门吧!");
        command("say 圣火教的绝学博大精深,可不是那么好学的!");
        command("say 想学得盖\世武学就得好好修习内功的基础!");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火八天门",1);
        this_player()->set("title","圣火教开阳门俗家弟子");
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

int accept_object(object ob2, object obj, object ob3)
{
        if( obj->query("name") == "玉鐕" )
        {
          command("pat "+getuid(ob2));
          command("say 太好了, 你真的将我师姐杀死了!!谢了。");
          if( ob2->query("family/master_name") == "秦忆诗" && !ob2->query("marks/girlsword") && ob2->query_temp("will_kill") )
          {
          command("say 既然你帮我清除门内叛逆, 我便将此剑谱传授与你吧。");
          write(this_object()->query("name")+"看着秘笈随手演练了一遍给你看。\n\n"+
          "你觉得此一剑法似乎异常地适合你, 你的武学修养又可以更进一层了。\n\n"+
          "[36m你学会了玉女派的[32m「天女散花剑法”[0m。\n\n");
              ob2->set_skill("girlsword",10);
              ob2->set("quests/girlsword",1);
              ob3=new("/open/prayer/obj/girlbook");
              ob3->move(this_player());
          }
          destruct(obj);
        }
        else
        command("? "+getuid(ob2));
        return 1;
}
