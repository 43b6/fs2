//这一版本，只是加入霸雨式之谜，所需的回话与接受东西时的反应
//其他并没有修改任何数值
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_givewhip();
string do_givebook();
string do_rain();
string poison();
int accept_object(object me,object ob,object who)
{
  object ob2;
  if (me->query_temp("rain_2") != 1)
  {
    command ("say 神经病，你给我这个干嘛！\n");
    destruct(ob);
    return 0;
  }
  if(ob->query("id") == "rou_letter" && me->query_temp("gived") != 1) 
  {
    destruct(ob);
    message_vision(" 庄静柔将信收下来，将信拆开，仔细阅\读\n",me);
    message_vision(" 一开始还面带怒容，但逐渐的笑容渐开。。。\n",me);
    message_vision(" 看完信后，庄静柔很开心：\n",me);
    command("say 小朋友，你真好，你将这一封信带给柴荣他\n");
    ob2=new("/open/killer/obj/low_let.c");
    ob2->move(me);
    me->set_temp("gived",1);  //防止重复拿取
    me->set_temp("rain_3",1);
    return 1;
  }
  if(me->query_temp("god") == 1 && ob->query("id") == "god dagger")
  {
    destruct(ob);
    message_vision(" 庄静柔将灭神匕首收下来，仔细观看着匕首，似乎在想着什么\n",me);
    message_vision(" 忽然脸颊留下两行清泪\，庄静柔回过身去。。。\n",me);
    message_vision(" 过了一会儿，回过身来说：\n",me);
    command("say 当时真不好意思，打伤了你，这是天魔解体大法，拿去吧！");
    ob2=new("/open/killer/obj/evilgod.c");
    ob2->move(me);
  }
  return 0;
}

void create()
{
        set_name("庄静柔",({"master low","low"}));
        set("long","她就是武林中令人闻风丧胆的冥蛊魔教教主「庄静柔”，别看她一张秀丽的脸蛋，其为人可是十分阴毒。\n");
        set("gender","女性");
        set("class","poisoner");
        set("nickname", HIR "九阴仙子" NOR);
        set("combat_exp",3000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 48);
        set("force",10000);
        set("max_kee",10000);
        set("kee", 10000);
	set("max_gin",10000);
	set("gin",10000);
	set("sen",10000);
	set("max_sen",10000);
        set("bellicosity",1500);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
         (: poison :),
         (: perform_action("poison.five") :),
         (: perform_action("poison.firefinger") :),
        }));
        set("functions/firefinger/level",100);
	set("functions/five/level",100);
        set_skill("literate",30);
        set("max_force",10000);
	set("env/cure_poison","dark");
        set_skill("move",120);
        set_skill("force",60);
        set_skill("dodge",120);
        set_skill("parry",50);
        set_skill("poison",120);
        set_skill("whip",100);
        set_skill("poisonforce",100);
        map_skill("force","poisonforce");
        set("force_factor",20);
        set_skill("coldpoison",100);
        set_skill("nine-steps",120);
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("poison","coldpoison");
        set_skill("ming-snake",100);
        map_skill("whip","ming-snake");
        set("inquiry",([
        "月石"   : "那是本教众宝之一，平日收藏于左护法那，近来‘遭窃’了。",
        "遭窃"   : "我想可能是本教‘叛徒’所为。",
        "叛徒"   : "目前不清楚，但我想外面的访客可能有问题。",
        "basewhip" : (: do_givewhip :),
        "天魔解体大法" : (: do_rain :),
        "basebook" : (: do_givebook :),
        "赤火令"   : "你以为你是谁呀! 胆敢跟我要令牌。",
        ]));
        setup();
        create_family("冥蛊魔教",3,"教主");
carry_object("open/poison/obj/circle.c")->wear();
carry_object(POISON_OBJ"bleed_whip")->wield();
carry_object("open/poison/obj/godcloth.c")->wear();
carry_object("open/poison/obj/cape.c")->wear();
carry_object("open/poison/obj/feather.c")->wear();
carry_object("/obj/poison/rose_poison")->set_amount(70);
carry_object("/obj/poison/five_poison")->set_amount(70);
carry_object("/obj/poison/dark_poison")->set_amount(70);
carry_object("/obj/poison/faint_poison")->set_amount(70);
}
string poison()
{
        command("perform poison.faint");
        return "\n";

}

