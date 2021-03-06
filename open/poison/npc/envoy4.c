#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_key();
void create()
{
        set_name("索魄使",({"envoy"}));
        set("gender","男性");
        set("class","poisoner");
	set("combat_exp",10000);
        set("age",26);
	set("long","魔教七大使之一，协助执法长老执行教中弟子犯错之刑罚。\n");
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
	set("kee",450);
	set("eff_kee",450);
	set("max_kee",450);
        set("force",450);
        set("max_force",450);
        set("inquiry",([
        "钥匙"   : (: about_key :),
        "石牢"   : "这是魔教囚禁犯教规之处，我掌管重犯牢房之钥，其他我是不会说的。",
        "赵青云" : "这...你去问问我们长老吧。",
        ]));
        set_skill("unarmed",10);
        set_skill("parry",10);
        set_skill("dodge",20);
        set_skill("whip",15);
        set_skill("force",10);
	set_skill("poisonforce",40);
        set_skill("poison",16);
	set_skill("coldpoison",40);
        set_skill("nine-steps",30);
        map_skill("dodge","nine-steps");
        map_skill("force","poisonforce");
	map_skill("poison","coldpoison");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object("/obj/poison/faint_poison")->set_amount(20);
}

string about_key()
{
  object me = this_player();
  if(me->query_temp("have_get_blue"))
        return "我不是已经给你一把钥匙了。";
  me->set_temp("can_get_blue",1);
  command("hehe");
  command("say 想要钥匙可以，先跟我比试比试再说。");
  return "有本事的话，钥匙我就双手奉上。";
}
int accept_fight(object me)
{
  if(this_object()->is_fighting())
        return notify_fail("你没看到我正在忙吗?\n");
  if(me->query_temp("can_get_blue")) {
        me->delete_temp("can_get_blue");
	this_object()->set("fight_turn",10);
        command("grin");
        command("来吧，使出你的看家本领让我看看。");
        remove_call_out("fighting1");
        call_out("fighting1",1,me);
        return 1;
      }
  return 1;
}
void fighting1(object me)
{
  object ob = this_object();
  int turn = ob->query("fight_turn") -1;
  if(!turn && ob->is_fighting()) {
	ob->remove_all_killer();
	 message_vision("突然使者荡开$N的攻击，收手回跃三步。\n",me);
	remove_call_out("fighting1");
        remove_call_out("won");
        call_out("won",1,me);
        }
  if(ob->is_fighting() && me->is_fighting()) {
          ob->set("fight_turn",turn);
	  set("kee",450);
	  set("eff_kee",450);
	  set("max_kee",450);
          remove_call_out("fighting1");
          call_out("fighting1",1,me);
         }
/*
  else  if(!me->query_temp("have_get_blue"))
          command("say 哈! 哈! "+me->query("name")+"是如此肉脚，竟也敢向我拿钥匙。");
*/
}

void won(object me)
{
  object key = new(POISON_OBJ"blue_key");
  me->set_temp("have_get_blue",1);
  key->move(me);
  command("smile");
  command("say 你果然有两三步，这钥匙我就交给你了。");
}
