// KING_ROAD_SWORD.c

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack0(object me, object victim, object  weapon, int damage);

int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);

mapping *action = ({
	([	"action":		HIC"$N将真气灌注于$w$"HIC"，使出"HIY"「秋末悲歌”"HIC"一式，只听见$w"HIC"发出阵阵悲鸣之声，$n渐渐受悲鸣之声所扰！",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                300,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action":		HIC"$N将真气化为阴阳两劲，使出"HIR"「日月同天”"HIC"一式，连续配合剑气挥击，只见剑气化为日月两形，以不同方向击向$n",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                350,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action":		HIC"$N突然将招式狂转已身法为主，使出"WHT"「搏命”"HIC"一式，$n只见到$N的之残影在身边，无法确定$N真身所在，已在$n$l留下数道剑痕",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                400,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action":		HIC"$N狂舞手中$w"HIC"，使出"HIB"「欲望之海”"HIC"，剑气瞬间形成一道无形漩涡迅捷的将$n卷入其中",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                450,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action":		HIC"$N将剑气凝聚成一阴柔剑气，使出治病剑招"HIM"「无怨无尤”，剑气瞬间由$n的$l窜入，进入$n经脉之中",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                500,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action":		HIC"$N真气游走全身，使出"HIG"「庐山不动一剑痕”"HIC"，真气化为无形剑气在周身产生绵密的保护网，$n丝毫看不透此招近身攻击，$n陷入网中",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                550,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
	([	"action"     :		HIC"$N缓唸一段剑诀："HIW"「指天为名、拄地为功、忘弃红尘”"HIC"，随后身形急旋而上，幻化出无数身影后，剑气四散而出，$n瞬时被剑气笼罩",
                "dodge"      :                -100,
                "parry"      :                -100,
                "damage"     :                340,
                "post_action":                (: sp_attack0 :),
                "damage_type":               "刺伤"
	]),
});
int valid_enable(string usage)
{
        return (usage=="sword")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp_attack0(object me, object victim, object  weapon, int damage)
{
  int i;

  message_vision(HIR
    "$N领悟出将王者之路招与招之间串连之法、连绵不绝的剑诀, "
    "剑式一式接着一式连贯出招, 剑式有如涛涛江水连绵不绝!!\n"NOR, me, victim);
  for (i = 0;i < 15; i++)
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
