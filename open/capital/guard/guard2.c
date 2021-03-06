//ring guard by bss
//修改自casey的黄金甲龙
//做出三只不同的,king can call 3 只,else can call 1 只
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N嘎嘎大叫 ,锐利的爪子向$n抓了过去 ,眼看$n就要被抓到了"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N迅速扑至$n面前 , 快速的搧动羽翼,$n在强风吹抚之下,显得摇摇欲坠,$N见机不可失,尖嘴以疾快的速度朝$n刺去"NOR"!!!
",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "破体之伤",
            ]),
([ "action" :"$N忽然用眼睛紧盯着$n,$n只觉得$n眼前的$N忽然变得好大,使$n心生胆怯,身体因过度惊吓而无法动弹"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  240,
             "damage_type":  "恐惧之伤",
            ]),
([ "action" :"$N朝$n猛撞了过去 ,因飞行所产生的巨风 ,挟着万均之势 ,令敌人胆颤心惊"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  275,
             "damage_type":  "撞伤",
            ]),
([ "action":"$N自己的身上的火焰燃到最高点 ,使得全身有如火球一般,炙热非常,
，$N一展翅,就这么朝$n飞去，$n被这种攻势所惊吓,除了逃之外,似乎没有别条路了!!!"NOR"。",
             "dodge"      : -100,
             "parry"      :  -100,
             "damage"     : 892,
             "damage_type":  "严重灼伤",
           ]),
       });

void create()
{
     set_name(HIR"火凤凰"NOR ,({"ring guard", "guard"}) );
     set("race", "野兽");
     set("clan_kill",1);
     set("no_exp",1);
     set("title", "守护者");
     set("age",103972);
     set("long","
生长在火山附近的异兽,因全身无时无刻不在发出炙热的火焰而得名
。\n");
     set_temp("apply/attack",200);
     set_temp("apply/damage",200);
     set_temp("apply/move",200);
        set("no_plan",1);
     set("max_kee",10000);
     set("kee",10000);
     set("force",19000);
     set("max_force",19000);
       set("force_factor",30);
     set("gin", 8000);
     set("sen", 8000);
     set("max_gin", 8000);
     set("max_sen", 8000);
     set("combat_exp",4700000);
     set("chat_chance_combat", 32);
     set_skill("dodge",200);
     set_skill("move", 200);
     set_skill("parry",200);
     set_skill("unarmed",200);
 set("limbs", ({ "凤首", "凤身", "凤足" ,"凤翼" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);

}
mapping query_action()
{
   return action[random(sizeof(action))];
}

void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        BLINK+HBMAG+HIY"一道强光从戒指射出 , 一只巨大的凤凰从戒指中飞出\n\n"
        + name() +BLINK+HBMAG+HIY "缓缓的说道 : 人不犯我,我不犯人!!\n"NOR,
                environment(), this_object() );
        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }
        command("defend "+who->query("id"));
        who->set_temp("have_guard",1);
        set_leader(who);
}
void init()
{

      set_heart_beat(1);
}

void heart_beat()
{
        object me=this_object();
        object who = query_leader ();
        if(!who){
        call_out("leave",0);
        return ;
        }
        if(!who->is_fighting()) {
             call_out("leave",0);
             return;
        }
        if(!me->is_fighting()){
             call_out("leave",0);
             return;
        }
           :: heart_beat();
}
void leave()
{
  object who = query_leader ();
  message_vision (HIR"$N"HIR"说道：我已经帮主人你战斗完毕啰，下次见！\n" +
                  "一阵清风吹过，$N"HIR"的身形随之不见了。\n" NOR, this_object ());
  if (who)
    who->set_temp("have_guard",0);
  destruct(this_object());
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king"))
    who->set_temp("have_guard",0);
  message_vision (HIB"$N惨叫一声啊！消失得无影无踪。\n", this_object ());
  destruct (this_object ());
}

 void die()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king"))
    who->set_temp("have_guard",0);
  message_vision (HIB"$N惨叫一声啊！消失得无影无踪。\n", this_object ());
  destruct (this_object ());

           ::die();
}

