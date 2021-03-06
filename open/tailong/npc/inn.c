#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string six_sp();
void create()
  {
        set("class", "scholar");
        set_name("本因", ({ "master inn", "master", "inn" }) );
        set("title","天龙寺第九任住持");
        set("nickname", HIR"剑气冲天"NOR);
        set("gender", "男性");
        set("age", 200);
        set("attitude", "heroism");
        set("long",
        "你眼前正是大理段是的武学重镇‘天龙寺’的住持----本因大师, \n"
        "据说他六脉神剑早已练入化境, 当世能和他齐肩并论的, 只有其侄\n"
        "孙‘段誉’, 不过百年来, 从未有人见识过他真正的武功....\n");
        set("str", 48);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);
        set("combat_exp",2000000);
        set("max_kee",4500);
        set("kee",5000);
        set("force"       , 4000);
        set("max_force"   , 4000);
        set("force_factor", 30);
        set("score"       , 200000);
        set("s_kee",1000);
        set("marks/six_sp",3);
        set("max_s_kee",1000);
        set("sec_kee","god");
        set("inquiry",([
                 "段誉":"他现在与其妻王语嫣避居在此, 还望施主不要去扰他们\n",
                 "枯\荣大师":"大师现在正在苦参枯\荣禅, 据说是一门威力强的武功\n",
                 "段延庆":"此人乃是我大理段氏最头痛的人物, 不但武功奇高, 为人亦十分冷静沈着, 十分难缠\n",
                 "奥义":   (: six_sp :),
          ]));
        set("functions/handwriting/level",65);
       set("max_gin",5000);
       set("max_sen",5000);
       set("gin",5000);
       set("sen",5000);
       set_skill("cure",100);
       set_skill("move",80);
       set_skill("unarmed", 100);
       set_skill("force",150);
       set_skill("parry",100);
       set_skill("dodge",100);
       set_skill("literate",100);
       set_skill("linpo-steps",120);
       set_skill("six-fingers",120);
       set_skill("sunforce",150);
       map_skill("force", "sunforce");
       map_skill("unarmed", "six-fingers");
       map_skill("dodge", "linpo-steps");
       map_skill("parry", "six-fingers");
       map_skill("stabber", "six-fingers");
       set("chat_chance_combat",40);
       set("chat_msg_combat",({
            (: perform_action, "unarmed.handwriting"   :),
            (: "cmd god_kee"   :)
        }));
        create_family("段家", 5, "掌门人");
        setup();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wield();
        add_money("gold",40);
}

int accept_object(object who, object ob)
{
  string name=who->query("name");
  if( ob->query("id") == "six book" && who->query_temp("six_sp_quest")==10)
  {
    destruct(ob);
    tell_object(users(),HIY"
                 本因方丈说道:"HIW"
                             「这次"HIG+name+HIW"为我天龙寺除去大患, 夺回宝经
                               老衲今日便将神剑奥义尽传于你, 
                               望你今后斩妖除魔, 重振大理段氏的声威!!”
"NOR);
    who->set("marks/six_sp",3);
    who->set("quest/4-badman",1);
    who->set("title",HIW"大理段氏绝代高手"NOR);
  }

else if( ob->query("id") == "tai mark" && who->query_temp("six_sp_quest")==8)
  {
    destruct(ob);
    say(HIY"本因大师说道:段延庆据说藏身在‘狂风岭’, 段云既然派施主来, 想必有惊人艺业, 
             此事就相烦施主, 务必夺回六脉神剑经!!\n"NOR);
    say(HIY"本因大师又说:狂风岭就在平南城西郊, 快去吧!!\n"NOR);
    who->set_temp("six_sp_quest",9);
  }
}
int accept_kill(object who)
{
 command("say 老衲逼不得已, 只有和施主走上几招!\n");
 kill_ob(who);
 command("cmd god_kee");
 return 1;
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

string six_sp()
{
 object me;
 me=this_player();
 if(me->query_temp("six_sp_quest")!=9)
  {
   return "奥义乃是我派密奥, 不会轻易传给弟子...\n";
  }
 say(HIY"本因大师道:你似乎并未得授神剑奥义, 我便传你「夺命连环六绝剑”\n");
 say(HIY"           望你能凭此招夺回宝经!!\n");
 me->set("marks/six_sp",1);
 me->set("title","天龙寺俗家高手");
}
