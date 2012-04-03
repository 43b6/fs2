// 重新设计master_liu by Chan
// 增加许多功用
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string book();
string icef();
string test();
string super_fighter();
/*
// 以前的quests后来取消了,十里追杀令!!!!
string ask_sec()
{
        if( !this_player()->query("quests/to-kill-1") )
                return "你在说些什么 ?\n";
        this_player()->set("quests/to-kill-2",1);
        return "好吧 ! 我就告诉你好了 ! 黑仙罗汉就是李灵 !\n";
}
//好像是返老还童之quests  取消中 by chan
int do_check( object me )
{
        command("say "+(me->query("gender")=="男性" ? "壮士" : "姑娘")+" ! 你看了似乎受到了极重的内伤，让我替你看看吧 ?");
}
int do_nod()
{
        object me = this_player() , ob = this_object();
        if( !me->query("quests/kill-dugur") || me->query("quests/cure-star") ) return 0;
        message_vision("$N看了看$n身上的伤痕。\n",this_object(),this_player());
        command("sign");
        command("say 老夫无能为力，伤你之人的根基远在老夫之上，当今世上，恐怕只有郑士欣有这种实力。");
        command("say 快去找他来帮你看「你的伤”并请他帮你「疗伤”。");
        return 1;
}
*/
void create()
{
   set_name("刘全书",({"master liu","liu"}));
   set("long","他是雪苍三侠之首‘黑影鬼脚’刘全书，一双铁脚，纵横武林。\n");
   set("gender","男性");
   set("guild_master",1);
   set("class","fighter");
   set("nickname","黑影鬼脚");
   set("combat_exp",5000000);
   set("attitude","heroism");
   set("age",47);
   set("title","雪苍派第四代掌门人");
   set("str", 50);
   set("cor", 24);
   set("cps", 18);
   set("per", 24);
   set("int", 42);
   set("force", 7000);
   set("max_kee",15000);
   set("kee",15000);
   set("quests/read_snow",3);
      set("max_gin",3000);
      set("gin",5000);
          set("sen",5000);
          set("max_sen",5000);
   set("s_kee",600);
   set("max_s_kee",1000);
   set("sec_kee","tiger");
   set("inquiry",([
        "天邪石":   "师父临终前曾交给我这样宝物，他说此物当赠与有缘人。",
        "有缘人":   "能说出十年前武林三大高手者，即为有缘人。\n",
        "藏经阁":  (: book :),
        "玄天圣地":   (: super_fighter :),
        "贡献":   (: test :),
//      "玉门关" : (: ask_sec :),
          ]));
    set_skill("literate",30);
   set("force_factor", 50);
   set("max_force",3000);
      set_skill("snow-kee",100);
   set_skill("cure",40);
          set_skill("move",50);
   set_skill("force",120);
   set_skill("magic",20);
   set_skill("dodge",50);
       set_skill("parry",50);
   set("functions/ice-fingers/level",100);
   set("functions/snow-powerup/level",50);
   set_skill("spells",20);
      set_skill("unarmed",120);
   set_skill("snowforce",100);
   map_skill("force","snowforce");
           set_skill("black-steps",100);
   set_skill("snow-martial",100);
   map_skill("unarmed","snow-martial");
   map_skill("dodge","black-steps");
   map_skill("parry","snow-kee");
   set("chat_chance_combat",60);
   set("chat_msg_combat",({
   (: icef :),
   }));
   setup();
   create_family("雪苍派",4,"掌门人");
   carry_object(SNOW_OBJ"figring")->wield();
   carry_object("/open/snow/obj/liucloth.c")->wear();
}

void init()
{
        object ob;
/*
        object me = this_player();
        if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
                call_out("do_check",1,me);
*/
        add_action("do_say","say");
/*
        add_action("do_nod","nod");
*/
        add_action("do_join","join");
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="fighter")
        {
                command("say 你不是武者，我不能收你。\n");
                return;
        }
      if((int)ob->query("str")<20) {
          command("say 雪苍武学要力量大的人才能学，我看你请回吧!\n");
          return;
      }
      command("hmm");
      command("recruit "+ob->query("id"));
}

int accept_fight(object who)
{
who=this_player();
command("cmd usekee "+who->query("id"));
 command("say 果然英雄出少年。\n");
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 command("charge "+who->query("id"));
 return 1;
}

int accept_kill(object who)
{
who=this_player();
 command("say 死吧~~~~\n");
 kill_ob(who);
command("charge "+who->query("id"));
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 return 1;
}

