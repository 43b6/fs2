#include <ansi.h>
inherit NPC;
inherit F_MASTER;

string magic1();
string star1();
string star2();
string star3();

void create()
{
	set_name("平催牛",({"pin"}) );
        set("long","一个道貌岸然的"HIW"算命"NOR"先生，到处招摇撞骗，手里拿着一面招牌上面写着‘铁口直断’四个大字。
两旁还写着两行小字--上知"HIW"天文"NOR"，下知地理。\n");
        set("gender","男性");
        set("class","officer");
        set("combat_exp",60000);
        set("attitude","friendly");
        set("age",62);
	set("title","铁口直断");
        set("str", 25);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 26);
        set("force", 200);
        set("max_force", 1000);
        set("max_mana",200);
        set("max_atman",150);
        set_skill("security",100);
        set("force_factor", 10);

	set("inquiry",([
	"算命" : (:magic1:),
	"天文" : (:star1:),
	"七星" : (:star2:),
	"八星" : (:star3:),
	]));
        set("chat_chance", 30);
        set("chat_msg", ({
        "平催牛惦了惦手上的银子，脸上露出满意的笑容^O^\n",
        "平催牛说道: 这位施主我瞧你脸现青气，恐怕最近诸事不顺，要不要算个命啊!\n",     
        "平催牛大声说道: 来喔来喔..铁口直断，不准不要钱。包你有灾解灾，没灾发财啦。\n",           
        }));
        setup();
	add_money("silver",3);
}

string magic1()
{
 object who=this_player();
 command("say 让老夫替你算算");
 command("cmd askgod "+who->query("id"));
 return "算一次命三十两白银，谢谢惠顾。";
}

string star1()
{
 return NOR"哈哈！！这你就问对人了。看你要问个"HIW"七星，八星"NOR"都没问题啦。"NOR;
}

string star2()
{
  
  message_vision (HIC"平催牛说道: 这个简单，依序就是天枢，天璇，天机，天权，天衡，开阳，瑶光这七颗南斗七星嘛。\n",this_object());
  write(HIC"你不禁心想: 哇勒！....南斗七星?....这个人的话靠的住吗？\n"NOR);
  return "hmm....这种小问题，收你十两银子就好";  
}

string star3()
{
 object who=this_player();

 message_vision (HIC"平催牛说道:八星就是七星加太阴啦!!..连这都不懂，小孩子要好好念书知道吗!\n",who);
 command("pat "+who->query("id"));
 write("你好像有种受骗的感觉....>.<\n\n");
 return "处罚你不认真唸书，收你一两黄金";
}

int accept_kill (object who)
{
  command ("shout 哇！....强盗啦....杀人了杀人了!!快来人啊....\n");
  command ("flee");
  return 1;
}
