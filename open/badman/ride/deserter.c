#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_want();
string do_ask();
void create()
{
  set_name("沙老",({ "desert elder","desert","elder"}));
  set("title","塞外漠民");
  set("gender", "男性");
  set("age",65);
  set("attitude", "peaceful");
  set("no_kill",1);
  set("no_fight",1);
  set("long","一个在炎热的沙漠中独自生活的老头。他正在洒扫堆积
在帐篷前的吹沙。从他的肤色及五官分布来看，应该是
来自塞北大漠的住民。\n");
  set("chat_chance",6);
  set("chat_msg", ({
  "唉，又吹了这么多沙子，真是该死的骆驼！\n",
  }) );
  set("inquiry",([
  "骆驼" : (: do_ask :),
  ]));

setup();
}

string do_ask()
{
  int me;
  object who;
  who = this_player();
  if (who->query("quests/r_camel",1)) {
  return "[1;37m真感谢你帮我驯了骆驼！[0m\n"; 
  }
  else if (who->query("quests/w_camel",1)) {
  return "[1;33m你要跟我要（want）骆驼吗？[0m\n";
  }
  else if (who->query_temp("marks/f_c",1)) {
  return "[1;33m我不是跟你讲过了吗？[0m\n";
  }
  else {
  who->set_temp("marks/f_c",1);
  who->set_temp("marks/f_c_ent",1);
  return "[1;33m什么骆驼？唉，这说来话长啊
！老朽暂不将原由告诉你，在老朽身后帐
篷的木板床中，你去将木板掀开。里头有
条暗道，暗道尽头处老朽养着一匹骆驼。
这骆驼可厉害了！别的骆会吐吐口水就罢
了，我这骆又叫尘沙骆，可是从西方传来
的珍奇至宝！牠啥不会，就吹沙吹得紧！
偶而呢，也会吐吐砂粒，砂粒一多，就成
了道墙。这墙可谓刀枪不入，能挡神兵！
但这骆就是不听话。少侠看你年纪尚可，
但脸色异常红润，想必功夫十分到家。想
来这也是个缘份，您就进去蓬中，掀开板
子，入了暗道，看能否驯了这匹骆驼吧！[0m\n";
  }
}

void init()
{
        object ob;
        ::init();
        if( interactive(ob = this_player())&& !is_fighting() )
 {
        remove_call_out("greeting");
        call_out("greeting",1 , ob);
 }
}

void greeting(object ob)
{
  if (ob->query("quests/r_camel",1))
  {
   message_vision("[1;37m少侠真是本事高啊！[0m\n",ob);
  }
  else if (ob->query("quests/w_camel",1))
  {
   message_vision("[1;33m少侠想要（want）骑骆吗？[0m\n",ob);
  }
  else if( ob->query("class")==!"bandit" && ob->query_temp("marks/f_camel",1))
  {
   message_vision("[1;35m少侠本领果然足够！
老朽没啥么好送的，这有几十两银子，少侠就收下吧！[0m\n",ob);
   ob->add_money("gold",25);
   ob->set("quests/r_camel",1);
  }
  else if (ob->query("class")=="bandit" && ob->query_temp("marks/f_camel",1))
  {
   message_vision("[1;33m没想到少侠果真驯了这骆驼！
看样子这也是个缘份，老朽这有个不中听的建议，望请少侠采纳，
老朽这骆取回来已过相当时日。本来呢，这骆是老朽要骑的，无
奈武功不济，驯不得这骆。如今少侠既得这缘份，就算和老朽结
识一场，少侠想骑骆呢，便来跟老朽讲一声（want），自不会跟
少侠做何为难的！好罢？[0m\n",ob);
  ob->set("quests/w_camel",1);
  }
  else if (ob->query_temp("marks/k_camel",1))
  {
   message_vision("[1;31m唉哟！少侠居然把牠杀了！[0m\n",ob);
   message_vision("[1;31m你....你这样子我该怎么办啊？[0m\n",ob);
   this_object()->kill_ob(ob);
  }
}

void die()
 {
  object killer;
  killer=query_temp("last_damage_from");
  message_vision("[1;35m啊，少侠武功果。。。果然高强啊。。。。[0m\n",killer);
  killer->delete_temp("marks/k_camel");
  ::die();
 }