void init()
{
        add_action("do_join","join");
        add_action("do_say","swear");
}
int do_join()
{
        object me=this_player();
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
        object book = new("/open/poison/obj/pbasebook");
        if(me->query_temp("master_temp")){
           if(str == "尽忠魔教"){
                me->set("poison_low",1);
            if(!((me->query("class")=="poisoner")&&(!(me->query("family/family_name"))||(me->query("family/family_name")=="冥蛊魔教"))))
                {
                command("shout $HIR$又有人投靠我教，效忠于我了。");
                }
           else {
                command("shout $HIR$我冥蛊魔教又有新教徒$HIG$"+me->query("name")+"\n");
                command("shout $HIR$看来是我魔教复出武林的时后了。\n");
                command("poisoner $HIG$让我们一起欢迎我们的新教徒$HIR$"+me->query("name")+"$HIG$吧。\n");
                }
                say(HIC"玉女说道：欢迎加入魔教，将来要遵从教令哦。\n"NOR);
                command("say 这是本教入门书籍，你好好研读吧。");
                book->move(me);
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
void heart_beat()
{
	object ob=this_object();
	int i;

        if( !ob->is_fighting() && ob->query_condition() )
	{
	for(i=0;i<5;i++)
	{
	switch(i)
	{
	  case 0:
	  if(ob->query_condition("snake_poison"))
	  {
	  ob->set("env/cure_poison","snake");
	  command("exert depoison");
	  }
	  break;

	  case 1:
	  if(ob->query_condition("dark_poison"))
	  {
	  set("env/cure_poison","dark");
	  command("exert depoison");
	  }
	  break;

	  case 2:
	  if(ob->query_condition("rose_poison"))
	  {
	  set("env/cure_poison","rose");
	  command("exert depoison");
	  }
	  break;

	  case 3:
	  if(ob->query_condition("five_poison"))
	  {
	  set("env/cure_poison","five");
	  command("exert depoison");
	  }
	  break;

	  case 4:
	  if(ob->query_condition("fire_poison"))
	  {
	  set("env/cure_poison","firefinger");
	  command("exert depoison");
	  }
	  break;
	}
	}
        }
        ::heart_beat();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="poisoner")
        {
                command("say 你不是我们魔教的人，你走吧 !\n");
                return;
        }
        if(!this_player()->query("poison_low"))
        {
                command("say 虽然你是魔族一员，但你未入我教。\n");
                command("say 所以我也不便传你任何技能，你请回吧。\n");
                return;
        }
        command("smile");
          command("recruit "+ob->query("id"));
}
string do_givebook()
{
  object me = this_player();
  object book = new("/open/poison/obj/pbasebook");
  if(me->query("poison_low")){
        book->move(me);
        command("smile");
        return "你就好好研读这本书。\n";
        }
  return "你并未入我冥蛊魔教，还想要书呀，滚!\n";
}

string do_givewhip()
{
  object me = this_player();
  object whip = new("/open/poison/obj/mo-whip");
   if(me->query("poison_low")){
        whip->move(me);
        command("smile");
        return "这鞭子就让你防身用，快快长大哦。\n";
        }
   return "没入教的别想要鞭子，走吧!\n";
}

string do_rain()
{
  object me = this_player();

   if(me->query_temp("rain_0") == 1)
   {
        command("sm");
        me->set_temp("rain_1",1);
        return "你想挨鞭子吗？滚回去！我不想谈那个躲在地下水道的烂人的事情\n";
   }
   command("sm "+me->query("id"));
   return "哼！不知道\n";
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
        tell_object(users(),
"\n\t"YEL"冥蛊魔教的方位突然传来一阵嘶声裂地的怒吼声!!
\n\t"YEL"好不甘心呀!!   我"HIM"庄静柔"NOR+YEL"竟然连区区的一个"HIY+winner->query("name")+NOR+YEL"都打不过!!
\n\n\t"HIR"我魔教所有的门徒们啊!!    请尽情的去使坏吧!!
\n\t"HIR"让那天空降下地狱之火焰!!    让那大海染成鲜红!!"HIR"
\n\t让那所有生命在我们魔教面前都感到颤栗害怕!!\n\n"NOR);
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/magic_emblem")->move(environment(winner));
	  message_vision(HIM"\n从庄静柔的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/magic_emblem",sprintf("%s(%s) 让庄静柔掉下了幻之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/magic_emblem")->move(environment(winner));
	  message_vision(HIM"\n从庄静柔的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/magic_emblem",sprintf("%s(%s) 让庄静柔掉下了幻之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}