//阴阳掌法 by bss

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void cold(object me, object victim, object  weapon, int damage);
void fire(object me, object victim, object  weapon, int damage);
void again1(object me, object victim, object weapon, int damage);
void together(object me, object victim, object  weapon, int damage);

mapping *action = ({
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中"HIC"阴"NOR"招的起手式"HIC"「苍松迎客”"NOR"，右掌平推而出，一道寒风由$N掌中拍出，令人不禁打起冷颤。\n",
"dodge":-60,
"parry":50,
"force":60,
"damage":50,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中"HIR"阳"NOR"招的起手式"HIR"「开门辑盗”"NOR"，左掌由上而下猛劈而出，一股热风随着$N的掌势而出，使人有种不舒服的闷热感。\n",
"dodge":-60,
"parry":50,
"force":70,
"damage":55,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「梅雪争春”"NOR"，右掌如雪花翻飞击向$n。\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":60,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「梅雪逢夏”"NOR"，左掌如连珠般向$n拍出了一十二掌。\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":65,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「老枝横斜”"NOR"，左掌平举，右掌由左胁下斜穿而出，击向$n的$l。\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":70,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「长者折枝”"NOR"，左掌高举，迅速地下拍击向$n的$l。\n",
"dodge":-90,
"parry":80,
"force":100,
"damage":75,
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「明驼西来”"NOR"，右掌并指成剑，迅雷般刺向$n的$l。\n",
"dodge":-100,
"parry":80,
"force":100,
"damage":80,
"damage_type" : "刺伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「千钧压驼”"NOR"，左掌撮指成刀，疾电般劈向$n的$l。\n",
"dodge":-100,
"parry":80,
"force":100,
"damage":85,
"damage_type" : "砍伤",
]),

(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「风沙莽莽”"NOR"，右掌掌势似有狂风黄沙之重压，教$n透不过气来。\n",
"dodge":-100,
"parry":80,
"force":110,
"damage":90,
"post_action":  (: cold :),
"damage_type" : "瘀伤",
]),
(["action":
"$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「大海沉沙”"NOR"，左掌掌势如有怒海洪涛之汹涌，教$n心惊胆颤。\n",
"dodge":-100,
"parry":90,
"force":110,
"damage":95,
"post_action":  (: fire :),
"damage_type" : "瘀伤",
]),
(["action":
HIY"$N顿时领悟了「"HIC"阴"HIR"阳"NOR"循环，"HIB"生生不息"NOR"”的道理，将阴阳掌法融合后狂击而出"
NOR,
"dodge":-100,
"parry":100,
"force":90,
"damage":40,
"post_action":  (: again1 :),
"damage_type" : "瘀伤",
]),
(["action":"$N顿悟「"HIC"阴"HIR"阳"NOR"合壁，地动天惊”之精义，左右两掌将阴阳气劲揉合后拍出，瞬间形成一龙卷风袭向$n。\n",
"dodge":-500,
"parry":-500,
"force":0,
"damage":-100,
"post_action":  (: together :),
"damage_type" : "瘀伤",
]),

});

mapping query_action(object me, object weapon)
{
   int skill_level, limit;
   skill_level = (int)(me->query_skill("taiganfist", 1));
   limit= (int)( skill_level/ 10);
      if (limit < 2 )
         return action[random(4 )];
      else if (limit < 3 )
         return action[random(5 )];
      else if (limit < 4 )
         return action[random(6 )];
      else if (limit < 5 )
         return action[random(7)];
      else if (limit < 6 )
         return action[random(8 )];
      else if (limit < 7 )
         return action[random(10)];
      else if (limit < 8 )
         return action[random(11)];
         return action[random(12)];
}
void cold(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("taiganfist", 1);
   message_vision("$N受到阴阳掌法中阴气的侵袭，看来是受到了冻伤了\n",victim);
   victim->add("kee", -(skill* 3));
   victim->apply_condition("cold",random(5)+((int)me->query_skill("taiganfist",1)/5));
   COMBAT_D->report_status(victim, 1);
}
void fire(object me, object victim, object  weapon, int damage)
{
   int skill = me->query_skill("taiganfist", 1);
   message_vision("$N受到阴阳掌法中阳气的侵袭，看来是受到了灼伤了\n",victim);
   victim->add("kee",-(skill* 3));
   victim->apply_condition("burn",random(5)+((int)me->query_skill("taiganfist",1)/5));
   COMBAT_D->report_status(victim, 1);
}

void again1(object me, object victim, object weapon, int damage)
{
 int skill_level=me->query_skill("taiganfist",1),bound;
 bound = victim->query("max_kee"); //根据对手的kee来决定扣多少
 bound = (bound/100)*5;            //扣5%的kee
  if( random(100) < 80 && me->query("force",1) > 100 )
  {
       message_vision(
sprintf(HIW"\n$N运起太乙\罡\气，全身胧罩在一片似蓝似红的气劲下!!\n\n"NOR),me ,victim);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中"HIC"阴"NOR"招的起手式"HIC"「苍松迎客”"NOR"，右掌平推而出，一道寒风由$N掌中拍出，令人不禁打起冷颤。\n"),me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中"HIR"阳"NOR"招的起手式"HIR"「开门辑盗”"NOR"，左掌由上而下猛劈而出，一股热风随着$N的掌势而出，使人有种不舒服的闷热感。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「梅雪争春”"NOR"，右掌如雪花翻飞击向$n。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「梅雪逢夏”"NOR"，左掌如连珠般向$n拍出了一十二掌。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「老枝横斜”"NOR"，左掌平举，右掌由左胁下斜穿而出，击向$n。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「长者折枝”"NOR"，左掌高举，迅速地下拍击向$n。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「明驼西来”"NOR"，右掌并指成剑，迅雷般刺向$n。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「千钧压驼”"NOR"，左掌撮指成刀，疾电般劈向$n。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIC"阴"NOR"招"HIC"「风沙莽莽”"NOR"，右掌掌势似有狂风黄沙之重压，教$n透不过气来。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
sprintf("$N使出"HIC"阴"HIR"阳"NOR"掌法中的"HIR"阳"NOR"招"HIR"「大海沉沙”"NOR"，左掌掌势如有怒海洪涛之汹涌，教$n心惊胆颤。\n"), me ,victim);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
        me->start_busy(1);
}
}
void together(object me, object victim, object  weapon, int damage)
 {
     int skill_level;
     skill_level = (int)(me->query_skill("taiyiforce", 1));
if (skill_level >= 90 )
{
message_vision(HIW"$n被$N的阴阳龙卷真气，卷至半空中，～～～砰～～～的一声，真气爆裂开来，$n被爆震波震的老远。\n"NOR,me,victim);
        victim->add("kee",-700);
        me->add("force",-170);
victim->apply_condition("hart",random(5)+((int)me->query_skill("taiyiforce",1)/10));
        victim->start_busy(1);
     COMBAT_D->report_status(victim, 1);
}
}

int valid_learn(object me)
{
        if(!(me->query("class") != "taigan")) {
            tell_object(me, "只有太监才能学阴阳掌法。\n");
            return 0;
        }
       if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
       return   notify_fail("学阴阳掌法必须空手。\n");

        return 1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" );
}

