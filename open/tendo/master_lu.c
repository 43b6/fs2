#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string magic1();
string magic2();
string magic3();
string do_area();
string do_array();
string do_howgo();
string do_tenman();
void create()
{
        set_name("陆清风",({"master lu","master","lu"}));
        set("long", 
"天道紫玄观的掌门，两鬓斑白，一对长眉垂颊。看来岁数应该
不少了，但脸上却依然神采奕奕，到十足像个三四十岁的中年
人。据说他不但精通"HIG"易经"NOR"，"HIG"老庄"NOR"，而且还擅于"HIG"星象"NOR"卜卦一类。\n"
);
       
        set("gender","男性");
        set("class","taoist");
        set("nickname",MAG"紫玄老道"NOR);
        set("combat_exp",4500000);
        set("attitude","friendly");
        set("age",88);
        set("title","天道派掌门人");
        set("str",20);
        set("cps",30);
        set("cor",25);
        set("per",25);
        set("int",35);
        set("con",25);
        set("spi",25);
        set("kar",40);
        set("max_s_kee",100);
        set("s_kee",100);
        set("sec_kee","tiger");
        set("max_kee",6000);
        set("kee",6000);
        set("max_sen",3500);
        set("sen",3500);
        set("max_gin",2200);
        set("gin",2200);
        set("force",2500);
        set("inquiry",([
        "星象" : (:do_area:),
        "云龙阵" : (:do_array:),
        "锁妖塔" : (:do_howgo:),
        "失落天书" : "当年众妖大闹人间的时失落的，现也不知流落何方。",
        "易经" : "你去集书房找你筑依师姊要一本来研读吧。",
        "老庄" : "集书房里藏有几册翻本，可以去找你筑依师姊要来读读。",
        "天门奇阵" : (:do_tenman:),
          ])); 
        set("max_force",2500);
        set("max_mana",3000);
        set("mana",3000);
        set("atman",3000);
        set("max_atman",3000);
        set("mana_factor",60);
        set_skill("literate",40);
        set_skill("cure",90);
        set_skill("taoism",90);
        map_skill("cure","taoism");
        set_skill("force",60);
        set_skill("gforce",100);
        map_skill("force","gforce");
        set_skill("dodge",80);
        set_skill("g-steps",100);
        map_skill("dodge","g-steps");
        set_skill("magic",100);
        set_skill("gmagic", 100);
        map_skill("magic", "gmagic");
        set_skill("whip",105);
        set_skill("gwhip",100);
        map_skill("whip","gwhip");  
        set_skill("parry",70);
        map_skill("parry","gwhip");
        set_skill("spells",120);
        set_skill("necromancy",100);
        map_skill("spells","necromancy");
        set_skill("move",80);
        map_skill("move","g-steps");
        set("spells/feeblebolt/level",90);
        set("spells/missible/level",100);
        set("spells/hardshell/level",90);
        set("spells/invocation/level",100);
        set("spells/stopmove/level",1);
        set("spells/lightfire/level",1);
        set("spells/flee/level",60);
        set("spells/manabody/level",1);
        set("force_factor",10);
        set("guild_master",1);
        set("chat_chance_combat",200);
        set("chat_msg_combat",({
         (: magic1 :),
         (: magic2 :),
         (: magic3 :),
        }));
        setup();
        create_family("天道派",2,"掌门人");
        carry_object("/open/tendo/obj/red_dragon_chain")->wield();
        carry_object("/open/tendo/obj/lucloth")->wear();
        carry_object("/open/tendo/obj/luboot")->wear();
        add_money("gold",20);
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "失落天书" )
        {
          command("pat "+getuid(me));
          command("say 太好了, 是你从冥殿修罗的身上拿回来的吗？谢了。\n");
          if( me->query("family/family_name") == "天道派" )
          {
            command("say 既然你寻获天书有功, 我便将此天书上所记载的绝学传授与你吧。\n");
            write(me->query("name")+"照着陆清风所说的口诀随手演练一遍。\n\n"+
            "你觉得心中疑虑豁然贯通, 全身内力迅速流转一周天。\n\n"+
            "你学会了天书中所记载的绝学「天罡\战气”。\n\n");
            if( me->query("force") < me->query("max_force") )
            me->set("force",me->query("max_force"));
            me->set("marks/god-kee",1);
            me->set("title",HIY"天道"HIR"嫡传弟子"NOR);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
        return 1;
}
void attempt_apprentice(object ob)
{
        object whip;
        if(this_player()->query("class")!="taoist")
        {
                command("say 你我志向不同，还是另寻名师吧。\n");
                return;
        }
        if(this_player()->query("kar") < 25)
        {
                command("say 你我有缘无份，还是另寻名师吧！\n");
                return;
        }
        command("hmm");
        command("recruit "+ob->query("id"));
        message("system",HIG"陆清风抚须笑道‘  乘天地之正，御六气之辩  ’

悠悠寰宇中，又多了一位仙风道骨的术士！！\n"NOR,users());
        
        command("say 本派首重修身养性，非不得已尽量不要与人交手。");
        write("\n");
        command("hmm");
        command("say 你可以先去找志清师叔买件修行用的道服。");
}
string do_area()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return ("哎....星象之学浩瀚无穷，岂是三言两语就能说完的。");
  return (
"说到星象，这"HIW"云龙阵"CYN"就是为师当年以星象为据所排出的迷阵。"NOR"");
}
string do_array()
{
  object who=this_player();
  if(who->query("class")!="taoist")  
    return ("你不是本门弟子问这干什么？");
    who->move("/open/center/room/inn");
  if(!who->query_temp("asked")) {
    who->set_temp("asked",1);
    return ("\n也好....你既然成为术士，也该知道这事。陆清风略有所思地说道,
在云龙阵旁有座"HIW"锁妖塔"CYN"。是当年魔界出口--魔眼洞崩毁众妖大闹人
间时，被祖师爷封印于那的。由于众妖危害甚巨，为师才特地布阵
于此加以保护，以防节外生枝坏了祖师爷五百年前的一番浴血苦战。"NOR"");
  }
  return (
"此阵杀恶不杀善，是专防妖魔侵入而设。
如杀气过高 阵中云龙会误以为妖魔来袭而攻击。

接着陆清风语带双关地说道 : 此阵更分为正逆两仪，由八卦衍
生而出，正行可到天道，逆行可致魔妖，切记切记。");
}
string do_tenman()
{
if (this_player()->query("quests/shasword")==2)
{
command("say 天门奇阵乃利用开天三灵器,融合三圣之力所形成的一个传说奇阵!");
}
else command("say 听都没听过");
}
string do_howgo()
{
 object who=this_player();
  if(who->query("class")!="taoist")
        return (
"此事乃本门机密，"+RANK_D->query_respect(who)+"不必多问了。");
  return (
"这锁妖塔的妖怪厉害异常，就算是当年，祖师爷也费了九牛二虎之力才将其封住。
 其中有一只强力妖怪由镇塔明王守着!!");
}
int accept_fight (object who)
{
command("conj hardshell");
return 1;
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("conj hardshell");
command("say 施主既执意如此,休怪贫道手下无情了!!");
return 1;
}
string magic1()
{
if(this_object()->query("kee")<=3000) {
          command("cast king invocation");
        }  
        return "\n";
}
string magic2()
{
if(random(2)<=1) 
command("cast missible");
else command("cast feeblebolt");
return "\n";
}
string magic3()
{
if(random(3)<=2)
command("cast stopmove");
return "\n";
}
void die()
{
   object cloth;
   object winner = query_temp("last_damage_from");
   string name = winner->query("name");
   string class1 = winner->query("family/family_name");
   new("/open/tendo/obj/lucloth")->move(winner);
   tell_object(users(),HIW"          
         陆清风"HIG"叹道:"HIC"天书"HIG"尚未找回,"HIR"冥殿修罗"HIG"未败,
                    哎,我竟会败给"+HIB+class1+HIG"弟子"+HIB+name+HIG+"之手,
                    我不甘心阿!!\n\n
              "HBCYN"一道白光从昆仑山直升天际\n"NOR);
::die();
}
