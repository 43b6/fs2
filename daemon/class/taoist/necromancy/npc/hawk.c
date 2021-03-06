#include <ansi.h>
#include <combat.h>
inherit NPC;
//inherit SSERVER;

void hawk1(object me, object victim, object  weapon, int damage);
void hawk2(object me, object victim, object  weapon, int damage);
void hawk3(object me, object victim, object  weapon, int damage);
void hawk4(object me, object victim, object  weapon, int damage);
void hawk5(object me, object victim, object  weapon, int damage);
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);

mapping *action = ({
([ "action" : "$N"HIC"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIR"鹰啸天际，"HIC"瞬间四周魔音产生，刺激着$n"HIC"的脑部，令人神智不清。"NOR,
             "dodge"      :  -25,
             "parry"      :  -25,
             "damage"     :  200,
             "post_action":               (: hawk1 :),
             "damage_type":  "神智不清",
]),

([ "action" : "$N"HIM"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIY"暗潮汹涌"HIM"，由鹰翅所卷起的强烈气流袭卷而出，$n"HIM"被卷入空中，重摔于地。"NOR,
             "dodge"      :  -15,
             "parry"      :  -15,
             "damage"     :  180,
             "post_action":               (: hawk2 :),
             "damage_type":  "摔伤",
]),

([ "action" : "$N"HIB"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIG"斗换星移"HIB"，瞬间黑云密布，大地黑暗，灵鹰趁机朝$n"HIB"发动凌厉攻势。"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  100,
             "damage_type":  "抓伤",
]),

([ "action" : "$N"HIC"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIM"月舞霓裳"HIC"，藉月光蒙蒙之际飞舞天际，令$n"HIC"看的如痴如醉，无法招架。"NOR,
             "dodge"      :  -15,
             "parry"      :  -15,
             "damage"     :  180,
             "post_action":               (: hawk3 :),
             "damage_type":  "抓伤",
]),

([ "action" : "$N"HIB"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIR"焰阳九天"HIB"，只见烈日高照，灵鹰长啸一声俯冲而下迅速攻击$n。"NOR,
             "dodge"      :  -30,
             "parry"      :  -20,
             "damage"     :  100,
             "damage_type":  "抓伤",
]),

([ "action" : "$N"HIG"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIM"昏天暗地"HIG"，满天乌云笼罩不见光明，灵鹰翱翔天际，趁着黑暗之中奇袭$n。"NOR,
             "dodge"      :  -20,
             "parry"      :  -25,
             "damage"     :  200,
             "post_action":               (: hawk4 :),
             "damage_type":  "抓伤",
]),

([ "action" : "$N"HIC"使出"HIY"‘"HIB"鹰魂七变"HIY"’"HIG"--"HIR"天灵"HIG"地气"HIC"，只见灵鹰吸收天地灵气身形不断膨胀，顺势俯冲而下挟带一股强大气流攻击$n。"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: hawk5 :),
             "damage_type":  "灵气血伤",
]),

([ "action" : HIY"灵鹰紫翎化身五彩金翎，身上羽翼闪闪发光，瞬息间从天而降迅速张爪攻击$n。"NOR,
             "dodge"      :  -25,
             "parry"      :  -30,
             "damage"     :  220,
             "damage_type":  "抓伤",
]),

([ "action" : "$N"HIY"以天生神力加上$N"HIY"奇妙咒法，形成一道火球燃烧着目瞪口呆的$n。"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: sp1 :),
             "damage_type":  "烧伤",
]),

([ "action" : HIM"灵鹰紫翎口吐烟雾，在若隐若现之间鹰眼大放异彩，灵鹰本身灵气化成一道强大的气流无情的攻击$n。"NOR,
             "dodge"      :  -30,
             "parry"      :  -30,
             "damage"     :  250,
             "post_action":               (: sp2 :),
             "damage_type":  "割伤",
]),


});

