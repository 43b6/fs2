inherit NPC;     //段霾 by dhk 2000.4.22
#include <ansi.h>
inherit F_MASTER;
#include </open/open.h>
string do_mime2();
string do_mime3();

void create()
{
  set_name("段霾",({"mime duan","mime","duan"}));
set("long","段云的师兄，也是段家第十代大弟子。其从小个性燥烈，颇\n"
            +"有败家子的风范。据闻后来他在一次的奇遇中救了一名世外\n"
            +"高人，于是那位高人传他十甲子的功力给他，而他的个性不\n"
            +"知是否受到那位高人修为的影响有了很大的改变，变的沉稳\n"
            +"内敛、也淡泊名利遂在接任掌门前晚，出走云游五岳。今能\n"
            +"一见其真面目可谓三生有幸也。\n");
  set("gender","男性");
  set("class","scholar");
  set("title",""HIY"时雨"WHT"先生"NOR"");
  set("attitude","heroism");
  set("age",300);
  set("max_kee",10300);
  set("kee",10300);
  set("str",40);
  set("con",40);
  set("cps",40);
  set("cor",24);
  set("int",32);
  set("bellicosity",10000);
  set("max_force",20000);
  set("force",20000);
  set("force_factor",20);
  set("combat_exp",8000000);
//提示by bss,下面所设skill中,有没有少设那个skill阿???那个就是为何不能用handwriting的原因了
  set_skill("dodge",120);
  set_skill("move",120);
  set_skill("force",250);
  set_skill("literate",200);
  set_skill("parry",100);
  set_skill("unarmed",100);
  set_skill("stabber",120);
  set_skill("linpo-steps",100);
  set_skill("six-fingers",100);
  set_skill("sunforce",250);
  map_skill("unarmed","six-fingers");
  map_skill("parry","six-fingers");
  map_skill("stabber","six-fingers");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set_temp("fan-finger",100);
  set("env/六绝剑","YES");
  set("marks/fan-finger",1);
  set("marks/sun-finger",1);
  set("marks/six_sp",3);
  set("inquiry", ([
  "飘阳扇"         : (: do_mime2 :),
  "材料"           : (: do_mime3 :),
  ]));
  set("functions/handwriting/level",100);
 set("functions/fan-finger/level",100);
  set("chat_chance_combat",100);
  set("chat_msg_combat",({
     (:perform_action,"unarmed.handwriting":),
     (:this_object(),"exert_sunforce":),
     }));
  set("chat_chance", 1);
setup();
  add_money("gold",50);
 carry_object("/data/autoload/scholar/finger_fan.c")->wield();
  carry_object(PING_OBJ"neck0")->wear();
  carry_object("/open/ping/obj/cloud_fan");
  create_family("段家",10,"弟子");
}
int accept_kill(object who)
{
  object k=this_player();
  command("perform unarmed.handwriting");
  command("wield fan");
  kill_ob(who);
  return 1;
}
int accept_fight(object who)
{
  object k=this_player();
  command("perform unarmed.handwriting");
  command("wield fan");
  fight_ob(who);
  return 1;
}

void init()
{
        set_heart_beat(1);
        add_action("do_nod","nod");
        add_action("do_say","say");
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
	command("shoot");
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
                else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}
string do_mime2()
{
        object me=this_player();
        if( me->query_temp("mime_ok") == 1 )
        {
        if( me->query("family/family_name") == "段家" )      me->set_temp("mime_ok",2);
          return(
          "刚刚本座见你以本门上乘轻功追赶本座，而且还追上本座。本座\n"+
          "          就看得出你的武功修为甚佳。再加上云师弟信函的推荐，就晓得\n"+
          "          你的人品一定也端正。要本座传你飘阳扇设计实在不难，但是我\n"+
          "          比较担心的是你拿的到〔材料〕吗？....唉!!! \n");
        }
        else
          return("？");
}
string do_mime3()
{
        object me=this_player();
        if( me->query_temp("mime_ok") == 2 )
        {
        if( me->query("family/family_name") == "段家" )      me->set_temp("mime_ok",3);
          return(
          "那材料产于平南王府后山附近的一处孤岭，延途是重重的\n"+
          "          关卡，你有信心能突破关卡拿到吗？\n");
        }
        else
          return("？");
}
int accept_object(object me, object obj)
{

        if( obj->query("id") == "duan's letter" )
        {
          command("pat "+getuid(me));
          if( me->query("family/family_name") == "段家" && me->query_temp("run_over")==1 )
          {
            command("say 啊!!原来你是云师弟门下。哈哈哈!!!不错!不错!不错!哈哈哈!!!\n\n");
            me->set_temp("mime_ok", 1);
          }
            destruct(obj);
        }
        else
        command("? "+getuid(me));
        return 1;
}
int do_nod()
{
object me = this_player();
if(me->query_temp("mime_ok") != 3)
        return 0;
else
me->delete_temp("mime_ok");
remove_call_out("greeting");
call_out("greeting",1,me);
return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("mime_ok") != 3)
        return 0;
if(str == "yes" || str == "ok")
     {
me->delete_temp("mime_ok");
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
return 0;
}
void greeting(object me)
{
  object ob = this_object();
  object map=new("/open/ping/questsfan/obj/weaponmap.c");
  command("smile");
  command("say 好吧!!!那后山通道就在云师弟房间的〔床板〕机关下。\n\t  这设计图我就先传给你吧!你自己要小心一点，去吧!!!\n");
  message_vision("$N交给$n一张飘阳扇武器设计图。\n",ob,me);
  map->move(me);
  me->set("now_start",1);
}

void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),"\n\t"HIR"‘"HIB"千  山  鸟  飞  绝          万  径  人  踪  灭"NOR"\n\n\t\t"HIB"孤  舟  簑  笠  翁          独  钓  寒  江  雪"HIR"’"NOR"\n"+
        "\n\t想我"HIC"段"WHT"霾"NOR"云游五岳, 今却败于"+winner->query("name")+"之手\n\t"HIY"哈哈哈！"NOR"可谓～"HIC"长江后浪覆前浪矣"NOR"～\n");
        tell_object(users(),"\n\n"CYN"南方天空画过一道流星。"NOR"\n\n\t「"HIY+BLINK"天枢星落"NOR"”\n\n");
        :: die();
}

