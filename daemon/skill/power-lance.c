// made in hide  :P

#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void booldk(object me,object victim,object weapon,int damage);
void power(object me, object victim, object  weapon, int damage);

void busyk(object me, object victim, object  weapon, int damage);

 

mapping *action = ({

   ([
        "action":
"$N使出爆力美学基本式，一招"HIR"「爆裂残击”"NOR"，对准$n的肚子狠狠的一捅",

        "dodge"      :               -25,

        "parry"      :               -20,

        "damage"     :                20,

        "force"      :                50,

        "damage_type":               "捅伤"

   ]),
  ([
        "action"     :
"$N犹如屠夫般发展攻势，使出一招"HIM"「暴徒狂杀”"NOR"拿起$w来一直往$n身上攻去",

        "dodge"      :               -50,

        "parry"      :               -10,

        "damage"     :                30,

        "force"      :                80,

        "damage_type":               "刺伤"

   ]),
  ([
        "action"     :
"$N狂乱鬼叫，家伙一提，使出一招"HIC"「狂爆傲喉”"NOR"往$n的喉部一枪刺去",

        "dodge"      :               -10,

        "parry"      :               -25,

        "damage"     :                60,

        "force"      :                100,

        "damage_type":               "刺伤"
   ]),

  ([
        "action"     :
"$N聚集所有力量，使出爆力美学的"HIY"「爆舞煽挂”"NOR"$N舞起$w来分别击向$n的头喉心",

        "dodge"      :               -30,

        "parry"      :               -5,

        "damage"     :                90,

        "force"      :                150,

        "damage_type":               "刺伤"

   ]),

  ([

        "action"     :
"$N气运丹田手中$w高举于头上，一招"HIG"「爆岩斩”"NOR"将力气惯于双臂，突乎其然斩向$n",
         "dodge"      :               -30,

         "parry"      :               -30,

         "damage"     :                110,

         "force"      :                180,

         "damage_type":               "斩伤"

   ]),
([
         "action"     :
"$N运起全身功力，气集于$w使出一招"BLINK+HIR"「爆炎枪尖屠”"NOR"尖上的"HIR"火舌缓缓蠕动"NOR"煞那间"HIR"火舌"NOR"突乎其然奔向$n",
         "dodge"      :               -20,

         "parry"      :               -45,

         "damage"     :                130,

         "force"      :                220,

         "damage_type":               "灼伤"

   ]),

  ([

         "action"     :
"$N横起枪来，使出爆力美学一式「"HIC"超"HIR"爆"HIW"裂"HIY"狂啸击”"NOR"，使出了前所未有的超爆狂力朝$n身上狂刺过去",

         "dodge"      :               -50,

         "parry"      :               -50,

         "damage"     :                160,

         "force"      :                350,

         "post_action":               (: busyk :),

         "damage_type":               "刺伤"

  ]),

 ([      "action"     :             "$N使出爆力美学火爆式\n"
                              "<<"HIR"‘爆能格斗杀人法’"NOR">>\n"
                        HIY"$N单手拿着$w疾步奔向$n，连环使出杀人技巧\n"
                              "‘ 连蹴转身空烈闪身单翼冲 ’\n"
                              "$N像暴徒般向$n使出爆裂攻击\n"NOR,
                 "dodge"     :                80,

                 "parry"     :                50,

                 "damage"    :                160,

                 "force"     :                150,

                 "post_action":               (: booldk :),

                 "damage_type":               "刺伤",

  ]),
 ([      "action"     :       "$N使出爆力美学超爆式\n"
                          "<<"HIY"‘浮身乱弹击’"NOR">>\n"
              HIC"$N将全身能量，准备一次爆发出来，此时$N全身充满了力气\n"
                     "$N感觉到全身向着了火一样，全身爆出无数光芒\n"
                        "$N像饥虎直冲$n，狂乱般的攻击$n\n"NOR,
                 "dodge"     :                80,

                 "parry"     :                50,

                 "damage"    :                170,

                 "force"     :                150,

                 "post_action":               (: power :),

                 "damage_type":               "刺伤",

  ]),

});

 

int valid_learn(object me)

{

        object ob;

 

        if((int)me->query("max_force")<150)

                return notify_fail("你的内力不够，不能练爆力美学。\n");

 
        if( (string)me->query_skill_mapped("force")!= "spforce")

                return notify_fail("爆力美学必需配合爆烈心法才能用。\n");

 
        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "lance" )

                return notify_fail("你必须有枪才能练枪法。\n");

 

        return 1;   

}

 
int valid_enable(string usage)

{

        return ( usage=="lance" )||(usage=="parry");

}

 


mapping query_action(object me, object weapon)

{

   return action[random(sizeof(action))];

}

 

void booldk(object me, object victim, object  weapon, int damage)

{

        int i,time = random((int)me->query_skill("power-lance",1)/20 ) ;

	if( me->query("force_factor") >= 10 )

	{

          if( me->query_temp("booldk") == 0 )

	  {
            me->set_temp("booldk",1);
message_vision(sprintf(BLINK+HIM"$N藉由鲜血,使自身杀气提升到最高峰,枪枪直取死穴。\n"NOR),me);

	    for(i=0;i<=time;i++)

            me->add("force",-70);

	      COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

            me->delete_temp("booldk");

	  }

	}
}

 
void busyk(object me, object victim, object weapon, int damage)
{

  if(random(500) < me->query("bellicosity"))

  if(random(100) < me->query_skill("speed-lance",1))

{

  victim->set("start_busy",2);

  me->add("force",-50);

  message_vision(sprintf(BLINK+HIY"$N趁着$n招架不住时,继续出招,枪势之疾$n已快撑不住了.\n"NOR),me,victim);

}

}

 
void power(object me, object victim, object  weapon, int damage)

{
    int dept, i, test,pow,pow1;
        pow1 = 0;
        pow  = 0;

        if(!me->query_temp("power" ))

                dept = (int)(me->query_skill("power-lance", 1)/15 + 1);

                me->set_temp("power", 1);

                for(i = 0;i < dept; i++)
                {
                          pow = random(10)+4;

                          pow1 = pow1+0.5*pow;

                        me->set_temp("apply/attack", pow1);

                        message_vision(

                       HIG"$N使出爆力美学之超爆式‘浮身乱弹击’，拿起家伙狂乱般的捅向$n。\n"NOR , me, victim);

                        victim->add("kee",-1*pow1);

                        me->add("force",-7);

           COMBAT_D->report_status(victim);

                }

                me->delete_temp("apply/attack");

                me->delete_temp("power");

        }


 

 

int practice_skill(object me)

 {

        if( (int)me->query("kee") < 30

        ||      (int)me->query("force") < 5)

                return notify_fail("你的内力或气不够，不能练爆力美学。\n");

        me->receive_damage("kee", 30);

        me->add("force", -5);

        return 1;

 }

 

string perform_action_file(string action)

{
        return CLASS_D("soldier")+"/soldier/"+action;

}

 

 

