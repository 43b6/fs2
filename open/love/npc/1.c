#include <ansi.h>
inherit NPC;
inherit SSERVER;
void bleed(object me, object victim, object  weapon, int damage);
void block(object me, object victim, object  weapon, int damage);
void suck(object me, object victim, object  weapon, int damage);
void berserk(object me, object victim, object weapon, int damage);
mapping *action = ({
([ "action" : "$N使出绝情大法第一招"+HIG+"【风】"+NOR+"，$N举起手，口中喃喃唸咒文，此时$n的四周刮起强风，将$n包围，且像刀般锋利攻向$n的$l攻去。",
                "damage":300,
                "post_action":  (: bleed :),
                "damage_type":   "割伤",]),
([ "action" : "$N使出绝情大法第二招"+HIR+"【火】"+NOR+"，$n举起手，口唸咒文，此时地上冒出地狱之火向$n的$l烧去。",
                "damage":300,
                "post_action":  (: block :),
                "damage_type":   "烧伤",]),
([ "action" : "$N使出绝情大法第三招"+HIY+"【雷】"+NOR+"，$N举起手，口唸咒文，突然雷声大作，让$n呆了一阵。",
                "damage":300,
                "post_action":  (: suck :),
                "damage_type":   "震伤",]),
([ "action" : "$N使出绝情大法第四招"+HIB+"【电】"+NOR+"，$N举起手，口唸咒文，天空聚集一电柱向$n射去。",
                "damage":300,
                "post_action":  (: bleed :),
                "damage_type":   "刺伤",]),
([ "action" : HIW"$N举起手，口唸咒文，使出绝情大法奥义"+NOR+HIY+"【天崩地裂】。"NOR,
                "damage_type":   "震伤",
                "post_action":  (: berserk :),]),
});

void create()
{
 set_name("林枫",({"fon"}));
 set("nickname","绝情门主");
 set("long","他在一位绝情门门主，是名震塞外的门派，自创绝情神指，非常厉害
，听说他有本「绝情大法秘笈”。\n");
 set("gender","男性");
 set("combat_exp",1000000);
 set("age",45);
 set("str", 44);
 set("cor", 34);
 set("cps", 18);
 set("per", 24);
 set("int", 42);
 set("kee",3000);
 set("max_kee",3000);
 set("gin",1600);
 set("max_gin",1600);
 set("force",2000);
 set("max_force",2000);
 set("force_factor",1);
 set("bellicosity",2000);
 set_skill("dodge",100);
 set_skill("force",80);
 set_skill("unarmed",80);
 set("chat_chance_combat",30);
 set("chat_msg_combat",({
 "林枫说: 竟敢擅入绝情门!\n",
 }));
 set_temp("apply/armor",50);
 set_temp("apply/damage",30);
 setup();
 set("default_actions", (: call_other, __FILE__,"query_action" :));
carry_object("/open/love/obj/ring.c")->wield();
carry_object("/open/love/obj/cloth1.c")->wear();
carry_object("/open/love/obj/shield.c")->wear();
carry_object("/open/love/obj/neck.c")->wear();

 reset_action();
}

mapping query_action()
{
   return action[random(sizeof(action))];
}

void bleed(object me, object victim, object weapon, int damage)
 {
        int bellpower = (int)me->query("bellicosity")/500+1;
        if(damage > 50 && !me->query_temp("berserk"))
        {
                if(me->query("force") < 5*bellpower) return;
        }
 }

void block(object me, object victim, object weapon, int damage)
 {
  int times = (int)me->query_skill("force",1)/20+2;
  int bellpower = (int)me->query("bellicosity")/500+1;
  if(me->query_skill_mapped("force")=="force" && !me->query_temp("berserk"))
   {
    if(me->query("force") < 2*times*bellpower) return;
   }
 }

void suck(object me, object victim, object  weapon, int damage)
 {
        int lose;
        int bellpower = (int)me->query("bellicosity")/500+1;
        if( damage > 0 && victim->query("force") > 0 && me->query_skill_mapped("
force") == "force" && !me->query_temp("berserk"))
        {
         if(me->query("kee") < 60+bellpower*10) return;
          { 
           lose = ((int)me->query_skill("force",1)/20+2)*bellpower;
           if( victim->query("force") < lose)
            {
             lose = victim->query("force");
             COMBAT_D->report_status(victim, 1);
             start_busy(1);
            }
          }
        }
 }
       
void berserk(object me, object victim, object weapon, int damage)
{
  int lose, i;
  int bellpower = (int)me->query("bellicosity")/500+1;
  if(!me->query_temp("berserk") && random(me->query("combat_exp")) > random(victim->query("combat_exp")))
  {  
   lose = random((int)me->query_skill("force",1)/20+2)*bellpower;
   set_temp("berserk", 1);
   for(i = 0;i < lose; i++)
   {
    message_vision(HIC"$N发出绝情大法奥义，向$n连连攻去。\n"NOR,me,victim);
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"));  
   }
   delete_temp("berserk");
  }
}

void greeting(object ob)
{
    int exp,lv_1;
    string skill;
    object weapon;
    exp =ob->query("combat_exp",1);
      weapon = ob->query_temp("weapon");
      if( weapon ) skill = weapon->query("skill_type");
      else skill = "unarmed";
      lv_1 =(int) 1.8 * ob->query_skill(skill, 1);
    return;
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,kee,force;

 mob = this_object();
 env = environment(mob);

 if( random(70) < 15)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.2;
    if( env == environment(target) )
    {
     message_vision(HIW+"$N看见林枫，祭起"+HIY+"「绝情诀”"+HIW+"以精化气，以
气御神，以神聚力，只见林枫的"+HIR+"手臂通红"+HIW+"，
直向$N的"+HIR+"心脏"+HIW+"抓来，你顿时"+HIR+"血液流了不少\n"+NOR,
target);
     target->receive_damage("kee",(int)kee,mob);
     COMBAT_D->report_status(target,0);
    }
        }
 }
  set_heart_beat(1);
  ::heart_beat();
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj10/maple_yin")->move(environment(winner));
	  message_vision(HIM"\n从林枫的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/maple_yin",sprintf("%s(%s) 让林枫掉下了枫灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/maple_yin")->move(environment(winner));
	  message_vision(HIM"\n从林枫的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/maple_yin",sprintf("%s(%s) 让林枫掉下了枫灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

