inherit NPC;     //天皇 by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
int exert_sunforce();

void create()
{
  set_name(""HIY"天皇"NOR"",({"sky haung","sky","haung"}));
set("long","他是由"HIR"天神"HIC"司徒无我"NOR"亲自封赠"HIM"先权"HIR"五"HIY"皇"NOR"之一的中岳守护神将\n"
            +"─"HIY"天皇"NOR"。他和其他四皇因为相争为守而订定护不支援，要看\n"
            +"由谁掌管之山岳为最后常青之岳。\n");
  set("gender","男性");
  set("class","fighter");
  set("nickname",""HIY"中岳"NOR"─"HIC"守护者"NOR"");
  set("title",""HIM"先权"HIR"五"HIY"皇"NOR"");
  set("attitude","heroism");
  set("age",1000);
  set("max_kee",500000);
  set("kee",500000);
  set("str",40);
  set("con",40);
  set("cps",40);
  set("cor",40);
  set("int",40);
  set("max_force",200000);
  set("force",200000);
  set("force_factor",150);
  set("combat_exp",18000000);
  set_skill("dodge",200);
  set_skill("move",200);
  set_skill("force",550);
  set_skill("parry",200);
  set_skill("unarmed",200);
  set_skill("linpo-steps",200);
  set_skill("six-fingers",200);
  set_skill("sunforce",550);
  map_skill("unarmed","six-fingers");
  map_skill("parry","six-fingers");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set("chat_chance_combat",100);
//set("chat_msg_combat",({
//   (:perform_action,"unarmed.handwriting":),
//   (:this_object(),"exert_sunforce":),
//   }));
setup();
  add_money("gold",50);
//carry_object(PING_OBJ"cloudy_fan()");
//carry_object(PING_OBJ"neck()")->wear();
//create_family("段家",10,"弟子");
}
void init()
{
        add_action("do_answer","answer");
        set_heart_beat(1);
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
        :: heart_beat();
}
int exert_sunforce()
{
        object ob=this_object();
        if( !present("sunforce finger",ob) )
        {
          command("say 好..老夫就陪你玩玩。");
          command("exert sun-finger");
                  command("wield finger");
        }
        return 1;
}
int accept_kill(object who)
{
  command("perform unarmed.handwriting");
  return 1;
}
int accept_fight(object who)
{
  command("perform unarmed.handwriting");
  return 1;
}
void die()
{
        object winner = query_temp("last_damage_from");
        //if(!wizardp(winner)){
        tell_object(users(),"\n\n\t◆"HIY"想  不  到  我  中  岳  竟  是  五  岳  之  中  "NOR"◆\n\n\t\t◆"HIY"最  先  被  击  破  之  山  岳"NOR"◆\n"+
        "\n\n\n\t"HIB"想不到我"HIY"天皇"HIB"为五皇之首, 今日败于"NOR""+winner->query("name")+""HIB"之手"NOR"\n\t"HIR"可恨呀！！！"NOR"\n");

     tell_object(users(),"\n\n"HIR"天皇用尽最后一口真气使出"NOR"闭脉"HIR"、"NOR"枯\血"HIR"、"NOR"锁气"HIR"。"NOR"\n\n\t「"HIY+BLINK"天皇自尽身亡"NOR"”\n\n");

        //}
        :: die();
}

