#include </open/open.h>
inherit NPC ;

string give_item(object me)
{
 me=this_player();
 me->set_temp("rain_0",1);
 return "这。。。我不敢讲。你去魔教问静柔姑姑，有关（天魔解体大法）的事情。\n";

}

string pass_room(object me)
{
 me=this_player();
 
 if (me->query_temp("key") != 1)
 {
   return "你不给我钥匙，我怎么开启呢？。\n";

 }
 me->set_temp("key",2);
 return "想要进去？把钥匙交给我吧！\n";

}

void create()
{
  object ob;
  set_name("少年",({"young"}));
  set("title", "看守");
  set("gender", "男性");
  set("class","killer");
  set("age",18);
  set("attitude", "killer");
  set("long", "他在此看守旧玩家所留下来的东西\t
你不要以为他是少年郎就好欺负,他可是叶秀杀的外甥哦，知道不少黑牙连的(往事)。
若没有一定程度,要杀他是不可能....\n");
   set_skill("rain-throwing",30);
   map_skill("throwing","rain-throwing");
   set("inquiry",([
       "往事"    : "呵。。。你好可爱耶，那么多往事我哪知道你要问哪一项(know)？\n",
       "霸雨式"  : "那天我看舅舅的受伤之处还有着特殊灵气呢！！\n",
       "阎影匕首": "传说，那是杀手的超高级技巧，只有内力达一定水准的人，才可以学。\n",
       "柴荣"    : "传说他与冥蛊魔教有很深的(渊源)。\n",
       "专用兵器室" : (: pass_room :), 
       "天魔解体大法" : (: give_item :),
       "渊源"    : "传说他好像拿走了，魔教的（天魔解体大法)。\n",
       ]));
   set("kee",600);
   set("max_kee",600);
   set("combat_exp",200000);
   setup();
    add_money("gold",12);
    carry_object("/open/killer/obj/s_pill.c");
    ob=carry_object("/open/killer/obj/lustar.c");
    ob->add_amount(199);
    ob->wield();
}

int accept_object (object me,object ob)
{
 if (ob->query ("id")== "key")
 {
   if (me->query_temp("key") != 2)
   {
     message_vision("你给我这个干嘛！无聊！。\n",me);
     me->set_temp("key",0);
     return 0;
   }
   message_vision("好啦！锁开啦！自己开门(open)啦！。\n",me);
   command("say 不过，我好无聊，陪我过招吧。。。");
   command("fight "+me->query("id"));
   me->set_temp("key",3);
   return 1;
 }
 return 0;
}

void init()
{
 add_action("do_know",({"know"}));
}

int do_know(object me)
{
 me=this_player();
 message_vision("这是青年的日记，但你不敢太仔细看，只略微看到了标题。\n",me);
 message_vision("七月四日，舅舅还是在回想(柴荣)叔叔的事。。。。\n",me);
 message_vision("八月十日，舅舅在和我对战之时，使出杀手必杀招式(阎影匕首）\n",me);
 message_vision("十月十日，舅舅，一如往常在每月的十日外出，但今天回来时受了伤还喃喃的说（霸雨式）。\n",me);
 return 1;
}
