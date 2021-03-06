#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("庄静柔",({"master low","low"}));
	set("long","她就是武林中令人闻风丧胆的冥蛊魔教教主「庄静柔”，别看她一张秀丽的脸蛋，其为人可是十分阴毒。\n");
	set("gender","女性");
	set("guild_master",1);
	set("class","poisoner");
	set("nickname","九阴仙子");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",800);
	set_skill("literate",80);
	set("max_force",800);
	set_skill("move",100);
	set_skill("force",40);
	set_skill("dodge",100);
	set_skill("parry",60);
	set_skill("poison",100);
	set_skill("unarmed",40);
	set_skill("whip",60);
	set_skill("poisonforce",60);
	map_skill("force","poisonforce");
	set("force_factor",10);
	set_skill("coldpoison",100);
	set_skill("nine-steps",100);
	map_skill("dodge","nine-steps");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
		(: perform_action,"poison.five" :)
	}));
	map_skill("move","nine-steps");
	map_skill("poison","coldpoison");
	setup();
	create_family("冥蛊魔教",3,"教主");
	carry_object(POISON_OBJ"bleed_whip")->wield();
	carry_object("/obj/poison/rose_poison")->set_amount(30);
	carry_object("/obj/poison/five_poison")->set_amount(30);
	carry_object("/obj/poison/dark_poison")->set_amount(30);
}

int accept_object(object me,object ob)
{
  if(ob->query("id")=="moon-stone")
   {
        if(me->query("mark/love"))
      {
       command("say 真是谢谢你了。");
       return 1;
      }
    if(me->query("family/family_name")!="冥蛊魔教")
    {
      command("thank "+me->query("id"));
      me->set("mark/love",1);
      me->add("combat_exp",2000);
      message_vision("装静柔温柔的欠了欠身。\n",me);
      command("say 真是谢谢你啰！");
    }
 else {
        command("smile "+me->query("id"));
        if(me->query("gender")=="男性")
        me->set("title","冥蛊魔教苍虹使");
        if(me->query("gender")=="女性")
        me->set("title","冥蛊魔教朱葵使");
        me->set("mark/love",1);
        me->add("combat_exp",2500);
        message_vision("庄静柔愉快的微笑着 ^_^。\n",me);
        command("shout 好！+"me->query("name")+ 能成功寻回月石，看来本教复兴有望了"。);
        command("say 看来你有资格学习本教不传绝学「倾城之恋”了。);
        }
  return 1;
    }
}


void init()
{
        add_action("do_join","join");
	add_action("do_say","swear");
}
int do_join()
{
        object me=this_player();
        if(this_player()->query("class"))
                return notify_fail("你已经加入其他工会了。\n");
	if(!me->query_temp("poison_pass2")){
		command("say 你还没通过入会仪式呢？");
		command("say 等你通过再来吧。");
		return 1;
	       }
	else {
		command("smile");
		command("say 很好，既然你已求得两位长老的同意。");
		command("say 那你就在此宣誓(swear)入教。");
		me->set_temp("master_temp",1);
                say(HIC"金童说道：请施主宣誓‘尽忠魔教’以完成仪式。\n"NOR);
		return 1;
	    }
}
int do_say(string str)
{
	object me = this_player();
	if(me->query_temp("master_temp")){
	   if(str == "尽忠魔教"){
		me->set("class","poisoner");
            message_vision(sprintf(HIC"$N发誓说道："+str+"\n"NOR),me);
		message("system",
HIR "突然间......狂风大作、晴天霹雳.....\n\n世间上又多一个魔教徒"+me->name()+" !!!\n" NOR,users());
		command(":D");
		say(HIC"玉女说道：欢迎加入魔教，将来要遵从教令哦。\n"NOR);
		me->delete_temp("master_temp");
		return 1;
	      }
	  else {
            message_vision(sprintf(HIC"$N发誓说道："+str+"\n"NOR),me);
	    command("say 你说什么呀，没诚意就滚回去。");
	    me->delete_temp("master_temp");
	    return 1;
	   }
    message_vision(sprintf(HIC"$N发誓说道："+str+"\n"),me);
    command("say 我有同意让你发誓吗？");
    return 1;
}
}
  void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="poisoner")
	{
		command("say 你不是我们魔教的人，你走吧 !\n");
		return;
	}
	command("smile");
          command("recruit "+ob->query("id"));
}