object room2;
void create()
{
        set_name(HIM"紫翎"NOR ,({"manes hawk", "hawk"}) );
        set("race", "野兽");
        set("nickname", HIG"灵鹰"NOR);
        set("age",534);
        set("long","生长于昆仑山顶，集天地灵气为一身的稀世珍禽，背负着守护天道的重要使命\n百年前天道始祖命名为天道圣兽，据说其通灵达性，极为忠心。\n");
        set("str", 50);
        set("cor", 50);
        set("int", 50);
        set("con", 50);
        set("cps", 50);
        set("spi", 50);
        set("per", 50);
        set("kar", 50);
        set("kee", 50000);
        set("gin", 20000);
        set("sen", 20000);
        set("atman",20000);
        set("mana",20000);
        set("force", 100000);
        set("max_kee", 50000);
        set("max_atman",20000);
        set("max_mana",20000);
        set("max_gin", 20000);
        set("max_sen", 20000);
        set("max_force", 100000);
        set("score",100000);
        set("bellicosity", 5000);
        set_skill("move",120);
        set_skill("dodge",120);
        set_skill("parry",120);
        set("force_factor",15);
        set_skill("unarmed",120);
        set("limbs", ({ "头部", "身体", "前爪", "后爪", "尾巴" }) );
        set("verbs",({"bite","claw"}));
        setup();

        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action(object me)
{
    return action[random(sizeof(action))];
}

void hawk1(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIB"\n群山万谷受到"HIG"$N"HIB"的啸声所引，瞬间回声四起形成数道音波轰隆数声击向$n。\n"NOR),me,victim);
               victim->receive_damage("gin", victim->query("max_gin",1)/10);
               victim->receive_damage("sen", victim->query("max_sen",1)/10);
               victim->start_busy(1);
               COMBAT_D->report_status(victim, 1);
}

void hawk2(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIC"\n四周气流瞬间如潮水动荡不停，$n"HIC"受潮流影响渐渐被卷入旋涡中动弹不得。\n"NOR),me,victim);
               victim->receive_damage("kee", victim->query("combat_exp",1)/15000);
               COMBAT_D->report_status(victim, 1);
}

void hawk3(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIY"\n\n-----  "HIM"舞  "HIB"※  "HIC"极 "HIW"～ "HIR"杀  "HIY"-----\n\n"HIG"天空飘来阵阵音响如梦似幻，迷蒙的月光下显现数道女子苗条身影翩翩起舞，四周弥漫着一股\n"HIG"宁静的气息，令人陶醉其中殊不知杀机逼进，只见女子瞬间化为鹰羽如流星般的飞向$n。\n"NOR),me,victim);
               victim->receive_damage("kee", victim->query("max_kee",1)/10);
               victim->add("force", -(victim->query("max_force",1)/10));
               COMBAT_D->report_status(victim, 1);
}

void hawk4(object me, object victim, object  weapon, int damage)
{
    int hawkup;
    hawkup = victim->query("combat_exp",1)/10000 + victim->query("max_force",1)/15 + victim->query("max_kee",1)/15;

     message_vision(sprintf(HIY"\n灵鹰紫翎挥动双翅卷起一阵狂风吹沙，瞬间尘沙飞扬，大地犹如土龙翻身撼动不停。\n"NOR),me,victim);
               victim->receive_damage("kee", hawkup,me);
               COMBAT_D->report_status(victim, 1);
}

void hawk5(object me, object victim, object  weapon, int damage)
{
  int i;
  message_vision(HIM"\n灵鹰"HIG"高声长啸∶可恨的人类们，给我下地狱去吧！\n                                             "HIY"天雷啊！听我号令让那大地毁灭吧！\n                                             "HIR"神火啊！助吾神威将那万物焚烧吧！\n\n"HIM"瞬间大地为之憾动，天空降下无情天雷，地底涌起无数烈火，同时击中$n。\n\n"NOR,me,victim);
  for(i=1;i<=6;i++)
  {
    switch(random(i)+2)
    {
     case 1:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIY"仰天长啸，天雷啊！毁天灭地助我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     case 2:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIR"仰天长啸，地火啊！焚烧大地显我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     case 3:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIY"仰天长啸，怒雷啊！翻云覆雨助我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     case 4:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIR"仰天长啸，魔火啊！焚化万物显我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     case 5:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIY"仰天长啸，狂雷啊！怒啸天地助我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     case 6:
message_vision(sprintf(HIG"      ＿＿▁▂▃▄▅▆▇█ $N"HIR"仰天长啸，神火啊！照耀大地显我神威吧。"HIG"█▇▆▅▄▃▂▁＿＿\n"NOR),me,victim);
     break;
     }
  if( 80 >random(100) )
     {
          message_vision(sprintf(HIB"$n身受雷火两极之伤，生命力已经一点一滴的慢慢消逝了！\n"NOR),me,victim);
          victim->receive_wound("kee",800,me);
          if(i != 7)
          COMBAT_D->report_status(victim,1);
          else if( damage <=0 )
          COMBAT_D->report_status(victim,1);
     }
     else
     {
           message_vision(sprintf(WHT"$n在千钧一发之际躲过了雷火两极的伤害！\n"NOR),me,victim);
     }
   }
  }

