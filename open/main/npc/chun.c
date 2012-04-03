// 延庆太子 by xboy
#include <ansi.h>
inherit NPC;

void create()
{
        set("long","
眼前这个老者，长须及胸，根根漆黑，一双眼睁的大大的，望着远方，
眨也不眨一下，脸色木然，似乎竟是死了一般，你仿佛感受到一股不祥
的预感，不禁打了个冷战。\n");
        set("gender","男性");
        set("clan_kill",1);
        set("class","fighter");
        set("nickname",HIY"恶贯满盈"NOR);
        set("title","四大恶人之首");
        set_name("段延庆",({"Duan ya-chun","duan","chun"}));
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("attitude","aggressive");
        set("max_force",5000);
        set("force",5000);
        set("max_kee",3000);
        set("kee",3000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("sen",4000);
        set("gin",4000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("int", 30);
        set("force_factor",15);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("parry",100);
        set_skill("six-fingers",100);
        set_skill("unarmed",40);
        set_skill("stabber",150);
        set_skill("literate",100);
        set_skill("sunforce",150);
        map_skill("force","sunforce");
        map_skill("unarmed","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("parry","six-fingers");
        set("functions/handwriting/level",20);
        set("chat_chance_combat", 15);
         set("chat_msg_combat", ({
                (: perform_action("six-fingers.handwriting") :),
        (: this_object(),"special_attack" :),
        }));

        setup();
        carry_object("/open/tailong/obj/i-staff")->wield();
        carry_object("/open/tailong/obj/i-staff")->wield();
        add_money("cash", 5);

}

 int special_attack()
 {
   object ob,me;
   int k;
   me = this_object();
   k = random(10);
   ob=this_object()->query_enemy();
   if(k > 7)
   {
   message_vision(HIG"
\n\n段延庆口中逆运真气, 突然大喝"BLINK+HIR"‘狂"HIC"风"HIG"七"HIM"星"HIW"点’"HIG", 只见手中"HIB"玄铁仗换化成七道光芒,
 
向你疾奔而来, 你全身垄罩在无形剑气之下, 进退维谷, 瞬时受到无法估计的伤害!!!!!\n\n"NOR,this_object());
   ob->add("kee",-200);
   }
   else
   {
   message_vision(HIY"\n
延庆太子双手疯狂乱点, 无数道剑气, 织成一面耀眼剑网,此招正是段家的禁断杀招

                        "HIW"～～"HIM" 无"HIG" 常"HIW" ～～

　　　　　　　　　　　　　　　　　～～"HIR" 恨"NOR+CYN" 苍"HIC" 天"HIW" ～～

"RED"你深陷剑网当中, 首尾不能相顾, 顿时深中无数道剑气, 只怕有身命危险!!!\n\n"NOR,this_object());
ob->add("kee",-100);
me->add("kee",100);
   }
  return 1;
  }

void heart_beat()
{
 object me;
        if( random(5) < 4 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}

void die()
{
   object me,book;
   me= query_temp("last_damage_from");
        tell_object(users(),HIY"

         延庆太子仰天叹道："HIC"‘"HIW"老夫和大理段氏恩怨纠葛数十年
                             今日竟死在"BLINK+HIY+me->query("name")+NOR+HIW"之手，
                             难道是..天..在..谴..责..我..吗......"HIC"’

"NOR);

   if(me->query("marks/six_sp")<3 && !me->query("quest/4-badman"));
   {  
   me->set("marks/six_sp",2);
   me->set_temp("six_sp_quest",10);
   book=new("/open/tailong/obj/six_book");
   book->move(me);
   tell_object(me,
HIY"你回想刚刚与延庆太子一战，延庆太子的身形手法竟是如此巧妙
不禁暗暗侥幸自己居然能打败他。\n"+
"你细想延庆太子战斗时的狂斗神情，不由得自己比划起来。\n"+
HIC"你习得了禁断杀招"HIW"‘无常．恨苍天’"NOR"!\n\n"+
"你自段延庆身上搜出"HIY"「六脉神剑剑经”"NOR"!\n"
);

   }
//  call_out("msg2",1,me);
   message_vision(HIG"忽然一个白影以极快的速度一闪即过, 等你定睛一看, 白影早就已经消失, 段延庆也不见了!!\n"NOR,this_object());
   destruct(this_object());
}

/*
void msg2(object me)
{
message("mud",HIR"\n南海鳄神狂叫:你竟然杀了我们老大，老子今天要血洗平南城!!!\n" NOR,me);
        ::die();

}
*/
