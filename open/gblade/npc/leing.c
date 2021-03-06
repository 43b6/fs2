inherit NPC;

string do_ask (object me);
string ask_moon();
void create()
{
        set_name("王钟灵", ({ "leing",}) );
        set("long", "
她是王家的大小姐，只见两湾似蹙非蹙的笼烟眉，一双似喜非喜的含情
目，娇喘微微；瞧这样子似乎是体弱多病的富家千金，怎么也不像武林
世家的子弟。\n");
        set("title","金刀王家千金大小姐");
        set("nickname","八面玲珑");  
        set("age", 21);
        set("int", 30);
        set("cps", 25);
        set("str", 22);
        set("cor", 23);
        set("spi", 30);
        set("con", 24);
        set("kar", 28);
        set("per", 30);
        set( "force_factor", 6 );
	set("combat_exp",100000);
        set("force",600);
        set("max_force",600);
        set_skill("blade", 50);
        set_skill("dodge", 80);
        set_skill("parry", 60);
        set_skill("force", 50);
        set_skill("literate",90);
	set_skill("gold-blade",60);
	set_skill("unarmed",40);
        set_skill("sixforce",40);
        set_skill("fly-steps",90);
        set_skill("move",60);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");

        set( "gender", "女性");

        set("limbs", ({ "头部",  "双脚", "双手", "背部" ,"腹部","腰部"}) );
     
        set("attitude", "peaceful");

        set("chat_chance", 2);
        set("chat_msg", ({
         "王锺灵不断的叹气，似乎有什么心事。\n",
         "王锺灵叹道：‘相思有如少债的。每日相催逼。常挑着一担愁，准不了三
分利。这本钱见他时才算得。’正是徐再思的清江引--相思。\n",
         "王锺灵道：‘伴夜月银筝凤闲。暖东风绣被鸳悭。信～沈了鱼，书～绝了
雁。盼雕鞍万水千山。本利对相思若不还。只告与那能索债愁眉泪\眼....\n"
        }) );
         set("inquiry",([
        "王元霸" : "就是我爹啊 !\n",
	"神兵利器" : "据我所知 , 当今的神兵利器 , 首推玉衡天剑和龙虎刀 !\n",
	"玉衡天剑" : "那是仙剑派开山祖师逍遥子的佩剑 !\n",
	"龙虎刀"   : "龙虎刀是我金刀门至宝 , 先祖王蹇之佩刀 !\n",
        "心事" : "嗯 , 你会将心事告诉漠生人吗 ?\n",
	"古文书" : "这个我略懂一些，大概看得懂两三成吧！\n",
        "古文" : "这个我略懂一些，大概看得懂两三成吧！\n",
        "翻译" : "你要我帮你翻译古文？那要把要我翻译的东西交给我呀！\n",
        "白孝虹" : "你问这个要做什么呢？\n",
        "巧儿" : "她实在是一个聪慧的女孩子。\n",
		 "月半弯"  :  (: ask_moon :),
        "无忌" : "嗯....是谁阿？没听过....等等我想起来了，听说我妹很喜欢他。\n"
        ]));
      
        setup();

	carry_object("/open/gblade/obj/mandarin_duck-blade.c")->wield();
	carry_object("/open/gblade/obj/topknot.c")->wear();
	carry_object("/open/gblade/obj/glow-cloth")->wear();
	carry_object("/open/gblade/obj/boots1.c")->wear();
        add_money("gold",5);
}

int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        if(ob_id=="papyrus")
        {
	if(who->query("quests/lotch") || who->query("lotch")>0)
	{
	command("say 我不是帮你翻译好了 ?");
	return 1;
	}
        command("say 你稍微等一下。");
	message_vision("王钟灵拿出了纸笔 , 开始翻译 !\n",this_player());
	call_out("do_give",10,this_player());
        }
  return 1;
 }
 string ask_moon()
{
    if(!this_player()->query_temp("ask_moon5"))
	return "嗯....这我可不清楚，你最好问问别人吧。";
	this_player()->set_temp("ask_moon6",1);
	command("say 自从她情海生变后,只托人给了我一封信说她想远离尘世,到深山隐居。");
	command("say 我也曾利用出游之际遍访群山,可惜始终未能找到她的踪迹。");
	return "希望你能顺利找到她,我也希望能再与她相聚......";	
}    
 void do_give(object who)
 {
        command("say 这本书你是从那里找来的，上头写的都是我们金刀门的历史。");
        command("say 这是译文，有些是我读不懂，有些因为书残缺，所以译不全。");       
        new("/open/gblade/obj/paper.c")->move(who);
	message_vision("王钟灵将译好的纸张 , 交给了$N\n",who);
	who->set("lotch",1);
   
 }