int do_say(string str,object ob)
{
     object who;
        who=this_player();
        if(who->query("get_stone")==1){
           return 0;}//记得很久之前lum就要我改成这三个ppl的名字了这些人也算是历史
	else {	            //了...除了sula这老贼..so...再把他改成这三个..........cgy
    if (str=="陈蝶衣")  this_player()->set_temp("say_1",1);
    if (str=="黄云")    this_player()->set_temp("say_2",1);
    if (str=="复活邪神")  this_player()->set_temp("say_3",1);
    if(this_player()->query_temp("say_1")==1&&this_player()->query_temp("say_2")==1&&this_player()->query_temp("say_3")==1)
     {
      command("smile");
      command("say 你果然是有缘人。\n");
      
        this_player()->set("get_stone",1);
		call_out("do_gs",1,ob);
      }
    return 0;
}}
int do_gs(object ob)
    {
        object stone;
     
        command("say 天邪石拿去吧 !");
        new("/open/snow/obj/stone")->move(this_player());
        
        return 1;
    }
string icef()
{       
        command("perform snow-martial.ice-fingers");
        return "\n";
}
string book()
{
   object me=this_player();
   if(me->query("allow_study")==1)
          return "嗯...不是跟你说过了吗？\n";
   command("say 此乃本派藏书重地，里面有本派重要秘笈。");
   if(me->query("family/family_name")!="雪苍派")
          return "你不是本派的弟子，没资格读本派的书。\n";
   if(me->query("combat_exp")<150000)
          return "已你这种程度要读藏经阁的书，还早的很。\n";
    return "只有为武林有重大的贡献的雪苍派弟子才能入藏经阁研读!!!\n";
}

int do_join()
{
        if(this_player()->query("class"))
                return notify_fail("你已经加入其他工会了。\n");
        this_player()->set("class","fighter");
        message("system",
        HIC "天生英才.....\n\n一代武者"+this_player()->name()+"诞生了 !!!\n" NOR,users());
        return 1;
}
string test()
{
 object me;
 me=this_player();
 if(me->query("family/family_name") != "雪苍派")
  {
   return "刘全书道:这是雪苍派的事,别的门派不用过问!!!!\n";
  }
if((int)me->query_skill("snow-martial",1)<70)
{
return "你的雪苍武学..未熟练!!!我看算了..吧..\n";
}
 say("刘全书沈吟一下!!!\n");
 say("刘全书道:最近泷山派的掌门任正晴来函,请我协助消灭在平南城附近的独角虎!!!\n");
 say("刘全道续道:这个任务就交给你吧....!!!\n");
 me->set("snow_test",1);
}
int accept_object(object who, object ob)
{
  if( ob->query("id") == "tiger-head")
  {
    destruct(ob);
    if((who->query("family/family_name") == "雪苍派") && (who->query("snow_test") != 1))
     {
      say("刘全书仔细的看了看!!,说:这不是独角虎的头!!。\n");
    return 0;
     }
    if((who->query("family/family_name") != "雪苍派") || who->query("read_ok"))
     {
     say("刘全书仔细的看了看!!,说道:果然是恶兽的头!!感谢你为武林除此大害。\n");
  return 1;
     }
   say("刘全书仔细的看了看!!说道:这果然是残害无数百姓恶兽--独角虎--的头。\n");
   if(!who->query("allow_study"))
   {
    who->set("allow_study",1);
say("好吧！我准你读藏经阁内的书，但是雪苍秘录、枯叶残星秘笈、和黑影残风录三本书只准读一本，而且读一次。\n");
   }
   if(who->query("allow_study")==1)
    say("嗯...不是跟你说过了吗？\n");
return 1;
  }
}
string super_fighter()
{
 object me;
 me=this_player();
 if((me->query("class") != "fighter") || (!me->query("ask_super_fighter")) )
  {
   return "刘全书道:此地为武者传说圣地,恕难奉告!!!!\n";
  }
 if((me->query("family/family_name") == "泷山派") && (me->query("title") != "泷山奥义传人"))
  {
   return "刘全书怒道:连自己门派的秘奥义都没有学会了,问那么多做什么!!!\n";
  }
 if((me->query("family/family_name") == "雪苍派") && (me->query("title") != "雪苍绝学传人"))
  {
   return "刘全书怒道:连自己门派的绝学都没有学会了,问那么多做什么!!!\n";
  }
 say("刘全书沈思了一下!!!\n");
 say("刘全书吟诗道:------仙~云~护~气~凌、身~在~圣~地~中-----\n");
 say("刘全书续道:上二句你就去问任正晴吧。!!\n");
 say("刘全书最后道:句中的涵意就自己体会吧。!!\n");
 me->set("ask_super_fighter",1);
}
void die()
{
   object winner = query_temp("last_damage_from");
   tell_object(users(),
   "\n\t[1m想我[1;36m刘全书[1;37m闯荡武林数十载,从无一败今天竟被[33m"+winner->query("name")+"[1;37m所败!!真是佩服!!佩服!![0m\n");
 :: die();
}
