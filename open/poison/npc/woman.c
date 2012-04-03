
// by lys
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string want_help(object me);
void create()
{
        set_name("赵大娘", ({ "old woman","woman" }) );
        set("long","赵大娘看起来非常难过，不知到有何伤心事。\n");
        set("gender","女性");
        set("age",60);
        set("int",45);
        set("inquiry", ([
                "伤心事" : "唉 ! 我儿子不知为何被人抓走了。\n",
                "被谁抓走": "唉 ! 我想应该就是被冥蛊魔教的教徒捉去。\n",
                "儿子"   : (: want_help :) ,
                "赵青云" : "他就是我的心肝宝贝呀。\n",
                ]) );
        setup();
}
void init()
{
  remove_call_out("greets");
  call_out("greets",1,this_player());
  add_action("do_nod","nod");
  add_action("do_shake","shake");
  add_action("do_say","say");
}
void greets(object me)
{
  command("sigh");
}

string want_help(object who)
{
        object me = this_player();
        object room = environment(this_object());
        me->set_temp("poison_help",1);
	command("say 我儿子就是英俊潇洒的赵青云。");
	command("say "+me->query("name")+"你可以帮我找回我的儿子吗? ");
        return "唉～～可怜可怜我这个老妇人吧!!" ;
}
int do_nod()
{
object me = this_player();
if(me->query_temp("poison_help") != 1)
        return 0;
me->set_temp("poison_help",2);
remove_call_out("greeting");
call_out("greeting",1,me);
 return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("poison_help") != 1)
        return 0;
if(str == "yes" || str == "可以")
     {
	me->set_temp("poison_help",2);
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
delete_temp("poison_help");
remove_call_out("greeting2");
call_out("greeting2",1,me);
return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("poison_help") != 1)
        return 0;
  me->delete_temp("poison_help");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
void greeting(object me)
{
  object ob = this_object();
  command("smile");
  command("say 谢谢你肯帮我忙，我就在此等你和我儿子的消息。");
}
void greeting2(object me)
{
command("sigh");
tell_room(environment(this_object()),HIC"只见老妇转身向外望去，痴痴等待儿子归来
。\n"NOR);
}
int accept_fight(object who)
{
 object me = this_player();
 command("help!");
 command("say 哇! "+me->name()+"要欺负我这孤苦的老人。");
  return notify_fail(HIC"赵大娘忙道："NOR+me->name()+"请放过我这可怜的老妇人吧。\n");
}
int accept_object(object who, object item)
{
 if(item->query("id") == "jade")
   {

        destruct(item);
        command("say 这是我给青云的玉佩\没错。");
        command("say 看来你已经找到我儿子了。");
        command("say 谢谢你的帮忙。");
  if(!who->query("quests/poison_help") && who->query_temp("poison_help")==4)
          {
	    who->add("combat_exp",800);
            tell_object(who,HIY"你完成了‘老妇人的伤心事’任务！\n"NOR);
            tell_object(who,HIC"你的经验增加了！\n"NOR);
            who->set("quests/poison_help", 1);
            return 1;
          }
  return 1;

   }
}
