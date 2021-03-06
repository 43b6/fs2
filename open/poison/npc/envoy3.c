#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_key();
void create()
{
        set_name("勾魂使",({"envoy"}));
        set("gender","男性");
        set("class","poisoner");
	set("combat_exp",10000);
        set("age",26);
	set("long","魔教七大使之一，协助执法长老处理教中刑罚之事。\n");
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",450);
        set("max_force",450);
        set("inquiry",([
        "钥匙"   : (: about_key :),
        "石牢"   : "这是魔教囚禁犯教规之处，我掌管一般牢房之钥，其他我是不会说的。",
        "赵青云" : "这...你去问问我们长老吧。",
        ]));
        set_skill("unarmed",10);
        set_skill("parry",10);
        set_skill("dodge",20);
        set_skill("whip",15);
        set_skill("force",10);
        set_skill("poisonforce",15);
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
  if(me->query_temp("have_get_red"))
        return "我不是已经给你一把钥匙了。";
  if(me->query_temp("poison_help") != 3)
        return "哦! 现在我身上并没有钥匙，你要钥匙做啥! ";
  me->set_temp("can_get_red",1);
  command("say 我怀疑你是假传教令，否则教主怎会将教令传于你。");
  return "要钥匙可以，先跟我比一场，让我相信你的实力再说。";
}
int accept_fight(object me)
{
  object key;
  if(me->query_temp("can_get_red")) {
        me->delete_temp("can_get_red");
	me->set_temp("have_get_red",1);
        key = new(POISON_OBJ"red_key");
        key->move(me);
        command("smile");
        command("say 果然是英雄出少年，你有这般的勇气，难怪教主会信赖你。");
	command("say 好! 好! 这把钥匙我就教给你了。");
	return notify_fail("");
       }
  return 1;
}
