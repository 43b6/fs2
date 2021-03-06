#include <ansi.h>
inherit NPC;
#include "/open/open.h"
#include <ansi.h>
inherit F_MASTER;
string ask_moon();

void create()
{
        set_name("李逍遥",({"shou yau","yau"}));
 set("long","
郑士欣的第七个徒弟，在仙剑七侠中，入门最晚，但是际遇不凡，兼之
悟性奇高，据说其实际武功已在其大师兄张乘风之上，李逍遥天性不
拘小节，爱好打抱不平，近几年来仗剑行侠于江湖，也已小有侠名。
现在在仙剑派是仙剑剑阵传人。\n");
        set("gender","男性");
        set("nickname",HIY"飞星传恨"NOR);
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",21);
        set("class","swordsman");
        set("title","仙剑派第四代七弟子");
        set("score",100000);
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        set_skill("sword",80);
        set_skill("force",50);
        set_skill("sha-array",90);       
        set_skill("shasword",80);
        set_skill("shaforce",50);
        set_skill("array",90);
        set_skill("parry",80);
        set_skill("dodge",70);
        set_skill("move",70);
        set_skill("spells",50);
        set_skill("sha-steps",70);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set("str", 30);
        set("cor", 30);
        set("per", 30);
        set("int", 30);
        set("cps", 30);
        set("con", 30);
        set("spi", 30);
        set("kar", 30);
        set("inquiry",([
        "仙剑剑阵" : "仙剑剑阵分好几种，你想问哪一种？",
        "两仪剑阵" : "两仪剑阵共有两招，‘鹤翔紫薇’和‘二剑穿肠红’",
        "三才剑阵" : "三才剑阵有‘鳞光三剑’，另有一招‘三才密招’是我不懂的，你去问掌门人吧",
        "四象璇叽剑阵" : "有‘四剑八达’此招为常用的，另有‘四龙崩月’绝招，同样也是我无法领会的",
        "八卦游龙剑阵" : "只有一招‘禁断龙气七诀斩’，我只领悟了一半，你最好再问问掌门人",
            "月半弯"  :  (: ask_moon :),
                      ]));
        setup();
        carry_object("/open/gsword/obj/sword-7")->wield();
        carry_object("/open/gsword/obj/white_cloth")->wear();
        carry_object("/open/gsword/obj/yau_glove")->wear();
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
string ask_moon()
{
    if(!this_player()->query_temp("ask_moon4"))
        return "嗯....这我可不清楚，你最好问问别人吧。";
        command("say 是皇上要你来找我的 ?");
        command("sigh");
        this_player()->set_temp("ask_moon5",1);
        return "自从皇上以镜月岛威胁使她离开后我就再也没见过她了,不过她和王锺灵相交甚笃你可以去问看看...";      
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

void die()
{
	object head,winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }

	if(winner->query_temp("head") == 3 )
	{//要求解第三进职的玩家，一定要自己杀死七子之一
	//所以设下head 4，如果不是在解第三进职的玩家，并不会拿到人头
	message_vision(HIY"可恶！居然会败在你的手下,看来武林将有一阵腥风血雨\n"NOR,this_object());
	message_vision("说完之后他就倒下了。。。。\n",this_object());
	winner->set_temp("head",4);
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}
	if ((winner->query("class") == "killer") && (winner->query_temp("head") != 4))
	{//避免条件连续两次成立（因为解headkill之谜的一定是杀手）
	//想将七子的人头家在杀人名单中，所以是杀手来砍七子，亦可以得到人头
	//但是因为不是在解第三进职，所以并不会设定步骤值
	message_vision(HIY"可恶！居然会败在你的手下,看来武林将有一阵腥风血雨\n"NOR,this_object());
	message_vision("说完之后他就倒下了。。。。\n",this_object());
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/meteor_diamond")->move(environment(winner));
	  message_vision(HIM"\n从李逍遥的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/meteor_diamond",sprintf("%s(%s) 让李逍遥掉下了流星之瞬钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/meteor_diamond")->move(environment(winner));
	  message_vision(HIM"\n从李逍遥的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/meteor_diamond",sprintf("%s(%s) 让李逍遥掉下了流星之瞬钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

