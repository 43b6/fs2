// by roger
// add by appo
inherit NPC;
#include <ansi.h>
string ask_tesin();
void do_acc();
void do_acc1();
void do_acc2();
void make_sword();
void create()
{      
        set("nickname","巧夺天工");
        set_name("李昆阳",({"lee"}));
        set("gender","男性");
        set("age",58);
        set("str",30);
        set("long","
一个孤独的老人，在魔界村里打造一些兵器和防具为生。由于魔界村的人常常
要出魔界村去冒险，因此兵器和护具的需求也蛮大的。不过仔细一看他的眼神
精光内敛，打铁的手法更隐隐约约有武功的影子，且稳健异常显示他的内力修
为非常深厚。难道他的过去有什么惊人的艺业吗?
\n");   
        set("inquiry",([
        "迅雷剑" : (:do_acc:),
        "龙铁心" : (:ask_tesin:),
        "护甲宝物" : (:do_acc1:),       
        "过去" : (:do_acc2:),  
        ]));
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",3000);
        set("force",5000);
        setup();
}
int accept_fight(object who)
{
 return notify_fail("李昆阳说:老夫很久不动手啦...\n");
}
int accept_kill(object who)
{
 return notify_fail("李昆阳说:老夫很久不动手啦...\n");
}

void do_acc()
{
object me;
me = this_player();
    if(me->query("quest/tunder_sword")!=1)
    command("say 听说有这把剑，不过铸法已失传了。");
                                           
    else{
         if(!present("tunder_sword",me)){
    command("say 什么...这...你竟然知道铸法...难以相信啊..");
    command("say 你等着，让老夫为你打造这把早已失传的剑!");
    tell_object(me,HIY"李昆阳的眼睛突然精光暴射...\n"NOR);
    tell_object(me,HIY"李昆阳开始烧铁铸剑...\n"NOR);
    tell_object(me,HIB"屋里忽然蓝光隐隐....\n"NOR);
    command("say 唉...终于铸好了...花了我毕生的功力...");
    command("say 拿去吧，望你凭藉此剑斩妖除魔!!");
    new("/daemon/class/swordsman/obj/tunsword")->move(me);  
                                        }
         else command("say 你不是已经有一把了??");             
        }
}

void do_acc2()
{
object me;
me = this_player();
    if(me->query("family/family_name")=="仙剑派"){
   command("sigh");
   command("你是仙剑派的吧?告诉你吧，我是第二代掌门的师弟的秘密弟子");
   command("say 我师父就是风清扬!");
   
                                     
      
                                                 }
}

void do_acc1()
{
 object me;
 me=this_player();
   if(me->query("quest/save_yan")!=1)
     command("say 你在说什么?");
                                     
   else{
     if(present("gold hat",me)) command("say 你不是已经有了??");

                              
     else if(me->query("bank/coin",1)<500000) command("say 这护甲很贵，你的存款不足以支付(需50两黄金)");
                                         
     else{
     command("say 没问题，马上打给你");      
     tell_object(me,HIY"李昆阳给你一顶金翅朝天冠\n"NOR);
     me->add("bank/coin",-500000);
     new("/open/mogi/castle/obj/gold-hat")->move(me);
         }
       }
}
 string ask_tesin()
{
if (this_player()->query("quests/shasword")==5)
{
 if (this_player()->query_temp("find_tesin2")==1)
  {
  this_player()->set_temp("find_tesin",1);
  return ("耸了耸肩，很抱歉地说：无可奉告。");
  }
 if (this_player()->query_temp("find_tesin2")==2)
  {
  this_player()->set_temp("find_tesin",2);
  return ("龙铁心...没听过ㄝ.");
  }
 if (this_player()->query_temp("find_tesin2")==3)
  {
  this_player()->set_temp("find_tesin",3);
  return ("嗯..这个嘛..嗯~~。");
 }
 if (this_player()->query_temp("find_tesin2")==4)
  {
  this_player()->set_temp("find_tesin",4);
  return ("嗯..这个嘛..嗯~~。");
  }
 if (this_player()->query_temp("find_tesin2")==5)
  {
  this_player()->set_temp("find_tesin",5);
  return ("阿..我不知道啦..烦不烦阿 一直问...我都烦死了~~。");
  }
 if (this_player()->query_temp("find_tesin2")==6)
  {
  this_player()->set_temp("find_tesin",6);
  return ("你去找别人吧..这..我实在是不敢跟你说。");
  }
 if (this_player()->query_temp("find_tesin2")==7)
 {
  this_player()->set_temp("find_tesin3",1);
  return ("我这的东西都是龙铁心教我做的.至于龙铁心在哪..我就不知道了..");
 }
}
}