void init()
{
       
      set_heart_beat(1);
}
void sp1(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIY"\n\n$N缓缓唸着∶\n                    "HIB"┌"HIR"临    "HIW"兵    "HIG"斗    "HIY"者    "HIC"皆    "HIG"阵    "HIR"列    "HIB"在    "HIM"前"HIB"┐\n                    "HIB"│   "HIW"～    ～    ～    ～    ～    ～    ～    ～   "HIB"│\n                    "HIB"└────────"HIM"◆"HIC"诛          "HIR"邪"HIM"◆"HIB"────────┘\n\n"HIR"沉寂大地的远古神龙受到召唤呼啸而出，与灵鹰翱翔九天狂吼长啸，两道灵光瞬间穿透$n的身体。\n\n"NOR),me,victim);
               victim->receive_damage("kee", 800 );
               COMBAT_D->report_status(victim, 1);
}

void sp2(object me, object victim, object  weapon, int damage)
{

     message_vision(sprintf(HIM"\n          ●  ●  ●  "HIC"雪  花  纷  纷  "HIW"～  "HIG"天  灵  "HIB"地  气  "HIM"●  ●  ●\n"NOR),me,victim);
               victim->receive_damage("kee", 300 );
               victim->receive_damage("gin", 300 );
               victim->receive_damage("sen", 300 );
               victim->add("force", -500 );
               victim->start_busy(1);
               COMBAT_D->report_status(victim, 1);
}

void invocation(object who,object room)
{
        int i;
        object *enemy;
		room2=room;

        message("vision",
          NOR+name() + HIY + "大声的咆哮着:\n"HIR"                   愚蠢的人啊！竟敢伤害吾守护的天道门徒！！\n"HIR"               　　如今我灵鹰守护在此,就让你尝尝死亡的滋味.....\n"NOR,
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
		set_leader(who);
        command("defend "+who->query("id"));
        who->set_temp("have_hawk",1);
        
}

void heart_beat()
{
 object env,me,*enemy,target,ob,who;
 int kee,i;

   i=random(sizeof(enemy));
   ob=this_object()->query_enemy();
 me = this_object();
 who = query_leader();
 env = environment(me);
        if(!who){
        call_out("leave",0);
        return ;
        }
		if (!me->is_fighting() ) {
	     call_out("leave",0);
	     return;
	    }
	    if(environment(me)!=environment(who)||!who->is_fighting()) {
             call_out("leave",0);
             return;
         }
/*        if(!target->is_fighting())
        {
        call_out("leave",0);
        return;
        } */
 if( random(100) < 50)
 {
    enemy=me->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    kee = random(target->query("kee")*0.4);
    if( env == environment(target) )
    {
message_vision(HIY"四周卷起一阵气流，将$N卷入天空重摔于地。\n"+NOR,target);
      target->receive_damage("kee", kee);
      target->receive_wound("kee", random(kee) );
      target->receive_wound("sen", random(5) );
      target->receive_wound("gin", random(5) );
      COMBAT_D->report_status(target,0);
    }
	}
        
     
 

 if((me->query("kee")<me->query("max_kee")*0.1) && (random(100) < 5) )
 {
    tell_room(environment(), HIG"灵鹰"HIC"眼见主人的生命如"NOR+RED"风中残蠋"HIC"，仰天泣鸣不停，其声"HIY"惊天地"HIC"，"HIG"泣鬼神"HIC"，瞬间"HIM"天地灵气"HIC"齐聚，星象异变\n\n                    "HIW"～　"HIR"鹰　　　魂　　　"HIY"泣　　　天　　　地　"HIW"～"NOR"\n\n"HIM"灵鹰吸收日月精华，身影不断的涨大，瞬息间奔向敌人缠绕其身，悲鸣一声，灵鹰自爆产生一股\n巨大的毁灭力，令万物毁灭，天地重生，周遭人物尽数毁灭，其主人受鹰魂所佑顺利逃过此一劫数。\n"+NOR);
   ob->die();
 }

   ::heart_beat();

}

void leave()
{
        object who = query_leader();

        message_vision ("$N"HIY"说道:吾之责任尽了，主人多加珍重！\n" +
        HIC"四周渐渐泛起一阵云雾，$N"HIC"长啸数声朝天飞驰而去。\n" NOR, this_object());
        if (who)
        who->set_temp("have_hawk",0);
        destruct(this_object());
}

void unconcious ()
{
        object who = query_leader();
        if (who)
        who->set_temp("have_hawk",0);
  message_vision (HIR"$N惨叫一声啊！天灵地气化为乌有，消失的无影无踪。\n", this_object ());
  destruct (this_object());
}

void die()
{
        object who = query_leader();
        if (who)
        who->set_temp("have_hawk",0);
        message_vision ("$N"HIR"惨叫一声  啊！  恕我无法再保护主人了。\n"NOR, this_object());
        destruct (this_object());

        ::die();
}
