
// weapond.c
 
#include <ansi.h>
#include <combat.h>
 
mapping weapon_actions = ([
        "hit": ([
                "damage_type":  "撞伤",
                "action":               "$N挥动$w，撞向$n的$l",
                "parry":                20,
                ]),
        
        "claw": ([
                "damage_type":  "抓伤",
                "action":              "$N用$w往$n的$l抓去",
                "parry": -20,         
                ]),
                 
        "slash": ([
                "damage_type":  "割伤",
                "action":               "$N挥动$w，斩向$n的$l",
                "parry":                20,
                "post_action":  (: call_other,__FILE__,"damage_weapon" :),
                ]),
        
        "slice": ([
                "damage_type":  "斲伤",
                "action":               "$N用$w往$n的$l砍去",
                "dodge":                20,
                ]),
        "chop": ([
                "damage_type":  "斲伤",
                "action":               "$N的$w朝着$n的$l劈将过去",
                "parry":                -20,
                ]),
        "hack": ([
                "action":               "$N挥舞$w，对准$n的$l一阵乱砍",
                "damage_type":  "斲伤",
                "damage":               30,
                "dodge":                30,
                ]),
        "thrust": ([
                "damage_type":  "刺伤",
                "action":               "$N用$w往$n的$l刺去",
                "dodge":                15,
                "parry":                -15,
                ]),
        "pierce": ([
                "action":               "$N的$w往$n的$l狠狠地一捅",
                "damage_type":  "刺伤",
                "dodge":                -30,
                "parry":                -30,
                ]),
        "whip": ([
                "action":               "$N将$w一扬，往$n的$l抽去",
                "damage_type":  "鞭伤",
                "dodge":                -20,
                "parry":                30,
                ]),
        "impale": ([
                "action":               "$N用$w往$n的$l直戳过去",
                "damage_type":  "刺伤",
                "dodge":                -10,
                "parry":                -10,
                ]),
        "bash": ([
                "action":               "$N挥舞$w，往$n的$l用力一锤",
                "damage_type":  "挫伤",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "crush": ([
                "action":               "$N高高举起$w，往$n的$l当头砸下",
                "damage_type":  "挫伤",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "slam": ([
                "action":               "$N手握$w，眼露凶光，猛地对准$n的$l挥了过去",
                "damage_type":  "挫伤",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]),
        "throw": ([
                "action":               "$N将$w对准$n的$l射了过去",
                "damage_type":  "刺伤",
                "post_action":  (: call_other, __FILE__, "throw_weapon" :),
                ]),
        "arrow": ([
                "action":               "$N将$w瞄准$n的$l射了过去",
                "damage_type":  "射伤",
                "post_action":  (: call_other, __FILE__, "arrow_weapon" :),
                ]),
        "bow"  : ([
                "action":               "$N将$w瞄准$n的$l打了过去",
                "damage_type":  "瘀伤",
                "post_action":  (: call_other, __FILE__, "bash_weapon" :),
                ]), 
]);
varargs mapping query_action()
{
        string verb, *verbs;
 
        verbs = previous_object()->query("verbs");
 
        if( !pointerp(verbs) ) return weapon_actions["hit"];
        else {
                verb = verbs[random(sizeof(verbs))];
                if( !undefinedp(weapon_actions[verb]) )
                  return weapon_actions[verb];
                else return weapon_actions["hit"];
        }
}
 
void throw_weapon(object me, object victim, object weapon, int damage)
{
        if( objectp(weapon) ) {
                if( (int)weapon->query_amount()==1 ) {
                        weapon->unequip();
                    tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
                }
                weapon->add_amount(-1);
        }
}
void arrow_weapon(object me, object victim, object weapon, int damage)
{
         if( objectp(weapon) ) {
                if( (int)weapon->query_amount()==1 ) {
                        weapon->unequip();
                      tell_object(me, "\n你的" + weapon->query("name")+ "用完了! \n\n");

                }
                weapon->add_amount(-1);
        }
}
 

void bash_weapon(object me, object victim, object weapon, int damage)
{
        object ob;
        int wap, wdp,apr,dpr;

        if( objectp(weapon)
        &&      damage==RESULT_PARRY
        &&      ob = victim->query_temp("weapon") ) {
        
        apr = (int)weapon->query("rigidity");   //硬度
        dpr = (int)ob->query("rigidity");
        if(apr >20) apr=20;
        if(dpr >20) dpr=20;
        
                wap = (int)weapon->weight() / 500
                        + apr/5
                        + (int)me->query("str");
                wdp = (int)ob->weight() / 500
                        + dpr/5
                        + (int)victim->query("str");
                wap = random(wap);
                if( wap > 2 * wdp ) {
                        message_vision(HIW "只听见「啪”地一声，$N手中的" + ob->name()
                                + "已经断为两截！\n" NOR, victim );
                        ob->unequip();
                        ob->move(environment(victim));
                        ob->set("name", "断掉的" + ob->query("name"));
                        ob->set("value", (int)ob->query("value") / 10);
                        ob->set("weapon_prop", 0);
                        victim->reset_action();
                } else if( wap > wdp ) {
                        message_vision(HIW "$N只觉得手中" + ob->name() + "把持不定，脱手飞出！\n" NOR,
                                victim);
                        ob->unequip();
                        ob->move(environment(victim));
                        victim->reset_action();
                } else if( wap > wdp / 2 ) {
                        message_vision("$N只觉得手中" + ob->name() + "一震，险些脱手！\n",
                                victim);
                }
                else {
                        message_vision("$N的" + weapon->name() + "和$n的" + ob->name()
                                + "相击，冒出点点的火星。\n", me, victim);
                }
        }
}
 
// 这不晓得是谁写的喔
// 不见得武器都有 query("weapon_prop/damage") 吧?
void damage_weapon(object me,object target,object weapon,int damage)
{
	"/adm/daemons/weapon_material.c"->weapon_material(me,target);
/*
  object ob=target->query_temp("weapon");
  int ap,dp,apr,dpr;
 
  // 听说有点 bug, 但是又不太确定, 我就加了下面这个 check
  // fixed by wade 11/22/1995
  if (!weapon || !ob || !weapon->query("weapon_prop/damage") || !ob->query("weapon_prop/damage"))
    return;
    
  apr = (int)weapon->query("rigidity")/2;
  dpr =(int)ob->query("rigidity");
  if( apr > 50)
     apr=50;
  if( dpr > 100)
     dpr=100;   
  
  ap = weapon->query("weapon_prop/damage")
       + apr 
       + me->query("force")*me->query("force_factor")/400;
  dp = ob->query("weapon_prop/damage")
       + dpr 
       + target->query("force")*target->query("force_factor")/400;
  ap = random(ap);

  if( ap > 3*dp )
  {
        message_vision(
      "$N的"+weapon->name()+"「唰”地一声，把$n的"+ob->name()+"削成两段\n",me,target);
           ob->unequip();
	   ob->move(environment(target));
           ob->set("name", "断掉的" + ob->query("name"));
           ob->set("value", (int)ob->query("value") / 10);
           ob->set("weapon_prop", 0);
	   target->reset_action();
   
  }else if( ap > 2*dp && ob->query("weapon_prop/damage") >6 ) 
     {
       message_vision(
      "$N的"+weapon->name()+"把$n的"+ob->name()+"砍出了一个缺口\n",me,target);
       ob->unequip();
       ob->add("weapon_prop/damage",-5);
       ob->wield();
     }
*/
}
